// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCOMPOSENAVBARCANVASVIEWCONTROLLER_H
#define CKCOMPOSENAVBARCANVASVIEWCONTROLLER_H

@class UIViewController, UIButton, NSString, UILabel;
@protocol CKNavigationBarCanvasViewDelegate, CKNavbarCanvasViewControllerDelegate;


#import "CKNavigationBarCanvasView.h"

@interface CKComposeNavbarCanvasViewController : UIViewController <CKNavigationBarCanvasViewDelegate>



@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) CKNavigationBarCanvasView *canvasView; // ivar: _canvasView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKNavbarCanvasViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldConfigureForJunkModal;
-(BOOL)shouldShowAvatarView;
-(CGFloat)_preferredHeightForTraitCollection:(id)arg0 ;
-(id)_windowTraitCollection;
-(struct NSDirectionalEdgeInsets )systemMinimumLayoutMarginsForView:(id)arg0 ;
-(void)_initializeForTraitCollection:(id)arg0 ;
-(void)_setupDefaultCanvasView;
-(void)loadView;
-(void)updateContentsForConversation:(id)arg0 ;
-(void)updateTitle:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLoad;


@end


#endif