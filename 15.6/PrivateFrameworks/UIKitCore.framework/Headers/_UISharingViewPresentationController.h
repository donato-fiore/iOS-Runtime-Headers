// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISHARINGVIEWPRESENTATIONCONTROLLER_H
#define _UISHARINGVIEWPRESENTATIONCONTROLLER_H



#import "UIPopoverPresentationController.h"

@interface _UISharingViewPresentationController : UIPopoverPresentationController

@property (copy, nonatomic) id *dismissalHandler; // ivar: _dismissalHandler
@property (nonatomic) BOOL suppressDismissalHandlerUnlessDimmingViewTapped; // ivar: _suppressDismissalHandlerUnlessDimmingViewTapped


-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;


@end


#endif