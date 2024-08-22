// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSLISTFORMATTER_H
#define NSLISTFORMATTER_H

@class NSLocale;


#import "NSFormatter.h"

@interface NSListFormatter : NSFormatter {
    *__CFListFormatter _listFormatter;
}


@property (copy) NSFormatter *itemFormatter; // ivar: _itemFormatter
@property (copy) NSLocale *locale; // ivar: _locale


+(id)localizedStringByJoiningStrings:(id)arg0 ;
-(id)_stringFromStringArray:(id)arg0 ;
-(id)init;
-(id)initWithLocale:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromItems:(id)arg0 ;
-(struct __CFListFormatter *)_listFormatter;
-(void)dealloc;


@end


#endif