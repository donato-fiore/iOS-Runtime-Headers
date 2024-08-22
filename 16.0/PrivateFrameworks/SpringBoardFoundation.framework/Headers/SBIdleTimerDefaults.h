// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBIDLETIMERDEFAULTS_H
#define SBIDLETIMERDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBIdleTimerDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic, getter=isBacklightLoggingEnabled) BOOL backlightLoggingEnabled;
@property (readonly, nonatomic) BOOL disableAttentionAwareness;
@property (readonly, nonatomic) BOOL disableAutoDim;
@property (readonly, nonatomic) BOOL dontDimOrLockWhileConnectedToPower;
@property (readonly, nonatomic) CGFloat minimumLockscreenIdleTime;
@property (readonly, nonatomic) BOOL supportLiftToWake;
@property (readonly, nonatomic) BOOL supportTapToWake;


-(void)_bindAndRegisterDefaults;


@end


#endif