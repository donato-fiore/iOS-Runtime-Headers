// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIBUTTONCONTENT_H
#define UIBUTTONCONTENT_H

@class NSAttributedString, NSNumber, NSString;
@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "UIImage.h"
#import "UIColor.h"
#import "_UIGraphicsLetterpressStyle.h"
#import "UIImageSymbolConfiguration.h"

@interface UIButtonContent : NSObject <NSCoding, NSCopying>

 {
    BOOL isWidthVariant;
}


@property (retain, nonatomic) NSAttributedString *attributedTitle; // ivar: attributedTitle
@property (retain, nonatomic) UIImage *background; // ivar: background
@property (retain, nonatomic) NSNumber *drawingStroke; // ivar: drawingStroke
@property (retain, nonatomic) UIImage *image; // ivar: image
@property (retain, nonatomic) UIColor *imageColor; // ivar: imageColor
@property (readonly, nonatomic) BOOL isEmpty;
@property (retain, nonatomic) _UIGraphicsLetterpressStyle *letterpressStyle;
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration; // ivar: preferredSymbolConfiguration
@property (retain, nonatomic) UIColor *shadowColor; // ivar: shadowColor
@property (retain, nonatomic) NSString *title; // ivar: title
@property (retain, nonatomic) UIColor *titleColor; // ivar: titleColor


-(BOOL)updateVariableLengthStringForView:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif