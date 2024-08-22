// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMBUISYNCINFOCONTROLLER_H
#define NMBUISYNCINFOCONTROLLER_H

@class NMSMediaSyncInfoUpdaterHeartbeat, NSUserDefaults, NSString, NMSMediaSyncInfo;
@protocol NMBUIPowerSourceInfoDelegate, NMBUISyncInfoControllerDataSource;

#import <Foundation/Foundation.h>

#import "NMBUIPowerSourceInfo.h"

@interface NMBUISyncInfoController : NSObject <NMBUIPowerSourceInfoDelegate>

 {
    NMSMediaSyncInfoUpdaterHeartbeat *_syncInfoUpdaterHeartbeat;
    NMBUIPowerSourceInfo *_powerSourceInfo;
    NSUserDefaults *_greenTeaDefaults;
    BOOL _isObservingSyncInfo;
}


@property (weak, nonatomic) NSObject<NMBUISyncInfoControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NMSMediaSyncInfo *syncInfo; // ivar: _syncInfo
@property (readonly, nonatomic) NSUInteger target; // ivar: _target


-(BOOL)_musicCellularDownloadingAllowedOnWatch;
-(NSUInteger)downloadStateForModelObject:(id)arg0 ;
-(float)progressForModelObject:(id)arg0 ;
-(id)_bundleIdentifierForTarget;
-(id)_musicSyncInfoMessageWithStatus:(NSUInteger)arg0 downloadPauseReason:(NSUInteger)arg1 ;
-(id)initWithSyncInfoTarget:(NSUInteger)arg0 ;
-(id)syncStatusDetailText;
-(void)_handleMediaSyncInfoDidUpdateNotification:(id)arg0 ;
-(void)_handleMusicCellularDownloadsAllowedDidChangeNotification:(id)arg0 ;
-(void)beginObservingSyncInfo;
-(void)endObservingSyncInfo;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)powerSourceInfoHasExternalPowerSourceConnectedDidChange:(id)arg0 ;


@end


#endif