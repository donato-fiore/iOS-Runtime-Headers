// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CFXTHERMALPOLICYMANAGER_H
#define CFXTHERMALPOLICYMANAGER_H

@class NSString;
@protocol JFXVideoCameraThermalDelegate;

#import <Foundation/Foundation.h>

#import "JFXThermalPolicyManager.h"

@interface CFXThermalPolicyManager : NSObject <JFXVideoCameraThermalDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) JFXThermalPolicyManager *policyManager; // ivar: _policyManager
@property (nonatomic) BOOL recordingPolicy; // ivar: _recordingPolicy
@property (readonly) Class superclass;


-(id)init;
-(void)CFX_notifyPolicyChanged;
-(void)cameraFPSForThermalLevel:(int)arg0 deviceType:(id)arg1 minRate:(*int)arg2 maxRate:(*int)arg3 ;


@end


#endif