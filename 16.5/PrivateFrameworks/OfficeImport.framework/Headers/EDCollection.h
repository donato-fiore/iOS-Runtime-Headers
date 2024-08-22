// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDCOLLECTION_H
#define EDCOLLECTION_H

@class NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EDCollection : NSObject <NSCopying>

 {
    NSMutableArray *mObjects;
}




+(id)collection;
+(id)collectionWithObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCollection:(id)arg0 ;
-(NSUInteger)addObject:(id)arg0 ;
-(NSUInteger)addOrEquivalentObject:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)hash;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithObject:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;


@end


#endif