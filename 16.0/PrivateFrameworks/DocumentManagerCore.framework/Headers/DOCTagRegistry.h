// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DOCTAGREGISTRY_H
#define DOCTAGREGISTRY_H

@class NSPointerArray, NSString, NSMutableOrderedSet, NSArray;
@protocol DOCTagRegistryProtocol;

#import <Foundation/Foundation.h>

#import "DOCTagCloudSource.h"

@interface DOCTagRegistry : NSObject <DOCTagRegistryProtocol>

 {
    int _localStorageDidUpdateNotifyToken;
}


@property (readonly, nonatomic) NSPointerArray *changeObservers; // ivar: _changeObservers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableOrderedSet *discoveredTags; // ivar: _discoveredTags
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DOCTagCloudSource *iCloudDataSource; // ivar: _iCloudDataSource
@property (nonatomic) NSInteger inBatchUpdateCount; // ivar: _inBatchUpdateCount
@property (nonatomic) BOOL shouldSynchronizeAfterBatchUpdate; // ivar: _shouldSynchronizeAfterBatchUpdate
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tagSerialNumber; // ivar: _tagSerialNumber
@property (retain, nonatomic) NSArray *tagsBeforeBatchUpdate; // ivar: _tagsBeforeBatchUpdate
@property (retain, nonatomic) NSMutableOrderedSet *userTags; // ivar: _userTags


+(id)sanitizedTagName:(id)arg0 ;
+(id)shared;
+(id)sharedInstance;
-(BOOL)_canAddTag:(id)arg0 ;
-(BOOL)addTag:(id)arg0 ;
-(BOOL)canReplaceTag:(id)arg0 withTag:(id)arg1 ;
-(BOOL)inBatchUpdate;
-(BOOL)insertTag:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(BOOL)isValidNewTagName:(id)arg0 ;
-(BOOL)moveTag:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(BOOL)replaceTag:(id)arg0 withTag:(id)arg1 ;
-(id)_allTags;
-(id)_memberTag:(id)arg0 ;
-(id)_setForTagType:(NSInteger)arg0 ;
-(id)_tagNameForComparing:(id)arg0 ;
-(id)init;
-(id)tagForName:(id)arg0 ;
-(void)_enumerateObserversWithBlock:(id)arg0 ;
-(void)_notifyDidRemoveTagIfNoLongPresentExistingTags:(id)arg0 ;
-(void)addChangeObserver:(id)arg0 ;
-(void)addTag:(id)arg0 options:(NSInteger)arg1 ;
-(void)addTags:(id)arg0 options:(NSInteger)arg1 ;
-(void)dealloc;
-(void)inBatchUpdateEnter;
-(void)inBatchUpdateLeave;
-(void)notifyObserversDidRemoveTags:(id)arg0 ;
-(void)notifyObserversDidReplaceTag:(id)arg0 withTag:(id)arg1 ;
-(void)performBatchUpdate:(id)arg0 ;
-(void)removeAllTagsOfType:(NSInteger)arg0 ;
-(void)removeChangeObserver:(id)arg0 ;
-(void)removeTags:(id)arg0 ;
-(void)synchronize;


@end


#endif