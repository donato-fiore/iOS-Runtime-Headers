// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFOVERLAYIMAGEEDITOROPTIONSVIEW_H
#define WFOVERLAYIMAGEEDITOROPTIONSVIEW_H

@class UIView, UIButton, UILabel;
@protocol WFOverlayImageEditorOptionsViewDelegate;


#import "WFOverlayImageEditorOptionButton.h"

@interface WFOverlayImageEditorOptionsView : UIView

@property (readonly, weak, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (weak, nonatomic) NSObject<WFOverlayImageEditorOptionsViewDelegate> *delegate; // ivar: _delegate
@property (readonly, weak, nonatomic) UIButton *nextButton; // ivar: _nextButton
@property (readonly, weak, nonatomic) UILabel *nextLabel; // ivar: _nextLabel
@property (readonly, weak, nonatomic) WFOverlayImageEditorOptionButton *opacityButton; // ivar: _opacityButton
@property (readonly, weak, nonatomic) WFOverlayImageEditorOptionButton *resetButton; // ivar: _resetButton
@property (readonly, weak, nonatomic) WFOverlayImageEditorOptionButton *rotationButton; // ivar: _rotationButton
@property (readonly, weak, nonatomic) UIView *topBorder; // ivar: _topBorder


-(id)init;
-(void)didTapCancelButton;
-(void)didTapNextButton;
-(void)didTapOpacityButton;
-(void)didTapResetButton;
-(void)didTapRotationButton;


@end


#endif