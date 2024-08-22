// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPASSSELECTIONFIELDDETECTORMANAGER_H
#define NPKPASSSELECTIONFIELDDETECTORMANAGER_H

@class PKFieldDetector, NSString;
@protocol PKFieldDetectorDelegate, PKFieldDetectorObserver, NPKPassesDataSourceObserver, NPKLowPowerModeMonitorObserver, NPKPassesDataSource, NPKPassSelectionFieldDetectorManagerDelegate;

#import <Foundation/Foundation.h>

#import "NPKLowPowerModeLocalDeviceMonitor.h"

@interface NPKPassSelectionFieldDetectorManager : NSObject <PKFieldDetectorDelegate, PKFieldDetectorObserver, NPKPassesDataSourceObserver, NPKLowPowerModeMonitorObserver>

 {
    PKFieldDetector *_fieldDetector;
    BOOL _fieldDetectEnabled;
    os_unfair_lock_s _fieldDetectorLock;
    NPKLowPowerModeLocalDeviceMonitor *_lowPowerModeMonitor;
}


@property (weak, nonatomic) NSObject<NPKPassesDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NPKPassSelectionFieldDetectorManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fieldDetectEnabled;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldEnableFieldDetectWithPasses:(id)arg0 lowPowerModeMonitor:(id)arg1 ;
-(BOOL)fieldDetectorShouldProcessFieldEvents:(id)arg0 ;
-(id)_applicablePassUniqueIDsWithFieldProperties:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 lowPowerModeMonitor:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 lowPowerModeMonitor:(id)arg1 delegate:(id)arg2 ;
-(id)initWithDataSource:(id)arg0 lowPowerModeMonitor:(id)arg1 delegate:(id)arg2 fieldDetector:(id)arg3 ;
-(void)_setFieldDetector:(id)arg0 ;
-(void)fieldDetectorDidEnterField:(id)arg0 withProperties:(id)arg1 ;
-(void)lowPowerModeMonitor:(id)arg0 didUpdateLowPowerModeEnabled:(BOOL)arg1 ;
-(void)passesDataSource:(id)arg0 didAddPasses:(id)arg1 ;
-(void)passesDataSource:(id)arg0 didRemovePasses:(id)arg1 ;
-(void)passesDataSource:(id)arg0 didUpdatePasses:(id)arg1 ;
-(void)passesDataSourceDidReloadPasses:(id)arg0 ;
-(void)passesDataSourceDidReorderPasses:(id)arg0 ;


@end


#endif