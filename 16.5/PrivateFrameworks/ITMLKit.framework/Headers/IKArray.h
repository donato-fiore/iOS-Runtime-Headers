// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IKARRAY_H
#define IKARRAY_H

@class NSMutableArray;
@protocol NSCopying, NSMutableCopying, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface IKArray : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration>



@property (retain, nonatomic) NSMutableArray *arrayStore; // ivar: _arrayStore
@property (retain, nonatomic) id *obj0; // ivar: _obj0
@property (retain, nonatomic) id *obj1; // ivar: _obj1


+(id)array;
-(NSInteger)count;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)firstObject;
-(id)initWithNSArray:(id)arg0 ;
-(id)lastObject;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)objectAtIndex:(NSInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSInteger)arg0 ;
-(id)objectEnumerator;
-(id)toNSArray;
-(void)_setupWithNSArray:(id)arg0 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif