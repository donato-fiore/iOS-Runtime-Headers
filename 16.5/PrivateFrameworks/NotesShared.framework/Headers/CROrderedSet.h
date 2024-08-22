// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRORDEREDSET_H
#define CRORDEREDSET_H

@class NSArray, NSString, NSMutableArray;
@protocol CRDataType, CRCoding;

#import <Foundation/Foundation.h>

#import "CRSet.h"
#import "ICCRDocument.h"

@interface CROrderedSet : NSObject <CRDataType, CRCoding>



@property (readonly, copy) NSArray *allObjects;
@property (retain, nonatomic) CRSet *contents; // ivar: _contents
@property (readonly) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) ICCRDocument *document;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *orderedArray; // ivar: _orderedArray
@property (readonly) Class superclass;


-(BOOL)containsObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)indexOfObject:(id)arg0 ;
-(id)_indexForIndex:(NSUInteger)arg0 ;
-(id)deltaSince:(id)arg0 in:(id)arg1 ;
-(id)init;
-(id)initWithCRCoder:(id)arg0 ;
-(id)objectAtIndex:(NSUInteger)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)tombstone;
-(void)_sort;
-(void)addObject:(id)arg0 ;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)encodeWithCRCoder:(id)arg0 ;
-(void)enumerateWithBlock:(id)arg0 ;
-(void)insertObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)mergeWith:(id)arg0 ;
-(void)mergeWithSet:(id)arg0 ;
-(void)moveObject:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)realizeLocalChangesIn:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeObject:(id)arg0 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 ;
-(void)setObject:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setObject:(id)arg0 atIndexedSubscript:(NSUInteger)arg1 ;
-(void)walkGraph:(id)arg0 ;


@end


#endif