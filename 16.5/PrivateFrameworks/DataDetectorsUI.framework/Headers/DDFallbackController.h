// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DDFALLBACKCONTROLLER_H
#define DDFALLBACKCONTROLLER_H

@class UIViewController, UIWindow;



@interface DDFallbackController : UIViewController {
    UIWindow *_baseWindow;
    UIWindow *_ourWindow;
    id *_interactionDelegate;
}




-(BOOL)shouldAutorotate;
-(id)initWithWindow:(id)arg0 interactionDelegate:(id)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)loadView;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif