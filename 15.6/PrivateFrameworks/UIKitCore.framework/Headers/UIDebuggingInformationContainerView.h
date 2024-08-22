// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDEBUGGINGINFORMATIONCONTAINERVIEW_H
#define UIDEBUGGINGINFORMATIONCONTAINERVIEW_H



#import "UIView.h"

@interface UIDebuggingInformationContainerView : UIView {
    UIView *_shadowView;
}


@property (nonatomic) BOOL shadowHidden; // ivar: _shadowHidden


-(void)layoutSubviews;


@end


#endif