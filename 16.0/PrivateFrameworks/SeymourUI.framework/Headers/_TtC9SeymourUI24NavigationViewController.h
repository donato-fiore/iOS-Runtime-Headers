// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI24NAVIGATIONVIEWCONTROLLER_H
#define _TTC9SEYMOURUI24NAVIGATIONVIEWCONTROLLER_H

@class UINavigationController;



@interface _TtC9SeymourUI24NavigationViewController : UINavigationController {
    ? rootViewController;
    ? menuGestureRecognizer;
    ? onShouldBeginRecognizing;
    ? onMenuTapped;
    ? viewControllerAppearanceCompletion;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(void)menuButtonTapped;
-(void)viewDidLoad;


@end


#endif