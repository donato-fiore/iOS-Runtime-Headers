// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSMEDIASYNCINFO_H
#define NMSMEDIASYNCINFO_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface NMSMediaSyncInfo : NSObject {
    int _notifyToken;
}


@property (retain, nonatomic) NSDictionary *info; // ivar: _info
@property (readonly, nonatomic) NSUInteger target; // ivar: _target
@property (readonly, nonatomic, getter=_isValid) BOOL valid;


+(id)_mediaSyncInfoDirectory;
-(BOOL)_hasItemsForContainer:(id)arg0 ;
-(BOOL)hasContainer:(id)arg0 ;
-(BOOL)hasDownloadableItemsWithinStorageLimitForContainer:(id)arg0 ;
-(BOOL)hasItem:(id)arg0 ;
-(BOOL)hasItemsOverStorageLimit;
-(BOOL)hasItemsOverStorageLimitForContainer:(id)arg0 ;
-(BOOL)hasItemsWaitingWithoutPauseReason;
-(BOOL)hasItemsWaitingWithoutPauseReasonForContainer:(id)arg0 ;
-(BOOL)isItemOverStorageLimit:(id)arg0 ;
-(NSUInteger)downloadPauseReason;
-(NSUInteger)downloadPauseReasonForContainer:(id)arg0 ;
-(NSUInteger)downloadPauseReasonForItem:(id)arg0 ;
-(NSUInteger)itemCount;
-(NSUInteger)numberOfItemsOverStorageLimitForContainer:(id)arg0 ;
-(NSUInteger)playabilityForContainer:(id)arg0 ;
-(NSUInteger)status;
-(NSUInteger)statusForContainer:(id)arg0 ;
-(NSUInteger)statusForItem:(id)arg0 ;
-(float)progress;
-(float)progressForContainer:(id)arg0 ;
-(float)progressForItem:(id)arg0 ;
-(id)_identifiersWithKeepLocalStates:(id)arg0 modelKind:(id)arg1 ;
-(id)_initWithTarget:(NSUInteger)arg0 readAndObserveChanges:(BOOL)arg1 ;
-(id)_notificationName;
-(id)_preferencesApplicationID;
-(id)_preferencesInfoKey;
-(id)_syncInfoFilePath;
-(id)_syncInfoModelKindForMPModelKind:(id)arg0 ;
-(id)allAlbums;
-(id)allPlaylists;
-(id)containers;
-(id)initWithTarget:(NSUInteger)arg0 ;
-(id)itemsForContainer:(id)arg0 ;
-(id)keepLocalEnabledAlbums;
-(id)keepLocalEnabledPlaylists;
-(id)userInfoForContainer:(id)arg0 ;
-(id)userInfoForItem:(id)arg0 ;
-(void)_readInfo;
-(void)_registerForInfoChanged;
-(void)dealloc;


@end


#endif