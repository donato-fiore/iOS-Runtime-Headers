// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDKEYEDCOLLECTION_H
#define EDKEYEDCOLLECTION_H



#import "EDCollection.h"
#import "OITSUIntegerKeyDictionary.h"

@interface EDKeyedCollection : EDCollection {
    OITSUIntegerKeyDictionary *mMap;
}




-(BOOL)isObjectInMap:(id)arg0 ;
-(BOOL)isOverwritingKeyOK;
-(NSUInteger)addObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)objectWithKey:(NSInteger)arg0 ;
-(void)insertIntoMap:(id)arg0 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeAllObjects;
-(void)removeFromMap:(id)arg0 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)replaceObjectAtIndex:(NSUInteger)arg0 withObject:(id)arg1 ;


@end


#endif