// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTDATEFORMATTER_H
#define SUSCRIPTDATEFORMATTER_H

@class NSDateFormatter, NSString;


#import "SUScriptObject.h"

@interface SUScriptDateFormatter : SUScriptObject {
    NSDateFormatter *_dateFormatter;
}


@property (copy) NSString *dateFormat;
@property (readonly) NSUInteger dateFormatterFullStyle;
@property (readonly) NSUInteger dateFormatterLongStyle;
@property (readonly) NSUInteger dateFormatterMediumStyle;
@property (readonly) NSUInteger dateFormatterNoStyle;
@property (readonly) NSUInteger dateFormatterShortStyle;
@property NSUInteger dateStyle;
@property (copy) NSString *localeIdentifier;
@property NSUInteger timeStyle;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(CGFloat)dateFromString:(id)arg0 ;
-(id)_className;
-(id)attributeKeys;
-(id)init;
-(id)scriptAttributeKeys;
-(id)stringFromDate:(id)arg0 ;
-(void)dealloc;


@end


#endif