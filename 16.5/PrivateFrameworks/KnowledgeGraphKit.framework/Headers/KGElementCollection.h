// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KGELEMENTCOLLECTION_H
#define KGELEMENTCOLLECTION_H

@class NSArray, NSSet;
@protocol KGElement, KGGraphImplementation;

#import <Foundation/Foundation.h>

#import "KGElementIdentifierSet.h"

@interface KGElementCollection : NSObject

@property (readonly) NSArray *allObjects;
@property (readonly) NSObject<KGElement> *anyObject;
@property (readonly) NSUInteger count;
@property (readonly, nonatomic) KGElementIdentifierSet *identifiers; // ivar: _identifiers
@property (readonly, nonatomic) NSObject<KGGraphImplementation> *implementation; // ivar: _implementation
@property (readonly) NSSet *set;


-(BOOL)containsCollection:(id)arg0 ;
-(BOOL)intersectsCollection:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCollection:(id)arg0 ;
-(BOOL)isSubsetOfCollection:(id)arg0 ;
-(NSUInteger)hash;
-(id)collectionByFormingUnionWithCollection:(id)arg0 ;
-(id)collectionByIntersectingCollection:(id)arg0 ;
-(id)collectionBySubtractingCollection:(id)arg0 ;
-(id)description;
-(id)initWithIdentifiers:(id)arg0 graphImplementation:(id)arg1 ;
-(void)enumerateElementIdentifierBatchesWithBatchSize:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateElementsWithBatchSize:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;


@end


#endif