// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LPIMAGEVIEWSTYLE_H
#define LPIMAGEVIEWSTYLE_H

@class UIColor, UIFont, NSNumber;
@protocol LPEmailCompatibleCaptionBarItemChild, NSCopying;

#import <Foundation/Foundation.h>

#import "LPPointUnit.h"
#import "LPSize.h"
#import "LPPadding.h"
#import "LPShadowStyle.h"

@interface LPImageViewStyle : NSObject <LPEmailCompatibleCaptionBarItemChild, NSCopying>



@property (nonatomic) BOOL allowsPlatterPresentation; // ivar: _allowsPlatterPresentation
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) LPPointUnit *backgroundInset; // ivar: _backgroundInset
@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (retain, nonatomic) LPPointUnit *borderWidth; // ivar: _borderWidth
@property (nonatomic) BOOL canAdjustVerticalPaddingForFixedSize; // ivar: _canAdjustVerticalPaddingForFixedSize
@property (retain, nonatomic) LPPointUnit *cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGFloat darkeningAmount; // ivar: _darkeningAmount
@property (nonatomic) NSInteger filter; // ivar: _filter
@property (retain, nonatomic) UIFont *fixedFallbackImageFont; // ivar: _fixedFallbackImageFont
@property (retain, nonatomic) NSNumber *fixedFallbackImageScale; // ivar: _fixedFallbackImageScale
@property (retain, nonatomic) LPPointUnit *fixedFallbackImageSize; // ivar: _fixedFallbackImageSize
@property (retain, nonatomic) NSNumber *fixedFallbackImageWeight; // ivar: _fixedFallbackImageWeight
@property (retain, nonatomic) LPSize *fixedSize; // ivar: _fixedSize
@property (readonly, retain, nonatomic) LPPadding *margin; // ivar: _margin
@property (retain, nonatomic) UIColor *maskColor; // ivar: _maskColor
@property (retain, nonatomic) LPSize *maximumSize; // ivar: _maximumSize
@property (retain, nonatomic) LPSize *minimumSize; // ivar: _minimumSize
@property (nonatomic) CGFloat opacity; // ivar: _opacity
@property (readonly, retain, nonatomic) LPPadding *padding; // ivar: _padding
@property (nonatomic) BOOL preservesEdgeAlignmentWhenScaling; // ivar: _preservesEdgeAlignmentWhenScaling
@property (nonatomic) BOOL requireFixedSize; // ivar: _requireFixedSize
@property (nonatomic) BOOL scalesToFitParent; // ivar: _scalesToFitParent
@property (nonatomic) NSInteger scalingMode; // ivar: _scalingMode
@property (retain, nonatomic) LPShadowStyle *shadow; // ivar: _shadow
@property (nonatomic) BOOL shouldApplyBackground; // ivar: _shouldApplyBackground
@property (nonatomic) NSInteger verticalAlignment; // ivar: _verticalAlignment
@property (retain, nonatomic) LPPointUnit *widthForUsingRegularSize; // ivar: _widthForUsingRegularSize


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)emailCompatibleMargin;
-(id)init;


@end


#endif