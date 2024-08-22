// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBEXTERNALSETUPDEFAULTS_H
#define SBEXTERNALSETUPDEFAULTS_H

@class BSAbstractDefaultDomain, NSString;



@interface SBExternalSetupDefaults : BSAbstractDefaultDomain

@property (nonatomic, getter=isDeviceSetup) BOOL deviceSetup;
@property (readonly, nonatomic) NSString *setupState;


-(id)init;
-(void)_bindAndRegisterDefaults;


@end


#endif