// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASONBOARDINGSCREENDATA_H
#define ICASONBOARDINGSCREENDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASOnboardingScreenType.h"
#import "ICASOnboardingUserAction.h"

@interface ICASOnboardingScreenData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASOnboardingScreenType *onboardingScreenType; // ivar: _onboardingScreenType
@property (readonly, nonatomic) ICASOnboardingUserAction *onboardingUserAction; // ivar: _onboardingUserAction


+(id)dataName;
-(id)initWithOnboardingScreenType:(id)arg0 onboardingUserAction:(id)arg1 ;
-(id)toDict;


@end


#endif