// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RESORTEDDICTIONARY_H
#define RESORTEDDICTIONARY_H

@class NSMutableDictionary, NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RESortedDictionary : NSObject <NSCopying>

 {
    NSMutableDictionary *_values;
    NSMutableArray *_order;
}


@property (readonly) NSUInteger count;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;
-(void)enumerateObjectsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif