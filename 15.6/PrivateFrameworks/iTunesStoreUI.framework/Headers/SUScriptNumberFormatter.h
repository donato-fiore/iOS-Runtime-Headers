// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSCRIPTNUMBERFORMATTER_H
#define SUSCRIPTNUMBERFORMATTER_H

@class NSNumberFormatter, NSString;


#import "SUScriptObject.h"

@interface SUScriptNumberFormatter : SUScriptObject {
    NSNumberFormatter *_numberFormatter;
}


@property (retain) NSString *localeIdentifier;
@property (retain) NSString *style;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)attributeKeys;
-(id)init;
-(id)numberFromString:(id)arg0 ;
-(id)scriptAttributeKeys;
-(id)stringFromNumber:(id)arg0 ;
-(void)dealloc;


@end


#endif