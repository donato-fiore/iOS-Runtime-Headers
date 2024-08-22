// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFULLMEDICATIONSEARCHRESULT_H
#define HKFULLMEDICATIONSEARCHRESULT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface HKFullMedicationSearchResult : NSObject

@property (readonly, copy, nonatomic) NSString *doseForm; // ivar: _doseForm
@property (readonly, copy, nonatomic) NSArray *ingredients; // ivar: _ingredients
@property (readonly, copy, nonatomic) NSString *packagingNDC; // ivar: _packagingNDC
@property (readonly, copy, nonatomic) NSString *packagingName; // ivar: _packagingName
@property (readonly, copy, nonatomic) NSString *productBrandName; // ivar: _productBrandName
@property (readonly, copy, nonatomic) NSString *productGenericName; // ivar: _productGenericName
@property (readonly, copy, nonatomic) NSString *productId; // ivar: _productId
@property (readonly, copy, nonatomic) NSString *route; // ivar: _route


-(id)dictionaryRepresentation;
-(id)initWithProductId:(id)arg0 packagingName:(id)arg1 packagingNDC:(id)arg2 productBrandName:(id)arg3 productGenericName:(id)arg4 route:(id)arg5 doseForm:(id)arg6 ;


@end


#endif