// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNKEFFECTSLAYOUTCONTROLLER_H
#define CNKEFFECTSLAYOUTCONTROLLER_H


#import <Foundation/Foundation.h>


@interface CNKEffectsLayoutController : NSObject {
    ? containingViewController;
}




-(BOOL)shouldAlwaysPresentExpandedAppsFor:(id)arg0 ;
-(id)init;
-(id)initWithContainingViewController:(id)arg0 ;
-(struct CGSize )expandedAppViewControllerSizeFor:(id)arg0 ;
-(void)effectBrowserViewController:(id)arg0 dismissExpandedAppViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)effectBrowserViewController:(id)arg0 presentExpandedAppViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;


@end


#endif