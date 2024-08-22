// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLNAVIGATIONCONTROLLER_H
#define HUQUICKCONTROLNAVIGATIONCONTROLLER_H

@class UINavigationController, NSString;
@protocol HUViewControllerCustomDismissing;



@interface HUQuickControlNavigationController : UINavigationController <HUViewControllerCustomDismissing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(id)hu_prepareForDismissalAnimated:(BOOL)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)viewDidLoad;


@end


#endif