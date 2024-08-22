// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CFXFEEDBACKCONTROLLER_H
#define CFXFEEDBACKCONTROLLER_H

@class NSMutableSet, _UIButtonFeedbackGenerator, CUShutterButton;

#import <Foundation/Foundation.h>


@interface CFXFeedbackController : NSObject

@property (readonly, nonatomic) NSMutableSet *_activePairedFeedbackGenerators; // ivar: __activePairedFeedbackGenerators
@property (readonly, nonatomic) _UIButtonFeedbackGenerator *_shutterButtonLatchingOffFeedbackGenerator; // ivar: __shutterButtonLatchingOffFeedbackGenerator
@property (readonly, nonatomic) _UIButtonFeedbackGenerator *_shutterButtonLatchingOnFeedbackGenerator; // ivar: __shutterButtonLatchingOnFeedbackGenerator
@property (readonly, nonatomic) _UIButtonFeedbackGenerator *_shutterButtonMomentaryFeedbackGenerator; // ivar: __shutterButtonMomentaryFeedbackGenerator
@property (nonatomic) NSUInteger feedbackToPerform; // ivar: _feedbackToPerform
@property (readonly, nonatomic) CUShutterButton *shutterButton; // ivar: _shutterButton


-(id)_debugStringForPairedFeedback:(NSUInteger)arg0 ;
-(id)_feedbackGeneratorForPairedFeedback:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithShutterButton:(id)arg0 ;
-(void)performPressButtonFeedback:(NSUInteger)arg0 ;
-(void)performReleaseButtonFeedback:(NSUInteger)arg0 ;
-(void)prepareButtonFeedback:(NSUInteger)arg0 ;
-(void)shutterButtonDown:(id)arg0 ;
-(void)shutterButtonUp:(id)arg0 ;


@end


#endif