// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIPROGRESSBARLAYOUT_H
#define VUIPROGRESSBARLAYOUT_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface VUIProgressBarLayout : NSObject

@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (retain, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (retain, nonatomic) UIColor *gradientEndColor; // ivar: _gradientEndColor
@property (retain, nonatomic) UIColor *gradientStartColor; // ivar: _gradientStartColor
@property (nonatomic) CGFloat height; // ivar: _height
@property (nonatomic) UIEdgeInsets margin; // ivar: _margin
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) BOOL shouldProgressBarUseRoundCorner; // ivar: _shouldProgressBarUseRoundCorner
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (nonatomic) BOOL useMaterial; // ivar: _useMaterial


+(id)defaultProgressBarLayout;


@end


#endif