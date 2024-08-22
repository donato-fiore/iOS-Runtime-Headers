// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLDETAILITEMVIEWCONTROLLER_H
#define QLDETAILITEMVIEWCONTROLLER_H

@class QLItemViewController, UIStackView, UIButton, UIView, NSString, NSArray;


#import "QLFileIconImageView.h"
#import "QLDetailItemViewControllerState.h"

@interface QLDetailItemViewController : QLItemViewController {
    QLFileIconImageView *_filePreviewImageView;
    UIStackView *_informationStackView;
    UIButton *_actionIconButton;
    UIButton *_actionButton;
    BOOL _isSettingStateAnimated;
    UIView *_currentActionButtonView;
    NSString *_previewTitle;
}


@property (retain, nonatomic) NSArray *information; // ivar: _information
@property (retain, nonatomic) QLDetailItemViewControllerState *state; // ivar: _state


-(BOOL)canEnterFullScreen;
-(BOOL)canPinchToDismiss;
-(BOOL)canSwipeToDismiss;
-(id)_scalableSystemFontOfSize:(CGFloat)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_setActionButtonView:(id)arg0 animated:(BOOL)arg1 actionButtonLabel:(id)arg2 informationVisible:(BOOL)arg3 ;
-(void)_updateInformation;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)performAction;
-(void)setAppearance:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLoad;


@end


#endif