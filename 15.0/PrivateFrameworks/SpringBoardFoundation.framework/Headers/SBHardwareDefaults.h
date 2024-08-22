// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHARDWAREDEFAULTS_H
#define SBHARDWAREDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBHardwareDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) BOOL disableHomeButton;
@property (readonly, nonatomic) BOOL disableHomeButtonDoublePress;
@property (readonly, nonatomic) BOOL disableProximitySensor;
@property (nonatomic) BOOL hasSeenACaseLatchCoverOnce;
@property (nonatomic) NSInteger homeButtonHapticType;
@property (readonly, nonatomic) BOOL useHardwareSwitchAsOrientationLock;


-(void)_bindAndRegisterDefaults;


@end


#endif