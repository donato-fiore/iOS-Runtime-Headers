// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIITEMOFFERBUTTONPROPERTIES_H
#define SKUIITEMOFFERBUTTONPROPERTIES_H

@class NSAttributedString, UIColor, CAFilter, UIImage;

#import <Foundation/Foundation.h>


@interface SKUIItemOfferButtonProperties : NSObject

@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (retain, nonatomic) UIColor *borderBackgroundColor; // ivar: _borderBackgroundColor
@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (retain, nonatomic) CAFilter *borderCompositingFilter; // ivar: _borderCompositingFilter
@property (nonatomic) CGFloat borderCornerRadius; // ivar: _borderCornerRadius
@property (nonatomic) BOOL borderCornerRadiusMatchesHalfBoundingDimension; // ivar: _borderCornerRadiusMatchesHalfBoundingDimension
@property (nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (retain, nonatomic) UIImage *borderedImage; // ivar: _borderedImage
@property (nonatomic) BOOL cancelRecognizer; // ivar: _cancelRecognizer
@property (nonatomic) NSInteger confirmationTitleStyle; // ivar: _confirmationTitleStyle
@property (nonatomic) BOOL hasBorderView; // ivar: _hasBorderView
@property (nonatomic) BOOL hasTitleLabel; // ivar: _hasTitleLabel
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (nonatomic) BOOL progressIndeterminate; // ivar: _progressIndeterminate
@property (nonatomic) NSInteger progressType; // ivar: _progressType
@property (nonatomic) BOOL restores; // ivar: _restores
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (nonatomic) NSInteger titleStyle; // ivar: _titleStyle
@property (nonatomic) BOOL universal; // ivar: _universal




@end


#endif