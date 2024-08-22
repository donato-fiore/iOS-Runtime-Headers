// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVREVENTHAPTIC_H
#define TVREVENTHAPTIC_H

@class UISelectionFeedbackGenerator, UIImpactFeedbackGenerator;

#import <Foundation/Foundation.h>


@interface TVREventHaptic : NSObject {
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
}




-(void)playImpactEventHaptic;
-(void)playSelectionEventHaptic;


@end


#endif