// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBEXTERNALWIFIDEFAULTS_H
#define SBEXTERNALWIFIDEFAULTS_H

@class BSAbstractDefaultDomain;



@interface SBExternalWifiDefaults : BSAbstractDefaultDomain

@property (nonatomic) BOOL wifiEnabled;


-(id)init;
-(void)_bindAndRegisterDefaults;


@end


#endif