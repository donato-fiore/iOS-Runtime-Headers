// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLUIDDISMISSALSTATE_H
#define SBFLUIDDISMISSALSTATE_H

@class NSString;
@protocol SiriUIFluidDismissalState;

#import <Foundation/Foundation.h>


@interface SBFluidDismissalState : NSObject <SiriUIFluidDismissalState>



@property (nonatomic) CGFloat backgroundWeighting;
@property (nonatomic) CGFloat backgroundWeighting; // ivar: _backgroundWeighting
@property (nonatomic) CGRect contentRect;
@property (nonatomic) CGRect contentRect; // ivar: _contentRect
@property (nonatomic) CGFloat contentWeighting;
@property (nonatomic) CGFloat contentWeighting; // ivar: _contentWeighting
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger dismissalType; // ivar: _dismissalType
@property (readonly) NSUInteger hash;
@property (nonatomic) CGRect homeGrabberContentRect; // ivar: _homeGrabberContentRect
@property (readonly) Class superclass;
@property (nonatomic) NSInteger transitionPhase; // ivar: _transitionPhase




@end


#endif