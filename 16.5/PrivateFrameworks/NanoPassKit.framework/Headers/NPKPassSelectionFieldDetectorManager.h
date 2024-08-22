// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPASSSELECTIONFIELDDETECTORMANAGER_H
#define NPKPASSSELECTIONFIELDDETECTORMANAGER_H

@class PKFieldDetector, NSString;
@protocol PKFieldDetectorObserver, NPKPassesDataSourceObserver, NPKLowPowerModeMonitorObserver, OS_dispatch_queue, NPKPassesDataSource, NPKPassSelectionFieldDetectorManagerDelegate;

#import <Foundation/Foundation.h>

#import "NPKLowPowerModeLocalDeviceMonitor.h"

@interface NPKPassSelectionFieldDetectorManager : NSObject <PKFieldDetectorObserver, NPKPassesDataSourceObserver, NPKLowPowerModeMonitorObserver>

 {
    PKFieldDetector *_fieldDetector;
    NSObject<OS_dispatch_queue> *_fieldDetectorUpdateQueue;
    NPKLowPowerModeLocalDeviceMonitor *_lowPowerModeMonitor;
}


@property (weak, nonatomic) NSObject<NPKPassesDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NPKPassSelectionFieldDetectorManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldEnableFieldDetectWithPasses:(id)arg0 lowPowerModeMonitor:(id)arg1 ;
-(id)_applicablePassUniqueIDsWithFieldProperties:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 lowPowerModeMonitor:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 lowPowerModeMonitor:(id)arg1 delegate:(id)arg2 ;
-(void)fieldDetectorDidEnterField:(id)arg0 withProperties:(id)arg1 ;
-(void)lowPowerModeMonitor:(id)arg0 didUpdateLowPowerModeEnabled:(BOOL)arg1 ;
-(void)passesDataSource:(id)arg0 didAddPasses:(id)arg1 ;
-(void)passesDataSource:(id)arg0 didRemovePasses:(id)arg1 ;
-(void)passesDataSource:(id)arg0 didUpdatePasses:(id)arg1 ;
-(void)passesDataSourceDidReloadPasses:(id)arg0 ;
-(void)passesDataSourceDidReorderPasses:(id)arg0 ;
-(void)setFieldDetectEnabled:(BOOL)arg0 ;


@end


#endif