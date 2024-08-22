// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKWATCHAPPINSTALLATIONMANAGEROBSERVERBRIDGE_H
#define _HKWATCHAPPINSTALLATIONMANAGEROBSERVERBRIDGE_H

@protocol HKWatchAppInstallationManagerObserver;

#import <Foundation/Foundation.h>

#import "HKObserverBridgeHandle.h"

@interface _HKWatchAppInstallationManagerObserverBridge : NSObject <HKWatchAppInstallationManagerObserver>



@property (readonly, nonatomic) HKObserverBridgeHandle *handle; // ivar: _handle


-(id)initWithHandle:(id)arg0 ;
-(void)watchAppInstallationManagerDidObserveChange:(id)arg0 ;


@end


#endif