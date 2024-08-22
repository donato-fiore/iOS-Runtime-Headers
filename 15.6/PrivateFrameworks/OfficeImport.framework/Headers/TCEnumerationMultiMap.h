// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TCENUMERATIONMULTIMAP_H
#define TCENUMERATIONMULTIMAP_H


#import <Foundation/Foundation.h>


@interface TCEnumerationMultiMap : NSObject {
    *__CFDictionary m_valueToString;
    *__CFDictionary m_stringToValue;
    BOOL m_caseSensitive;
}




-(NSInteger)valueForString:(id)arg0 ;
-(id)initWithStructs:(struct TCEnumerationStruct *)arg0 count:(int)arg1 ;
-(id)initWithStructs:(struct TCEnumerationStruct *)arg0 count:(int)arg1 caseSensitive:(BOOL)arg2 ;
-(id)stringForValue:(int)arg0 ;
-(void)dealloc;


@end


#endif