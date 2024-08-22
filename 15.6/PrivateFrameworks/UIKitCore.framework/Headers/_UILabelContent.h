// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UILABELCONTENT_H
#define _UILABELCONTENT_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UILabelContent : NSObject <NSCopying>

 {
    NSDictionary *_defaultAttributes;
}




-(BOOL)_isContentEqualToContent:(id)arg0 ;
-(BOOL)isAttribute:(id)arg0 uniformlyEqualToValue:(id)arg1 ;
-(BOOL)isAttributed;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAttributedString:(id)arg0 ;
-(BOOL)isEqualToContent:(id)arg0 byAttribute:(id)arg1 ;
-(BOOL)isEqualToString:(id)arg0 ;
-(BOOL)isNil;
-(BOOL)isWidthVariant;
-(NSInteger)differenceVersusContent:(id)arg0 ;
-(NSInteger)length;
-(NSUInteger)hash;
-(id)attributedString;
-(id)attributedStringContent;
-(id)backgroundColor;
-(id)contentByAddingAttribute:(id)arg0 toDefaultAttributesWithValue:(id)arg1 ;
-(id)contentByAddingAttributesToDefaultAttributes:(id)arg0 ;
-(id)contentByApplyingAttribute:(id)arg0 value:(id)arg1 toRange:(struct _NSRange )arg2 ;
-(id)contentByApplyingAttributeToEntireRange:(id)arg0 value:(id)arg1 ;
-(id)contentByCompletingDefaultAttributesWithAttributes:(id)arg0 ;
-(id)contentWithAttributedString:(id)arg0 ;
-(id)contentWithDefaultAttributes:(id)arg0 ;
-(id)contentWithString:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultAttributes;
-(id)defaultValueForAttribute:(id)arg0 ;
-(id)description;
-(id)font;
-(id)initWithDefaultAttributes:(id)arg0 ;
-(id)paragraphStyle;
-(id)shadow;
-(id)string;
-(id)textColor;
-(id)widthVariantContentForView:(id)arg0 ;


@end


#endif