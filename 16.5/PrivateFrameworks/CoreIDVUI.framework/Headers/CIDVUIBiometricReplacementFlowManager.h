// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIDVUIBIOMETRICREPLACEMENTFLOWMANAGER_H
#define CIDVUIBIOMETRICREPLACEMENTFLOWMANAGER_H


#import <Foundation/Foundation.h>

#import "_TtC9CoreIDVUI45CIDVUIInternalBiometricReplacementFlowManager.h"

@interface CIDVUIBiometricReplacementFlowManager : NSObject

@property (retain, nonatomic) _TtC9CoreIDVUI45CIDVUIInternalBiometricReplacementFlowManager *biometricReplacementFlowManager; // ivar: _biometricReplacementFlowManager


-(id)init;
-(void)beginBiometricReplacement:(id)arg0 ;
-(void)beginBiometricReplacementForWatch:(id)arg0 ;
// -(void)beginBiometricReplacementWithAuthenticationHandler:(id)arg0 andCompletion:(unk)arg1  ;


@end


#endif