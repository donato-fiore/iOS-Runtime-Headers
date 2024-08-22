// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REKEYMULTIVALUEMAP_H
#define REKEYMULTIVALUEMAP_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface REKeyMultiValueMap : NSObject {
    NSMapTable *_keyMap;
    NSMapTable *_valueMap;
}


@property (readonly, nonatomic) NSUInteger keyCount;
@property (readonly, nonatomic) NSUInteger valueCount;


-(id)init;
-(id)initWithValuePointFunctionOptions:(NSUInteger)arg0 ;
-(id)keyForValue:(id)arg0 ;
-(id)valuesForKey:(id)arg0 ;
-(void)addKey:(id)arg0 withValues:(id)arg1 ;
-(void)enumerateValuesForKey:(id)arg0 usingBlock:(id)arg1 ;
-(void)insertValue:(id)arg0 forKey:(id)arg1 ;
-(void)removeKey:(id)arg0 ;
-(void)removeValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif