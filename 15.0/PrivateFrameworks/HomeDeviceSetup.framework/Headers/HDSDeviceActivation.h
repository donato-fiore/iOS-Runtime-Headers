// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSDEVICEACTIVATION_H
#define HDSDEVICEACTIVATION_H


#import <Foundation/Foundation.h>


@interface HDSDeviceActivation : NSObject



-(id)_setupUserAgent;
-(void)_mae_activateWithData:(id)arg0 headers:(id)arg1 completion:(id)arg2 ;
-(void)_mae_createActivationWithData:(id)arg0 completion:(id)arg1 ;
-(void)_mae_createSessionWithCompletion:(id)arg0 ;
-(void)_mae_getActivationStateWithCompletion:(id)arg0 ;
-(void)performActivationStep:(id)arg0 completion:(id)arg1 ;


@end


#endif