// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDTASTEPROFILE_H
#define AMDTASTEPROFILE_H

@class NSManagedObject, NSString, NSData;



@interface AMDTasteProfile : NSManagedObject

@property (nonatomic) short domain;
@property (copy, nonatomic) NSString *featureName;
@property (nonatomic) NSInteger lastUpdated;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) NSData *value;


+(BOOL)hasArcade:(*id)arg0 ;
+(NSInteger)getUpdateTimeForSource:(id)arg0 inDomain:(id)arg1 ;
+(id)deleteAll:(*id)arg0 ;
+(id)deleteAppInfoEntries:(*id)arg0 ;
+(id)deleteEntriesOfFeature:(id)arg0 withDomain:(NSInteger)arg1 error:(*id)arg2 ;
+(id)deleteWithPredicates:(id)arg0 error:(*id)arg1 ;
+(id)fetchRequest;
+(id)fetchTasteProfile:(*id)arg0 ;
+(id)getEntries:(id)arg0 error:(*id)arg1 ;
+(id)getFeatureValueWithName:(id)arg0 inDomain:(id)arg1 error:(*id)arg2 ;
+(id)getFeatureWithName:(id)arg0 inDomain:(id)arg1 error:(*id)arg2 ;
+(id)getPurchasedAppsSet:(*id)arg0 ;
+(id)getStorefrontIdForDomain:(id)arg0 ;
+(id)getUserIdForDomain:(id)arg0 ;
+(id)refreshAggregationTasteProfileForDomain:(id)arg0 forUser:(id)arg1 andStoreFrontId:(unsigned int)arg2 error:(*id)arg3 ;
+(id)refreshAppInformationTasteProfile:(*id)arg0 ;
+(id)refreshServerTasteProfile:(id)arg0 error:(*id)arg1 ;
+(id)saveTasteProfileEntriesFromDict:(id)arg0 inDomain:(id)arg1 forSource:(id)arg2 error:(*id)arg3 ;
+(void)refreshCToLMaps;
+(void)saveMinimalCToLMapForModelId:(id)arg0 usingMapData:(id)arg1 andPurchases:(id)arg2 ;


@end


#endif