// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMORDEREDMUTABLEDICTIONARY_H
#define IMORDEREDMUTABLEDICTIONARY_H

@class NSMutableDictionary, NSMutableOrderedSet, NSArray;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface IMOrderedMutableDictionary : NSObject <NSFastEnumeration>

 {
    NSMutableDictionary *_dictionary;
    NSMutableOrderedSet *_mutableOrderedSet;
    NSArray *_orderedItems;
}


@property (readonly) NSUInteger count;


-(BOOL)containsKey:(id)arg0 ;
-(BOOL)containsOrderedObject:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)init;
-(id)orderedObjectForKey:(id)arg0 ;
-(id)orderedObjects;
-(void)removeOrderedObjectForKey:(id)arg0 ;
-(void)setOrderedObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif