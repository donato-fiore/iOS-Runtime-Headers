// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SAUIPROVIDEDVIEWCONTAINERVIEW_H
#define _SAUIPROVIDEDVIEWCONTAINERVIEW_H

@class UIView;


#import "_SAUIPortalView.h"

@interface _SAUIProvidedViewContainerView : UIView {
    _SAUIPortalView *_portalView;
}


@property (readonly, nonatomic) BOOL portalsProvidedView; // ivar: _portalsProvidedView
@property (retain, nonatomic) UIView *providedView; // ivar: _providedView


-(id)_contentView;
-(void)layoutSubviews;


@end


#endif