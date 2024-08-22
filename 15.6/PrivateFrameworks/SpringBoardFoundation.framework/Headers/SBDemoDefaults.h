// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBDEMODEFAULTS_H
#define SBDEMODEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBDemoDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic, getter=isStoreDemoApplicationLockEnabled) BOOL storeDemoApplicationLockEnabled;


-(void)_bindAndRegisterDefaults;


@end


#endif