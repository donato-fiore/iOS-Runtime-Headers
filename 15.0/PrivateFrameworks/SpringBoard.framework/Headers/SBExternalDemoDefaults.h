// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBEXTERNALDEMODEFAULTS_H
#define SBEXTERNALDEMODEFAULTS_H

@class BSAbstractDefaultDomain;



@interface SBExternalDemoDefaults : BSAbstractDefaultDomain

@property (readonly, nonatomic) BOOL shouldLockIconsInStoreDemoMode;


-(id)init;
-(void)_bindAndRegisterDefaults;


@end


#endif