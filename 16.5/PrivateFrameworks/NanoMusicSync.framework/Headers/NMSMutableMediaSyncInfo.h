// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSMUTABLEMEDIASYNCINFO_H
#define NMSMUTABLEMEDIASYNCINFO_H

@class NSMutableDictionary;


#import "NMSMediaSyncInfo.h"

@interface NMSMutableMediaSyncInfo : NMSMediaSyncInfo {
    BOOL _needsUpdateAggregateInfo;
}


@property (retain, nonatomic) NSMutableDictionary *info;


+(id)requiredUserInfoPropertiesForModelKind:(id)arg0 ;
-(BOOL)hasItemsOverStorageLimit;
-(BOOL)hasItemsOverStorageLimitForContainer:(id)arg0 ;
-(BOOL)hasItemsWaitingWithoutPauseReason;
-(NSUInteger)_persistingOptions;
-(NSUInteger)downloadPauseReason;
-(NSUInteger)downloadPauseReasonForContainer:(id)arg0 ;
-(NSUInteger)playabilityForContainer:(id)arg0 ;
-(NSUInteger)status;
-(NSUInteger)statusForContainer:(id)arg0 ;
-(float)progress;
-(float)progressForContainer:(id)arg0 ;
-(id)_infoForContainer:(id)arg0 ;
-(id)_infoForItem:(id)arg0 ;
-(id)initWithTarget:(NSUInteger)arg0 ;
-(void)_notifyInfoChanged;
-(void)_updateAggregateInfoIfNeeded;
-(void)_writeInfo;
-(void)setDownloadPauseReason:(NSUInteger)arg0 forItem:(id)arg1 ;
-(void)setItems:(id)arg0 forContainer:(id)arg1 ;
-(void)setOverStorageLimit:(BOOL)arg0 forItem:(id)arg1 ;
-(void)setOverStorageLimitBehavior:(NSUInteger)arg0 forContainer:(id)arg1 ;
-(void)setProgressBytes:(NSUInteger)arg0 totalBytes:(NSUInteger)arg1 forItem:(id)arg2 ;
-(void)setStatus:(NSUInteger)arg0 forItem:(id)arg1 ;
-(void)setUserInfo:(id)arg0 forContainer:(id)arg1 ;
-(void)setUserInfo:(id)arg0 forItem:(id)arg1 ;
-(void)setUserInfoForModelObject:(id)arg0 manuallyPinned:(BOOL)arg1 ;
-(void)synchronize;


@end


#endif