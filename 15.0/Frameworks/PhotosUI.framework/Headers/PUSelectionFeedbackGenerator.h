// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUSELECTIONFEEDBACKGENERATOR_H
#define PUSELECTIONFEEDBACKGENERATOR_H

@class UISelectionFeedbackGenerator;

#import <Foundation/Foundation.h>


@interface PUSelectionFeedbackGenerator : NSObject

@property (readonly, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator


-(id)init;
-(void)performFeedback;
-(void)prepareFeedback;


@end


#endif