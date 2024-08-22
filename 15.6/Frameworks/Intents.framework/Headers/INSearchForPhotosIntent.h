// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INSEARCHFORPHOTOSINTENT_H
#define INSEARCHFORPHOTOSINTENT_H

@class NSArray, NSString, CLPlacemark;
@protocol INSearchForPhotosIntentExport;


#import "INIntent.h"
#import "INDateComponentsRange.h"

@interface INSearchForPhotosIntent : INIntent <INSearchForPhotosIntentExport>



@property (copy, nonatomic) NSArray *activities;
@property (readonly, nonatomic) NSInteger activitiesOperator;
@property (readonly, copy, nonatomic) NSString *albumName;
@property (readonly, copy, nonatomic) INDateComponentsRange *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSInteger eventsOperator;
@property (readonly, nonatomic) NSUInteger excludedAttributes;
@property (copy, nonatomic) NSArray *geographicalFeatures;
@property (readonly, nonatomic) NSInteger geographicalFeaturesOperator;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger includedAttributes;
@property (readonly, copy, nonatomic) CLPlacemark *locationCreated;
@property (copy, nonatomic) NSString *memoryName;
@property (readonly, copy, nonatomic) NSArray *peopleInPhoto;
@property (readonly, nonatomic) NSInteger peopleInPhotoOperator;
@property (copy, nonatomic) NSArray *places;
@property (readonly, nonatomic) NSInteger placesOperator;
@property (readonly, copy, nonatomic) NSArray *searchTerms;
@property (readonly, nonatomic) NSInteger searchTermsOperator;
@property (readonly) Class superclass;


-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithDateCreated:(id)arg0 locationCreated:(id)arg1 albumName:(id)arg2 searchTerms:(id)arg3 includedAttributes:(NSUInteger)arg4 excludedAttributes:(NSUInteger)arg5 peopleInPhoto:(id)arg6 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif