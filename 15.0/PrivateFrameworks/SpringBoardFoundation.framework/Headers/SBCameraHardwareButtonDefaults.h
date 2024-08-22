// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCAMERAHARDWAREBUTTONDEFAULTS_H
#define SBCAMERAHARDWAREBUTTONDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBCameraHardwareButtonDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) CGFloat shutterButtonLongPressCancellationTimeout;
@property (readonly, nonatomic) CGFloat shutterButtonLongPressTimeout;
@property (readonly, nonatomic) BOOL shutterButtonShouldUsePocketDetection;


-(void)_bindAndRegisterDefaults;


@end


#endif