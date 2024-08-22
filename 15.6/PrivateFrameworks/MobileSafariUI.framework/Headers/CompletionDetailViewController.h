// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMPLETIONDETAILVIEWCONTROLLER_H
#define COMPLETIONDETAILVIEWCONTROLLER_H

@class UINavigationController, UIViewController, NSString;
@protocol UIAdaptivePresentationControllerDelegate, CompletionDetailViewControllerDelegate;



@interface CompletionDetailViewController : UINavigationController <UIAdaptivePresentationControllerDelegate>

 {
    UIViewController *_currentStoreSheet;
}


@property (weak, nonatomic) NSObject<CompletionDetailViewControllerDelegate> *completionDetailViewControllerDelegate; // ivar: _completionDetailViewControllerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithRootViewController:(id)arg0 ;
-(void)_didDismissCompletionDetailSheet;
-(void)_dismissCompletionDetailSheet;
-(void)_willDismissCompletionDetailSheet;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)presentationControllerWillDismiss:(id)arg0 ;


@end


#endif