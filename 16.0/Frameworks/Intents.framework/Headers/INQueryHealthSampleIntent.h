// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INQUERYHEALTHSAMPLEINTENT_H
#define INQUERYHEALTHSAMPLEINTENT_H

@class NSString, NSArray, HKUnit;
@protocol INQueryHealthSampleIntentExport;


#import "INIntent.h"

@interface INQueryHealthSampleIntent : INIntent <INQueryHealthSampleIntentExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger expectedResultType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger objectType;
@property (readonly, nonatomic) NSInteger questionType;
@property (readonly, copy, nonatomic) NSArray *recordDates;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *thresholdValues;
@property (readonly, copy, nonatomic) HKUnit *unit;


-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithObjectType:(NSInteger)arg0 recordDates:(id)arg1 unit:(id)arg2 questionType:(NSInteger)arg3 thresholdValues:(id)arg4 expectedResultType:(NSInteger)arg5 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif