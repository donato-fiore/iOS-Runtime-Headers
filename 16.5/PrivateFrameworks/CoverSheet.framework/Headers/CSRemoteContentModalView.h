// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSREMOTECONTENTMODALVIEW_H
#define CSREMOTECONTENTMODALVIEW_H

@class UIButton;
@protocol CSRemoteModalContentViewTouchDelegate;


#import "CSModalView.h"

@interface CSRemoteContentModalView : CSModalView

@property (retain, nonatomic) UIButton *backgroundDismissButton; // ivar: _backgroundDismissButton
@property (weak, nonatomic) NSObject<CSRemoteModalContentViewTouchDelegate> *touchDelegate; // ivar: _touchDelegate


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif