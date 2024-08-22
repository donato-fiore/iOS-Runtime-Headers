// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVPPLAYLIST_H
#define TVPPLAYLIST_H

@class NSMutableArray, NSArray, NSDictionary, NSString;
@protocol TVPMediaItem;

#import <Foundation/Foundation.h>


@interface TVPPlaylist : NSObject {
    NSMutableArray *_shuffledItems;
    NSArray *_upcomingItems;
}


@property (readonly, nonatomic) NSArray *activeList; // ivar: _activeList
@property (readonly, nonatomic) NSUInteger activeListIndex; // ivar: _activeListIndex
@property (retain, nonatomic) NSDictionary *changeContext; // ivar: _changeContext
@property (nonatomic) NSUInteger count; // ivar: _count
@property (nonatomic) NSUInteger currentIndex; // ivar: _currentIndex
@property (retain, nonatomic) NSObject<TVPMediaItem> *currentMediaItem; // ivar: _currentMediaItem
@property (nonatomic) NSInteger endAction; // ivar: _endAction
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSObject<TVPMediaItem> *nextMediaItem; // ivar: _nextMediaItem
@property (nonatomic) NSUInteger numConsecutivePlaybackFailures; // ivar: _numConsecutivePlaybackFailures
@property (retain, nonatomic) NSObject<TVPMediaItem> *previousMediaItem; // ivar: _previousMediaItem
@property (nonatomic) NSInteger repeatMode; // ivar: _repeatMode
@property (readonly, nonatomic) BOOL shuffleEnabled; // ivar: _shuffleEnabled
@property (nonatomic) BOOL skipExplicit; // ivar: _skipExplicit
@property (readonly, nonatomic) BOOL supportsRepeat;
@property (readonly, nonatomic) BOOL supportsShuffle;
@property (readonly, nonatomic) NSArray *trackList; // ivar: _trackList
@property (readonly, nonatomic) NSUInteger upNextIndex; // ivar: _upNextIndex
@property (readonly, nonatomic) NSArray *upcomingItems;
@property (nonatomic) NSUInteger upcomingItemsLimit; // ivar: _upcomingItemsLimit
@property (nonatomic) BOOL windowed; // ivar: _windowed


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg0 ;
-(BOOL)_isMediaItemExplicit:(id)arg0 ;
-(BOOL)changeToActiveListIndex:(NSUInteger)arg0 withContext:(id)arg1 ;
-(BOOL)isEqualToPlaylist:(id)arg0 ;
-(BOOL)moreItemsAvailable:(NSInteger)arg0 ;
-(NSUInteger)_nextActiveListIndex;
-(NSUInteger)_previousActiveListIndex;
-(id)init;
-(id)initWithMediaItems:(id)arg0 index:(NSInteger)arg1 isCollection:(BOOL)arg2 ;
-(void)_shuffle:(BOOL)arg0 ;
-(void)_updateCurrent:(BOOL)arg0 andNextItems:(BOOL)arg1 withContext:(id)arg2 ;
-(void)addItem:(id)arg0 ;
-(void)addItems:(id)arg0 ;
-(void)addItemsToUpNext:(id)arg0 ;
-(void)changeMedia:(NSInteger)arg0 ;
-(void)changeMedia:(NSInteger)arg0 withContext:(id)arg1 ;
-(void)insertItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertItems:(id)arg0 atIndexes:(id)arg1 ;
-(void)removeItemAtIndex:(NSUInteger)arg0 ;
-(void)removeItemsAtIndexes:(id)arg0 ;


@end


#endif