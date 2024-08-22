// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPREVIEWINTERACTIONFAILURERELATIONSHIPGESTURERECOGNIZER_H
#define _UIPREVIEWINTERACTIONFAILURERELATIONSHIPGESTURERECOGNIZER_H

@class NSString;
@protocol UIGestureRecognizerDelegate;


#import "UIGestureRecognizer.h"
#import "UIPreviewInteraction.h"

@interface _UIPreviewInteractionFailureRelationshipGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIPreviewInteraction *previewInteraction; // ivar: _previewInteraction
@property (readonly) Class superclass;


-(id)initWithPreviewInteraction:(id)arg0 ;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setStateToFailed;
-(void)setStateToRecognized;


@end


#endif