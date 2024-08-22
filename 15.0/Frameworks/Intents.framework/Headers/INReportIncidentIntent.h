// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INREPORTINCIDENTINTENT_H
#define INREPORTINCIDENTINTENT_H

@class NSString, NSNumber, CLPlacemark;
@protocol INReportIncidentIntentExport;


#import "INIntent.h"
#import "INSupportedTrafficIncidentType.h"

@interface INReportIncidentIntent : INIntent <INReportIncidentIntentExport>



@property (readonly, copy, nonatomic) NSString *additionalDetails;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *incidentType;
@property (readonly, copy, nonatomic) INSupportedTrafficIncidentType *incidentType;
@property (readonly, copy, nonatomic) NSNumber *isClear;
@property (readonly, copy, nonatomic) NSNumber *startTime;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) CLPlacemark *userLocation;


-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithIncidentType:(id)arg0 startTime:(id)arg1 additionalDetails:(id)arg2 isClear:(id)arg3 ;
-(id)initWithIncidentType:(id)arg0 startTime:(id)arg1 isClear:(id)arg2 userLocation:(id)arg3 additionalDetails:(id)arg4 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif