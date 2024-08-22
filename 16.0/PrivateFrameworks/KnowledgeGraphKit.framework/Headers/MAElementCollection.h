// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAELEMENTCOLLECTION_H
#define MAELEMENTCOLLECTION_H

@class NSSet;
@protocol NSCopying, MAGraphProxy;

#import <Foundation/Foundation.h>

#import "KGElementIdentifierSet.h"
#import "MAGraphReference.h"

@interface MAElementCollection : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) KGElementIdentifierSet *elementIdentifiers; // ivar: _elementIdentifiers
@property (readonly) NSObject<MAGraphProxy> *graph;
@property (readonly) MAGraphReference *graphReference; // ivar: _graphReference
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSSet *labels;


-(BOOL)containsCollection:(id)arg0 ;
-(BOOL)intersectsCollection:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSubsetOfCollection:(id)arg0 ;
-(NSUInteger)hash;
-(id)_anyElement;
-(id)array;
-(id)collectionByFormingUnionWith:(id)arg0 ;
-(id)collectionByIntersecting:(id)arg0 ;
-(id)collectionBySubtracting:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)filteredCollectionUsingBlock:(id)arg0 ;
-(id)initWithArray:(id)arg0 graph:(id)arg1 ;
-(id)initWithGraph:(id)arg0 ;
-(id)initWithGraph:(id)arg0 elementIdentifiers:(id)arg1 ;
-(id)initWithGraphReference:(id)arg0 elementIdentifiers:(id)arg1 ;
-(id)initWithSet:(id)arg0 graph:(id)arg1 ;
-(id)set;
-(id)sortedArrayUsingDescriptors:(id)arg0 ;
-(id)temporaryArray;
-(id)temporarySet;
-(void)_enumerateUsingBlock:(id)arg0 ;
-(void)enumerateDoublePropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateIdentifiersAsCollectionsWithBlock:(id)arg0 ;
-(void)enumerateIntegerPropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateStringPropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;
-(void)enumerateUnsignedIntegerPropertyValuesForKey:(id)arg0 withBlock:(id)arg1 ;


@end


#endif