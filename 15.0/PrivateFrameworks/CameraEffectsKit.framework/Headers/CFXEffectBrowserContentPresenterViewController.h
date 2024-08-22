// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CFXEFFECTBROWSERCONTENTPRESENTERVIEWCONTROLLER_H
#define CFXEFFECTBROWSERCONTENTPRESENTERVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol CFXEffectBrowserContentPresenterDelegate, CFXEffectBrowserContentPresenterViewControllerDelegate;



@interface CFXEffectBrowserContentPresenterViewController : UIViewController <CFXEffectBrowserContentPresenterDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CFXEffectBrowserContentPresenterViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)CFX_alwaysExpandedAppHeight;
-(id)CFX_constraintsForAlwaysExpandedAppView:(id)arg0 containerView:(id)arg1 ;
-(struct CGSize )expandedAppViewControllerSizeForEffectBrowserViewController:(id)arg0 ;
-(void)configureEffectBrowserContentPresentationForOrientation:(NSInteger)arg0 ;
-(void)effectBrowserViewController:(id)arg0 dismissExpandedAppViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)effectBrowserViewController:(id)arg0 presentExpandedAppViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)loadView;


@end


#endif