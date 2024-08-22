// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPENCILSHADOWVIEW_H
#define PKPENCILSHADOWVIEW_H

@class UIView;


#import "PK_DKLayer.h"

@interface PKPencilShadowView : UIView {
    PK_DKLayer *_shadow;
    PK_DKLayer *_shadowOutline;
}




-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif