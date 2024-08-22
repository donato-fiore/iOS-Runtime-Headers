// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSLEGACYSETTINGSSYNCMANAGER_H
#define DNDSLEGACYSETTINGSSYNCMANAGER_H

@class NPSManager, NPSDomainAccessor, NSString;
@protocol DNDSSettingsSyncManager, DNDSSettingsSyncManagerDataSource, DNDSSettingsSyncManagerDelegate;

#import <Foundation/Foundation.h>


@interface DNDSLegacySettingsSyncManager : NSObject <DNDSSettingsSyncManager>

 {
    BOOL _listen;
    BOOL _send;
    NPSManager *_npsManager;
    NPSDomainAccessor *_accessor;
}


@property (weak, nonatomic) NSObject<DNDSSettingsSyncManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSSettingsSyncManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)receiveManagerForPairedDevice:(id)arg0 ;
+(id)sendManagerForPairedDevice:(id)arg0 ;
+(void)cleanupState;
-(id)_initWithListen:(BOOL)arg0 send:(BOOL)arg1 pairedDevice:(id)arg2 ;
-(void)_beginMonitoringForChanges;
-(void)_endMonitoringForChanges;
-(void)_propagateBypassSettings:(id)arg0 ;
-(void)_propagateScheduleSettings:(id)arg0 ;
-(void)_updateBypassSettings;
-(void)_updateScheduleSettingsWithDate:(id)arg0 ;
-(void)dealloc;
-(void)resume;
-(void)update;


@end


#endif