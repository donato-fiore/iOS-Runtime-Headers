// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBTRAITSARBITERDEFAULTS_H
#define SBTRAITSARBITERDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBTraitsArbiterDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic, getter=isTraitsArbiterEnabled) BOOL traitsArbiterEnabled;


-(void)_bindAndRegisterDefaults;


@end


#endif