// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKNAVIGATIONCONTROLLER_H
#define HKNAVIGATIONCONTROLLER_H

@class UINavigationController, NSString;
@protocol HKTabBarTapObserver, UINavigationControllerDelegate;


#import "HKProfileBarButtonItem.h"

@interface HKNavigationController : UINavigationController <HKTabBarTapObserver, UINavigationControllerDelegate>

 {
    HKProfileBarButtonItem *_commonProfileBarButtonItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)navigationControllerSupportedInterfaceOrientations:(id)arg0 ;
-(id)commonProfileBarButtonItem;
-(id)initLargeTitlesNavigationControllerWithRootViewController:(id)arg0 ;
-(id)initWithRootViewController:(id)arg0 ;
-(void)didChangeToAnotherTab;
-(void)didTapTabBarIcon;


@end


#endif