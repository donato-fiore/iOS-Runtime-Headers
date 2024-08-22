// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTEXTINPUTFEEDBACKCONTROLLER_H
#define PKTEXTINPUTFEEDBACKCONTROLLER_H

@protocol PKTextInputFeedbackControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKTextInputGestureFeedbackView.h"
#import "PKTextInputTextPlaceholder.h"
#import "PKTextInputElementContent.h"

@interface PKTextInputFeedbackController : NSObject

@property (retain, nonatomic) PKTextInputGestureFeedbackView *_feedbackView; // ivar: __feedbackView
@property (weak, nonatomic) NSObject<PKTextInputFeedbackControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger feedbackType; // ivar: _feedbackType
@property (retain, nonatomic) PKTextInputTextPlaceholder *placeholder; // ivar: _placeholder
@property (retain, nonatomic) PKTextInputElementContent *referenceElementContent; // ivar: _referenceElementContent
@property (nonatomic) _NSRange referenceTextRange; // ivar: _referenceTextRange
@property (readonly, nonatomic) PKTextInputTextPlaceholder *reserveSpacePlaceholder;
@property (nonatomic, setter=_setShowingCustomFeedback:) BOOL showingCustomFeedback; // ivar: _showingCustomFeedback


-(BOOL)_shouldShowCustomFeedback;
-(id)init;
-(void)_placeholderChanged:(id)arg0 ;
-(void)_updateFeedbackState;
-(void)_updateFeedbackView;
-(void)beginDisplayForReserveSpacePlaceholder:(id)arg0 ;
-(void)cancelShowingReserveSpaceIntro;
-(void)dealloc;
-(void)endDisplayForReserveSpacePlaceholder:(id)arg0 ;


@end


#endif