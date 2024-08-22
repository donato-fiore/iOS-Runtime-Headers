// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSOSDEFAULTS_H
#define SBSOSDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBSOSDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) BOOL disablesForAccessibility;
@property (nonatomic) BOOL performedCheckForTripleClickSOSMigrationAlert;


-(BOOL)clawCanTriggerSOS;
-(BOOL)isAutomaticCallCountdownEnabled;
-(NSInteger)lockButtonSOSTriggerCount;
-(void)_bindAndRegisterDefaults;


@end


#endif