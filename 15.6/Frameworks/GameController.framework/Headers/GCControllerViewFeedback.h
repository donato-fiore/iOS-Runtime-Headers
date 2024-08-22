// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCCONTROLLERVIEWFEEDBACK_H
#define GCCONTROLLERVIEWFEEDBACK_H

@class UIImpactFeedbackGenerator;

#import <Foundation/Foundation.h>


@interface GCControllerViewFeedback : NSObject {
    UIImpactFeedbackGenerator *_feedbackGeneratorHeavy;
    UIImpactFeedbackGenerator *_feedbackGeneratorLight;
}




+(id)sharedInstance;
-(id)init;
-(void)buttonDown;
-(void)buttonUp;
-(void)thumbstickLimit;


@end


#endif