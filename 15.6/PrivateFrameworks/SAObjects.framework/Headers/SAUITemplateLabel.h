// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUITEMPLATELABEL_H
#define SAUITEMPLATELABEL_H

@class NSDictionary;


#import "SAUITemplateBaseItem.h"
#import "SAUITemplateAttributedString.h"

@interface SAUITemplateLabel : SAUITemplateBaseItem

@property (copy, nonatomic) NSDictionary *attributedTexts;
@property (retain, nonatomic) SAUITemplateAttributedString *text;


+(id)label;
+(id)labelWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif