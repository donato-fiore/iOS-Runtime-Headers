// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSYSTEMAPERTURECURTAINVIEWCONTROLLER_H
#define SBSYSTEMAPERTURECURTAINVIEWCONTROLLER_H

@class UIViewController, UIView, _UIPortalView;
@protocol SBSystemApertureCurtainViewHoster;



@interface SBSystemApertureCurtainViewController : UIViewController <SBSystemApertureCurtainViewHoster>

 {
    UIView *_curtainView;
    _UIPortalView *_indicatorPortalView;
}


@property (retain, nonatomic) UIView *curtainView;
@property (weak, nonatomic) UIView *indicatorSourceView;


-(BOOL)_canShowWhileLocked;
-(id)_indicatorPortalView;
-(void)viewDidLoad;


@end


#endif