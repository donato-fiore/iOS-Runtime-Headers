// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIAPPLOADINGVIEWCONTROLLER_H
#define VUIAPPLOADINGVIEWCONTROLLER_H

@class UIViewController, UIView;


#import "VUIAppSpinnerView.h"

@interface VUIAppLoadingViewController : UIViewController {
    VUIAppSpinnerView *_loadingView;
    UIView *_parentView;
    UIView *_principalView;
    BOOL _cancelLoading;
}


@property (nonatomic) BOOL loading; // ivar: _loading


-(void)setView:(id)arg0 ;


@end


#endif