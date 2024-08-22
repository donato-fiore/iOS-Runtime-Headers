// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPKCONTENTPOPOVERVIEWCONTROLLER_H
#define TPKCONTENTPOPOVERVIEWCONTROLLER_H

@class UIViewController, UIView;
@protocol UIAdaptivePresentationControllerDelegate, UIPopoverPresentationControllerDelegate;


#import "TPKContentView.h"

@interface TPKContentPopoverViewController : UIViewController <UIAdaptivePresentationControllerDelegate, UIPopoverPresentationControllerDelegate>



@property (nonatomic, readonly) BOOL _canShowWhileLocked;
@property (nonatomic, retain) TPKContentView *contentView; // ivar: contentView
@property (nonatomic) NSUInteger permittedArrowDirections;
@property (nonatomic, weak) NSObject<UIPopoverPresentationControllerDelegate> *popoverDelegate; // ivar: popoverDelegate
@property (nonatomic) CGFloat preferredPopoverWidth; // ivar: preferredPopoverWidth
@property (nonatomic) CGRect sourceRect;
@property (nonatomic, retain) UIView *sourceView;
@property (nonatomic, weak) UIViewController *sourceViewController; // ivar: sourceViewController


-(BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentController:(id)arg0 tipContent:(id)arg1 sourceViewController:(id)arg2 ;
-(id)initWithContentController:(id)arg0 tipContent:(id)arg1 sourceViewController:(id)arg2 popoverDelegate:(id)arg3 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)presentationController:(id)arg0 viewControllerForAdaptivePresentationStyle:(NSInteger)arg1 ;
-(void)passthroughViewsNeedsUpdate;
-(void)popoverPresentationController:(id)arg0 willRepositionPopoverToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg0 ;
-(void)presentationControllerWillDismiss:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif