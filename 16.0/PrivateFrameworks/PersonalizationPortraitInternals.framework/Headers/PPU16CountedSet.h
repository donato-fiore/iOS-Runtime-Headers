// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPU16COUNTEDSET_H
#define PPU16COUNTEDSET_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PPU16CountedSet : NSObject {
    *void _vectorStorage;
    NSMutableDictionary *_dictStorage;
    type _vectorInlineStorage;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)uniqueValueCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionary;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(unsigned short)countForValue:(unsigned short)arg0 ;
-(void)addValue:(unsigned short)arg0 ;
-(void)dealloc;
-(void)enumerateValuesAndCountsUsingBlock:(id)arg0 ;


@end


#endif