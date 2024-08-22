// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PASLPDICTIONARY_H
#define _PASLPDICTIONARY_H

@class NSDictionary;
@protocol NSFastEnumeration, _PASLPReaderProtocol;


#import "_PASLPDictionaryContext.h"

@interface _PASLPDictionary : NSDictionary <NSFastEnumeration>

 {
    id<_PASLPReaderProtocol> *_reader;
    _PASLPDictionaryContext *_context;
}




-(BOOL)isEqualToDictionary:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)allKeys;
-(id)allKeysForObject:(id)arg0 ;
-(id)allValues;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLazyPlistReader:(id)arg0 context:(id)arg1 ;
-(id)initWithObjects:(*id)arg0 forKeys:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg0 ;
-(void)enumerateKeysAndObjectsUsingBlock:(id)arg0 ;
-(void)enumerateKeysAndObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;


@end


#endif