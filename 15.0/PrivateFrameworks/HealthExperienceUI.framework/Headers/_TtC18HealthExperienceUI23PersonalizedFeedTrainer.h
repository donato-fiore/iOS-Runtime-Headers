// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI23PERSONALIZEDFEEDTRAINER_H
#define _TTC18HEALTHEXPERIENCEUI23PERSONALIZEDFEEDTRAINER_H

@class SwiftObject;



@interface _TtC18HealthExperienceUI23PersonalizedFeedTrainer : SwiftObject {
    ? feedItemDisplayBegan;
    ? feedItemDurations;
    ? tapEvents;
    ? sessionWasBackgrounded;
    ? delegate;
    ? dwellPolicy;
}




-(void)appDidBecomeActive;
-(void)appDidEnterBackground;


@end


#endif