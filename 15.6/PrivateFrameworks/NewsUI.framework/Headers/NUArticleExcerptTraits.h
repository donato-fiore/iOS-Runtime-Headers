// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUARTICLEEXCERPTTRAITS_H
#define NUARTICLEEXCERPTTRAITS_H

@class UITraitCollection;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NUTrait.h"

@interface NUArticleExcerptTraits : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat bottomMargin;
@property (retain, nonatomic) NUTrait *bottomMaringTrait; // ivar: _bottomMaringTrait
@property (readonly, nonatomic) CGFloat contentMargin;
@property (retain, nonatomic) NUTrait *contentMarginTrait; // ivar: _contentMarginTrait
@property (readonly, nonatomic) CGFloat excerptMargin;
@property (retain, nonatomic) NUTrait *excerptMarginTrait; // ivar: _excerptMarginTrait
@property (readonly, nonatomic) CGFloat hairlineSeparatorHeight; // ivar: _hairlineSeparatorHeight
@property (readonly, nonatomic) CGFloat headlineImageHeight;
@property (readonly, nonatomic) CGFloat headlineImageMargin;
@property (retain, nonatomic) NUTrait *headlineImageMarginTrait; // ivar: _headlineImageMarginTrait
@property (retain, nonatomic) NUTrait *headlineImageRatioTrait; // ivar: _headlineImageRatioTrait
@property (readonly, nonatomic) CGFloat minTopMaginAboveReadMoreButton;
@property (retain, nonatomic) NUTrait *readMoreMinTopMarginTrait; // ivar: _readMoreMinTopMarginTrait
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) CGFloat topMarginAboveExcerpt; // ivar: _topMarginAboveExcerpt
@property (readonly, nonatomic) CGFloat topMarginAboveHairlineSeparator; // ivar: _topMarginAboveHairlineSeparator
@property (readonly, nonatomic) CGFloat topMarginAboveHeadlineDate; // ivar: _topMarginAboveHeadlineDate
@property (readonly, nonatomic) CGFloat topMarginAboveHeadlineTitle; // ivar: _topMarginAboveHeadlineTitle
@property (readonly, copy, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


-(CGFloat)contentMarginForDeviceTrait:(id)arg0 delta:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTraitCollection:(id)arg0 size:(struct CGSize )arg1 ;


@end


#endif