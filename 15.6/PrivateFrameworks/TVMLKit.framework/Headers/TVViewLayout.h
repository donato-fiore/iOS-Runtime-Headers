// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVVIEWLAYOUT_H
#define TVVIEWLAYOUT_H

@class UIColor, NSString;

#import <Foundation/Foundation.h>


@interface TVViewLayout : NSObject

@property (nonatomic) BOOL acceptsFocus; // ivar: _acceptsFocus
@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL centerGrowth; // ivar: _centerGrowth
@property (nonatomic) NSInteger contentAlignment; // ivar: _contentAlignment
@property (retain, nonatomic) UIColor *darkBackgroundColor; // ivar: _darkBackgroundColor
@property (retain, nonatomic) UIColor *darkTintColor; // ivar: _darkTintColor
@property (copy, nonatomic) NSString *focusAlign; // ivar: _focusAlign
@property (nonatomic) UIEdgeInsets focusMargin; // ivar: _focusMargin
@property (nonatomic) CGFloat focusSizeIncrease; // ivar: _focusSizeIncrease
@property (nonatomic) CGAffineTransform focusTransform; // ivar: _focusTransform
@property (copy, nonatomic) NSString *group; // ivar: _group
@property (nonatomic) CGFloat height; // ivar: _height
@property (retain, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (copy, nonatomic) NSString *highlightStyle; // ivar: _highlightStyle
@property (nonatomic) CGFloat interitemSpacing; // ivar: _interitemSpacing
@property (nonatomic) CGFloat lineSpacing; // ivar: _lineSpacing
@property (nonatomic) UIEdgeInsets margin; // ivar: _margin
@property (nonatomic) CGFloat maxHeight; // ivar: _maxHeight
@property (nonatomic) CGFloat maxWidth; // ivar: _maxWidth
@property (nonatomic) CGFloat minHeight; // ivar: _minHeight
@property (nonatomic) CGFloat minWidth; // ivar: _minWidth
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) NSInteger position; // ivar: _position
@property (copy, nonatomic) NSString *progressStyle; // ivar: _progressStyle
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (nonatomic) CGFloat width; // ivar: _width


+(Class)layoutClassForElement:(id)arg0 ;
+(id)layoutWithLayout:(id)arg0 element:(id)arg1 ;
-(CGFloat)defaultFocusSizeIncrease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)tv_layoutPropertyGetterForStyle:(SEL)arg0 ;
-(id)tv_layoutPropertySetterForStyle:(SEL)arg0 ;


@end


#endif