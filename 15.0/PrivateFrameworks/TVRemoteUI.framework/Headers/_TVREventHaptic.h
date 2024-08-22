// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVREVENTHAPTIC_H
#define _TVREVENTHAPTIC_H

@class UISelectionFeedbackGenerator, UIImpactFeedbackGenerator;

#import <Foundation/Foundation.h>


@interface _TVREventHaptic : NSObject {
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
}




-(void)playImpactEventHaptic;
-(void)playSelectionEventHaptic;


@end


#endif