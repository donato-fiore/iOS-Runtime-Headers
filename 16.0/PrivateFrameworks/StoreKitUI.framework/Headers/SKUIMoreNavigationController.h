// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIMORENAVIGATIONCONTROLLER_H
#define SKUIMORENAVIGATIONCONTROLLER_H

@class UIMoreNavigationController, UINavigationController, UIViewController;
@protocol SKUIMoreNavigationControllerDelegate;



@interface SKUIMoreNavigationController : UIMoreNavigationController {
    UINavigationController *_displayedViewController;
    UIViewController *_firstActualViewController;
}


@property (weak, nonatomic) NSObject<SKUIMoreNavigationControllerDelegate> *storeKitDelegate; // ivar: _storeKitDelegate


+(Class)_moreListControllerClass;
-(NSUInteger)supportedInterfaceOrientations;
-(id)displayedViewController;
-(void)didShowViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)setDisplayedViewController:(id)arg0 ;


@end


#endif