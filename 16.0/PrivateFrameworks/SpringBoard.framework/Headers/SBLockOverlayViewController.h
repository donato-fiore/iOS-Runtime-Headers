// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLOCKOVERLAYVIEWCONTROLLER_H
#define SBLOCKOVERLAYVIEWCONTROLLER_H

@class UIViewController;
@protocol SBLockOverlayViewControllerDelegate;



@interface SBLockOverlayViewController : UIViewController

@property (weak, nonatomic) NSObject<SBLockOverlayViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL shouldBeHidden;


-(id)overlayView;


@end


#endif