// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICATIONSEARCHRESULT_H
#define HKMEDICATIONSEARCHRESULT_H

@class NSArray, NSNumber, HKConcept, HKIntegerSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKMedicationSearchResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *clinicalProducts;
@property (readonly, nonatomic) NSInteger debug_traversedNodeCount;
@property (readonly, copy, nonatomic) NSArray *ingredientProducts;
@property (readonly, copy, nonatomic) NSArray *routedDoseFormProducts;
@property (readonly, copy, nonatomic) NSNumber *seedHgId; // ivar: _seedHgId
@property (readonly, copy, nonatomic) HKConcept *specificProduct; // ivar: _specificProduct
@property (readonly, copy, nonatomic) HKConcept *tradeNameProduct;
@property (readonly, nonatomic) NSInteger traversedDepth; // ivar: _traversedDepth
@property (readonly, copy, nonatomic) HKIntegerSet *traversedRelationships; // ivar: _traversedRelationships


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSeedHgId:(id)arg0 specificProduct:(id)arg1 traversedRelationships:(id)arg2 traversedDepth:(NSInteger)arg3 ;
-(void)_visit:(id)arg0 ofRoot:(id)arg1 withMaxDepth:(NSInteger)arg2 handler:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif