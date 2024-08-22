// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKWRISTDETECTIONSETTINGMANAGEROBSERVERBRIDGE_H
#define _HKWRISTDETECTIONSETTINGMANAGEROBSERVERBRIDGE_H

@protocol HKWristDetectionSettingManagerObserver;

#import <Foundation/Foundation.h>

#import "HKObserverBridgeHandle.h"

@interface _HKWristDetectionSettingManagerObserverBridge : NSObject <HKWristDetectionSettingManagerObserver>



@property (readonly, nonatomic) HKObserverBridgeHandle *handle; // ivar: _handle


-(id)initWithHandle:(id)arg0 ;
-(void)wristDetectionSettingManagerDidObserveWristDetectChange:(id)arg0 ;


@end


#endif