// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTEXTSTYLERULE_H
#define AVTEXTSTYLERULE_H

@class NSDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "AVTextStyleRuleInternal.h"

@interface AVTextStyleRule : NSObject <NSCopying>

 {
    AVTextStyleRuleInternal *_textStyleRule;
}


@property (readonly, nonatomic) NSDictionary *textMarkupAttributes;
@property (readonly, nonatomic) NSString *textSelector;


+(id)propertyListForTextStyleRules:(id)arg0 ;
+(id)textStyleRuleWithTextMarkupAttributes:(id)arg0 ;
+(id)textStyleRuleWithTextMarkupAttributes:(id)arg0 textSelector:(id)arg1 ;
+(id)textStyleRulesFromPropertyList:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dictionaryPlistRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithTextMarkupAttributes:(id)arg0 ;
-(id)initWithTextMarkupAttributes:(id)arg0 textSelector:(id)arg1 ;
-(void)dealloc;


@end


#endif