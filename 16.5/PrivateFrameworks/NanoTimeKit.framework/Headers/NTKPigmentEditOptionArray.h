// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKPIGMENTEDITOPTIONARRAY_H
#define NTKPIGMENTEDITOPTIONARRAY_H

@class NSMutableArray;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface NTKPigmentEditOptionArray : NSObject <NSFastEnumeration>

 {
    NSMutableArray *_backing;
}


@property (readonly) NSUInteger count;
@property (readonly) NSUInteger equality; // ivar: _equality


+(id)array;
+(id)arrayWithEquality:(NSUInteger)arg0 ;
-(BOOL)containsPigment:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)indexOfPigment:(id)arg0 ;
-(id)init;
-(id)initWithEquality:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)pigmentAtIndex:(NSUInteger)arg0 ;
-(id)pigmentForPigment:(id)arg0 ;
-(void)addPigment:(id)arg0 ;
-(void)enumeratePigmentsUsingBlock:(id)arg0 ;
-(void)enumeratePigmentsWithOptions:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)insertPigment:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removePigment:(id)arg0 ;
-(void)removePigmentAtIndex:(NSUInteger)arg0 ;


@end


#endif