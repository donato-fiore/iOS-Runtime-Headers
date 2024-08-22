// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTHERMALDEFAULTS_H
#define SBTHERMALDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBThermalDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) BOOL wasConnectedToWiFiWhenBrickedForThermalConditions;


-(void)_bindAndRegisterDefaults;


@end


#endif