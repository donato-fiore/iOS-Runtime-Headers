// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVVIEWELEMENTSTYLE_H
#define TVVIEWELEMENTSTYLE_H

@class NSMutableDictionary, NSString, NSShadow, IKViewElementStyle;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TVColor.h"
#import "TVAppStyle.h"

@interface TVViewElementStyle : NSObject <NSCopying>

 {
    NSMutableDictionary *_cachedColorObjects;
}


@property (readonly, nonatomic) NSInteger alignment;
@property (readonly, nonatomic) TVColor *backgroundColor;
@property (readonly, nonatomic) TVColor *color;
@property (readonly, nonatomic) NSInteger contentAlignment;
@property (readonly, nonatomic) UIEdgeInsets focusMargin;
@property (readonly, nonatomic) CGFloat fontSize;
@property (readonly, nonatomic) NSString *fontWeight;
@property (readonly, nonatomic) CGFloat height;
@property (readonly, nonatomic) TVColor *highlightColor;
@property (readonly, nonatomic) NSString *imageTreatmentName;
@property (readonly, nonatomic) CGFloat interitemSpacing;
@property (readonly, nonatomic) UIEdgeInsets margin;
@property (readonly, nonatomic) CGFloat maxHeight;
@property (readonly, nonatomic) NSUInteger maxTextLines;
@property (readonly, nonatomic) CGFloat maxWidth;
@property (readonly, nonatomic) CGFloat minHeight;
@property (readonly, nonatomic) CGFloat minWidth;
@property (readonly, nonatomic) UIEdgeInsets padding;
@property (readonly, nonatomic) NSInteger position;
@property (readonly, nonatomic) NSString *ratingStyle;
@property (readonly, nonatomic) NSShadow *shadow;
@property (readonly, weak, nonatomic) IKViewElementStyle *style; // ivar: _style
@property (retain, nonatomic) TVAppStyle *styleMetrics;
@property (readonly, nonatomic) NSInteger textAlignment;
@property (readonly, nonatomic) NSString *textHighlightStyle;
@property (readonly, nonatomic) CGFloat textMinimumScaleFactor;
@property (readonly, nonatomic) NSString *textStyle;
@property (readonly, nonatomic) NSString *textTransform;
@property (readonly, nonatomic) TVColor *tintColor;
@property (readonly, nonatomic) CGFloat width;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cssValueForStyleProperty:(id)arg0 ;
-(id)darkTintColor;
-(id)initWithStyle:(id)arg0 ;
-(id)valueForStyleProperty:(id)arg0 ;


@end


#endif