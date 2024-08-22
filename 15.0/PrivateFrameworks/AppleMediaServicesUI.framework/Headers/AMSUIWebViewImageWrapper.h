// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIWEBVIEWIMAGEWRAPPER_H
#define AMSUIWEBVIEWIMAGEWRAPPER_H

@class UIView;


#import "AMSUICommonView.h"

@interface AMSUIWebViewImageWrapper : AMSUICommonView

@property (nonatomic) CGFloat inset; // ivar: _inset
@property (retain, nonatomic) UIView *view; // ivar: _view


-(id)initWithView:(id)arg0 topInset:(CGFloat)arg1 ;
-(struct CGSize )intrinsicContentSize;


@end


#endif