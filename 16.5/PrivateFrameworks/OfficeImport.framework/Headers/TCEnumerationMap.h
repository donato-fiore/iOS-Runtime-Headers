// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCENUMERATIONMAP_H
#define TCENUMERATIONMAP_H


#import <Foundation/Foundation.h>


@interface TCEnumerationMap : NSObject {
    *__CFDictionary m_valueToString;
    *__CFDictionary m_stringToValue;
    BOOL m_caseSensitive;
}




-(NSInteger)valueForString:(id)arg0 ;
-(id)initWithStructs:(struct TCEnumerationStruct *)arg0 count:(int)arg1 ;
-(id)initWithStructs:(struct TCEnumerationStruct *)arg0 count:(int)arg1 caseSensitive:(BOOL)arg2 ;
-(id)stringForValue:(int)arg0 ;
-(void)dealloc;
-(void)enumerateValuesAndStringsUsingBlock:(id)arg0 ;


@end


#endif