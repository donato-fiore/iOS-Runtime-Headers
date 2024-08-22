// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16NEWSSUBSCRIPTION32DISMISSIBLEDYNAMICVIEWCONTROLLER_H
#define _TTC16NEWSSUBSCRIPTION32DISMISSIBLEDYNAMICVIEWCONTROLLER_H

@class UINavigationController;
@protocol UIAdaptivePresentationControllerDelegate;



@interface _TtC16NewsSubscription32DismissibleDynamicViewController : UINavigationController <UIAdaptivePresentationControllerDelegate>

 {
    ? identifier;
    ? dismissDelegate;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;


@end


#endif