// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBACKBUTTONMASKVIEW_H
#define _UIBACKBUTTONMASKVIEW_H

@class NSLayoutXAxisAnchor;


#import "UIView.h"
#import "UIImageView.h"

@interface _UIBackButtonMaskView : UIView {
    UIView *_maskExtensionView;
}


@property (readonly, nonatomic) NSLayoutXAxisAnchor *maskExtensionLeadingAnchor;
@property (readonly, nonatomic) UIImageView *maskImageView; // ivar: _maskImageView


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif