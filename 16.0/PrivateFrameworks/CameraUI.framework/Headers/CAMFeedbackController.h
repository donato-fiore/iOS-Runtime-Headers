// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMFEEDBACKCONTROLLER_H
#define CAMFEEDBACKCONTROLLER_H

@class NSMutableSet, UISelectionFeedbackGenerator, _UIButtonFeedbackGenerator;

#import <Foundation/Foundation.h>


@interface CAMFeedbackController : NSObject

@property (readonly, nonatomic) NSMutableSet *_activePairedFeedbackGenerators; // ivar: __activePairedFeedbackGenerators
@property (readonly, nonatomic) UISelectionFeedbackGenerator *_burstCountFeedbackGenerator; // ivar: __burstCountFeedbackGenerator
@property (readonly, nonatomic) UISelectionFeedbackGenerator *_modeSelectionFeedbackGenerator; // ivar: __modeSelectionFeedbackGenerator
@property (readonly, nonatomic) _UIButtonFeedbackGenerator *_shutterButtonLatchingOffFeedbackGenerator; // ivar: __shutterButtonLatchingOffFeedbackGenerator
@property (readonly, nonatomic) _UIButtonFeedbackGenerator *_shutterButtonLatchingOnFeedbackGenerator; // ivar: __shutterButtonLatchingOnFeedbackGenerator
@property (readonly, nonatomic) _UIButtonFeedbackGenerator *_shutterButtonMomentaryFeedbackGenerator; // ivar: __shutterButtonMomentaryFeedbackGenerator


-(id)_debugStringForPairedFeedback:(NSUInteger)arg0 ;
-(id)_feedbackGeneratorForDiscreteFeedback:(NSUInteger)arg0 ;
-(id)_feedbackGeneratorForPairedFeedback:(NSUInteger)arg0 ;
-(id)init;
-(void)performDiscreteFeedback:(NSUInteger)arg0 ;
-(void)performPressButtonFeedback:(NSUInteger)arg0 ;
-(void)performReleaseButtonFeedback:(NSUInteger)arg0 ;
-(void)prepareButtonFeedback:(NSUInteger)arg0 ;
-(void)prepareDiscreteFeedback:(NSUInteger)arg0 ;


@end


#endif