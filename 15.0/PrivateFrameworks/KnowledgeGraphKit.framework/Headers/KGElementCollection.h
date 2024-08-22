// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCollection:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithIdentifiers:(id)arg0 graphImplementation:(id)arg1 ;
-(void)enumerateDoublePropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateElementIdentifierBatchesWithBatchSize:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateElementsWithBatchSize:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumerateIntegerPropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateStringPropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateUnsignedIntegerPropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;


@end


#endif