// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUITEMPLATETABULARDATAVALUE_H
#define SAUITEMPLATETABULARDATAVALUE_H

@class NSDictionary, NSArray;


#import "SAUITemplateBaseItem.h"
#import "SAUITemplateAttributedString.h"
#import "SAUIImageResource.h"

@interface SAUITemplateTabularDataValue : SAUITemplateBaseItem

@property (retain, nonatomic) SAUITemplateAttributedString *attributedText;
@property (copy, nonatomic) NSDictionary *attributedTexts;
@property (nonatomic) BOOL highlighted;
@property (retain, nonatomic) SAUIImageResource *image;
@property (nonatomic) CGFloat imagePointHeight;
@property (nonatomic) CGFloat imagePointWidth;
@property (copy, nonatomic) NSArray *themeImages;


+(id)tabularDataValue;
+(id)tabularDataValueWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif