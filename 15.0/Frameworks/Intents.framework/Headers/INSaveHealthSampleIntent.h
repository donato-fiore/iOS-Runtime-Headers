// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INSAVEHEALTHSAMPLEINTENT_H
#define INSAVEHEALTHSAMPLEINTENT_H

@class NSString, NSArray, HKUnit;
@protocol INSaveHealthSampleIntentExport;


#import "INIntent.h"
#import "INDateComponentsRange.h"

@interface INSaveHealthSampleIntent : INIntent <INSaveHealthSampleIntentExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger objectType;
@property (readonly, copy, nonatomic) INDateComponentsRange *recordDate;
@property (readonly, copy, nonatomic) NSArray *sampleMetadatas;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) HKUnit *unit;
@property (readonly, copy, nonatomic) NSArray *values;


-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithRecordDate:(id)arg0 objectType:(NSInteger)arg1 values:(id)arg2 unit:(id)arg3 sampleMetadatas:(id)arg4 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif