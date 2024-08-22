// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCTAGRENDERINGREQUEST_H
#define DOCTAGRENDERINGREQUEST_H

@class NSArray, UIColor, UITraitCollection;

#import <Foundation/Foundation.h>


@interface DOCTagRenderingRequest : NSObject

@property (nonatomic) NSUInteger clearTagRenderingMode; // ivar: _clearTagRenderingMode
@property (retain, nonatomic) NSArray *fillColors; // ivar: _fillColors
@property (nonatomic) CGFloat knockOutBorderWidth; // ivar: _knockOutBorderWidth
@property (nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (retain, nonatomic) UIColor *ringColor; // ivar: _ringColor
@property (retain, nonatomic) UIColor *selectionOutlineColor; // ivar: _selectionOutlineColor
@property (nonatomic) NSUInteger spacingType; // ivar: _spacingType
@property (nonatomic) CGFloat tagDimension; // ivar: _tagDimension
@property (retain, nonatomic) NSArray *tags; // ivar: _tags
@property (readonly, nonatomic) UITraitCollection *traitCollection;


+(id)requestForChainedTags:(id)arg0 tagDimension:(CGFloat)arg1 ;
+(id)requestForTag:(id)arg0 tagDimension:(CGFloat)arg1 ;
+(id)requestWithTagDimension:(CGFloat)arg0 ;
-(id)_UIImageCacheKeyWithAdditionalComponents:(id)arg0 ;
-(id)init;


@end


#endif