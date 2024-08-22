// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVBGIMAGELOADINGVIEWCONTROLLER_H
#define _TVBGIMAGELOADINGVIEWCONTROLLER_H

@class UIViewController, UIView, NSString, IKViewElement;
@protocol TVAppTemplateController;



@interface _TVBgImageLoadingViewController : UIViewController <TVAppTemplateController>

 {
    id *_imageProxy;
    BOOL _loaded;
    UIView *_rightLargeTitleButton;
    ? _bgImageLoadingOptions;
}


@property (nonatomic) BOOL appliedNavigationItem; // ivar: _appliedNavigationItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IKViewElement *navigationItemElement; // ivar: _navigationItemElement
@property (readonly) Class superclass;


+(id)_decorateImage:(id)arg0 decorator:(id)arg1 ;
-(BOOL)_backgroundImageRequiresBlur;
-(BOOL)_isBackdropNeeded;
-(BOOL)_isNewiOSTVApp;
-(BOOL)_shouldLoadBackgroundImageAsynchronously;
-(NSInteger)_blurEffectStyle;
-(NSInteger)_overrideLargeTitleDisplayMode;
-(NSInteger)preferredStatusBarStyle;
-(id)_backgroundImageProxy;
-(id)_stackViewWithMinSpacing:(CGFloat)arg0 layoutMargin:(struct UIEdgeInsets )arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )_backgroundImageProxySize;
-(void)_dismissViewController:(id)arg0 ;
-(void)_reparentNavigationItem:(id)arg0 ;
-(void)_updateNavigationBarPadding;
-(void)_updateNavigationItem;
-(void)configureAppearanceTransition;
-(void)dealloc;
-(void)loadFromViewController:(id)arg0 completion:(id)arg1 ;
-(void)updateNavigationItem:(id)arg0 ;
-(void)updateWithViewElement:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif