// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FAVORITEMANAGER_H
#define FAVORITEMANAGER_H

@class NSRecursiveLock, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface FavoriteManager : NSObject

@property (retain, nonatomic) NSRecursiveLock *dictLock; // ivar: _dictLock
@property (retain, nonatomic) NSMutableDictionary *favoriteDictionary; // ivar: _favoriteDictionary
@property (nonatomic, getter=isMigrating) BOOL migrating; // ivar: _migrating
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (retain, nonatomic) NSObject<OS_dispatch_group> *serialQueueGroup; // ivar: _serialQueueGroup


+(BOOL)favoriteRanges:(id)arg0 containRange:(struct _NSRange )arg1 ;
+(id)collapseRanges:(id)arg0 ;
+(id)sharedFavoriteManager;
+(id)subtractRange:(struct _NSRange )arg0 fromRange:(struct _NSRange )arg1 ;
+(id)trimRanges:(id)arg0 toMovie:(id)arg1 ;
-(BOOL)FAILSAFE_isInvalidRangesArray:(id)arg0 ;
-(BOOL)favoriteRange:(struct _NSRange )arg0 existsForMovie:(id)arg1 ;
-(BOOL)favoritesExistInRange:(struct _NSRange )arg0 forMovie:(id)arg1 ;
-(id)_favoriteInfoForURL:(id)arg0 ;
-(id)_favoriteRangesForURL:(id)arg0 ;
-(id)_init;
-(id)combinedRCRangeArrayFromNSRangeArray:(id)arg0 ;
-(id)favoriteRangesForMovie:(id)arg0 ;
-(id)propertyListFileURL;
-(void)_removeFavoriteInfoForURL:(id)arg0 ;
-(void)_setFavoriteInfo:(id)arg0 forURL:(id)arg1 ;
-(void)_setFavoriteRanges:(id)arg0 forURL:(id)arg1 ;
-(void)addFavoriteRange:(struct _NSRange )arg0 forMovie:(id)arg1 ;
-(void)addFavoriteRange:(struct _NSRange )arg0 forMovie:(id)arg1 shouldCollapse:(BOOL)arg2 ;
-(void)loadFavoriteDictionary;
-(void)migrate;
-(void)removeAllFavoritesForMovie:(id)arg0 ;
-(void)removeFavoriteRange:(struct _NSRange )arg0 forMovie:(id)arg1 ;
-(void)saveFavoriteDictionary;
-(void)unfavoriteRange:(struct _NSRange )arg0 forMovie:(id)arg1 ;
-(void)waitForOutstandingWritingToComplete;


@end


#endif