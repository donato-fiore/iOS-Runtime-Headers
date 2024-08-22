// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCHARACTERISTICBATCHREADRESPONSE_H
#define HFCHARACTERISTICBATCHREADRESPONSE_H

@class NSSet, NSString, NSDictionary;
@protocol NAIdentifiable, HFCharacteristicOperationContextProviding;

#import <Foundation/Foundation.h>


@interface HFCharacteristicBatchReadResponse : NSObject <NAIdentifiable>



@property (readonly, nonatomic) NSSet *allCharacteristicTypes; // ivar: _allCharacteristicTypes
@property (readonly, nonatomic) NSSet *allCharacteristics; // ivar: _allCharacteristics
@property (readonly, nonatomic) NSSet *allReadResponses; // ivar: _allReadResponses
@property (readonly, nonatomic) NSSet *allServices; // ivar: _allServices
@property (readonly, nonatomic) NSObject<HFCharacteristicOperationContextProviding> *contextProvider; // ivar: _contextProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *responseKeyedByCharacteristicUUID; // ivar: _responseKeyedByCharacteristicUUID
@property (readonly, nonatomic) NSDictionary *responsesKeyedByCharacteristicType; // ivar: _responsesKeyedByCharacteristicType
@property (readonly) Class superclass;


+(id)_aggregatedValueForValues:(id)arg0 withAggregationPolicy:(NSUInteger)arg1 metadata:(id)arg2 ;
+(id)_averageValueForValues:(id)arg0 metadata:(id)arg1 ;
+(id)_mostAbnormalValueForValues:(id)arg0 ;
+(id)_mostCommonValueForValues:(id)arg0 ;
+(id)aggregatedMetadataForCharacteristics:(id)arg0 ;
+(id)aggregatedReadResponseFromResponses:(id)arg0 withAggregationPolicy:(NSUInteger)arg1 ;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)defaultAggregationPolicyForCharacteristicType:(id)arg0 ;
-(id)_aggregatedMetadataForCharacteristicType:(id)arg0 ;
-(id)_responseForCharacteristicType:(id)arg0 aggregationPolicy:(NSUInteger)arg1 filter:(id)arg2 ;
-(id)allResponsesForCharacteristicRecipe:(id)arg0 ;
-(id)allResponsesForCharacteristicType:(id)arg0 ;
-(id)allResponsesForCharacteristicType:(id)arg0 inServicesOfTypes:(id)arg1 ;
-(id)allResponsesForCharacteristicTypes:(id)arg0 ;
-(id)batchResponseForService:(id)arg0 ;
-(id)batchResponseForService:(id)arg0 includeChildServices:(BOOL)arg1 ;
-(id)init;
-(id)initWithReadResponses:(id)arg0 contextProvider:(id)arg1 ;
-(id)responseForCharacteristic:(id)arg0 ;
-(id)responseForCharacteristicRecipe:(id)arg0 ;
-(id)responseForCharacteristicType:(id)arg0 ;
-(id)responseForCharacteristicType:(id)arg0 aggregationPolicy:(NSUInteger)arg1 ;
-(id)responseForCharacteristicType:(id)arg0 inService:(id)arg1 ;
-(id)responseForCharacteristicType:(id)arg0 inService:(id)arg1 aggregationPolicy:(NSUInteger)arg2 ;
-(id)responseForCharacteristicType:(id)arg0 inServicesOfTypes:(id)arg1 ;
-(id)servicesWithErrorForCharacteristicType:(id)arg0 ;
-(id)servicesWithValue:(id)arg0 forCharacteristicType:(id)arg1 ;
// -(id)servicesWithValuesPassingTest:(id)arg0 forCharacteristicType:(unk)arg1  ;


@end


#endif