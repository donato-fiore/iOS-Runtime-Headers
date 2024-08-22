// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBROTATIONDEFAULTS_H
#define SBROTATIONDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBRotationDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) NSInteger lastLockedOrientation;
@property (readonly, nonatomic, getter=isPostModernRotationForciblyEnabled) BOOL postModernRotationForciblyEnabled;
@property (readonly, nonatomic, getter=isVideoRotationEnabled) BOOL videoRotationEnabled;


-(void)_bindAndRegisterDefaults;


@end


#endif