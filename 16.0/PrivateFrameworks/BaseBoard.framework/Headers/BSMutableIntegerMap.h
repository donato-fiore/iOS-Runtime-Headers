// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSMUTABLEINTEGERMAP_H
#define BSMUTABLEINTEGERMAP_H



#import "BSIntegerMap.h"

@interface BSMutableIntegerMap : BSIntegerMap



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(NSInteger)arg0 ;
-(void)setObject:(id)arg0 forKey:(NSInteger)arg1 ;


@end


#endif