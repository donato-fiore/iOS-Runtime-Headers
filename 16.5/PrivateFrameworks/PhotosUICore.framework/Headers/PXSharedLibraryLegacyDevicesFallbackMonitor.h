// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYLEGACYDEVICESFALLBACKMONITOR_H
#define PXSHAREDLIBRARYLEGACYDEVICESFALLBACKMONITOR_H

@class NSArray;


#import "PXObservable.h"

@interface PXSharedLibraryLegacyDevicesFallbackMonitor : PXObservable

@property (readonly, nonatomic) NSArray *devices; // ivar: _devices
@property (readonly, nonatomic) NSInteger state; // ivar: _state


+(id)legacyDevicesFallbackMonitorIfEnabledWithSharedLibraryOrPreviewPresent:(BOOL)arg0 ;
-(id)_init;
-(id)init;
-(void)_updateLegacyDevices:(id)arg0 error:(id)arg1 ;


@end


#endif