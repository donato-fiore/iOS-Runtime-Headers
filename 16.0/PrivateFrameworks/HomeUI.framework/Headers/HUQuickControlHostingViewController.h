// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLHOSTINGVIEWCONTROLLER_H
#define HUQUICKCONTROLHOSTINGVIEWCONTROLLER_H

@class UIViewController, NSString, UIView<HUQuickControlInteractiveView>;
@protocol HUQuickControlInteractiveViewController;


#import "HUQuickControlViewProfile.h"

@interface HUQuickControlHostingViewController : UIViewController <HUQuickControlInteractiveViewController>



@property (readonly, nonatomic) UIViewController *contraption; // ivar: _contraption
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUQuickControlViewProfile *profile; // ivar: _profile
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView<HUQuickControlInteractiveView> *view;


-(id)initWithViewController:(id)arg0 profile:(id)arg1 ;
-(void)loadView;


@end


#endif