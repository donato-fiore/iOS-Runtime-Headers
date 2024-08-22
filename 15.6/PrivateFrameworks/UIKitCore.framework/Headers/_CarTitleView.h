// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CARTITLEVIEW_H
#define _CARTITLEVIEW_H

@class NSArray, NSString;


#import "UIView.h"

@interface _CarTitleView : UIView

@property (retain, nonatomic) NSArray *extraConstraints; // ivar: _extraConstraints
@property (nonatomic) BOOL largeText; // ivar: _largeText
@property (retain, nonatomic) NSString *text; // ivar: _text
@property (retain, nonatomic) UIView *view; // ivar: _view


-(struct CGSize )intrinsicContentSize;
-(void)_updateLayout;
-(void)_updateText;


@end


#endif