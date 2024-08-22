// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKGENERICMEDICATIONSEARCHRESULT_H
#define HKGENERICMEDICATIONSEARCHRESULT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface HKGenericMedicationSearchResult : NSObject

@property (readonly, copy, nonatomic) NSString *brandName; // ivar: _brandName
@property (readonly, copy, nonatomic) NSString *genericMedicationId; // ivar: _genericMedicationId
@property (readonly, copy, nonatomic) NSString *genericMedicationName; // ivar: _genericMedicationName
@property (readonly, copy, nonatomic) NSArray *ingredients; // ivar: _ingredients


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyByReplacingWithIngredients:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithGenericMedicationId:(id)arg0 genericMedicationName:(id)arg1 brandName:(id)arg2 ingredients:(id)arg3 ;


@end


#endif