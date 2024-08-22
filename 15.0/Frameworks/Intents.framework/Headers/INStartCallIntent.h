// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INSTARTCALLINTENT_H
#define INSTARTCALLINTENT_H

@class NSArray, NSString, NSNumber;
@protocol UNNotificationContentProviding, INStartCallIntentExport;


#import "INIntent.h"
#import "INCallRecordFilter.h"
#import "INCallRecord.h"

@interface INStartCallIntent : INIntent <UNNotificationContentProviding, INStartCallIntentExport>



@property (readonly, nonatomic) NSInteger audioRoute;
@property (readonly, nonatomic) NSInteger callCapability;
@property (copy, nonatomic) NSArray *callGroups;
@property (readonly, copy, nonatomic) INCallRecordFilter *callRecordFilter;
@property (readonly, copy, nonatomic) INCallRecord *callRecordToCallBack;
@property (readonly, copy, nonatomic) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger destinationType;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *isGroupCall;
@property (copy, nonatomic) NSString *notificationThreadIdentifier;
@property (nonatomic) NSInteger preferredCallProvider;
@property (nonatomic) NSInteger recordTypeForRedialing;
@property (readonly, nonatomic) NSInteger recordTypeForRedialing;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic, setter=setTTYType:) NSInteger ttyType;


+(id)_ignoredParameters;
-(BOOL)configureAttributeSet:(id)arg0 includingData:(BOOL)arg1 ;
-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_currentParameterCombination;
-(id)_dictionaryRepresentation;
-(id)_emptyCopy;
-(id)_metadata;
-(id)_spotlightContentType;
-(id)_subtitleWithLocalizer:(id)arg0 fromBundleURL:(id)arg1 ;
-(id)_titleWithLocalizer:(id)arg0 fromBundleURL:(id)arg1 ;
-(id)_typedBackingStore;
-(id)_validParameterCombinationsWithSchema:(id)arg0 ;
-(id)domain;
-(id)initWithAudioRoute:(NSInteger)arg0 destinationType:(NSInteger)arg1 contacts:(id)arg2 callCapability:(NSInteger)arg3 ;
-(id)initWithAudioRoute:(NSInteger)arg0 destinationType:(NSInteger)arg1 contacts:(id)arg2 recordTypeForRedialing:(NSInteger)arg3 callCapability:(NSInteger)arg4 ;
-(id)initWithAudioRoute:(NSInteger)arg0 destinationType:(NSInteger)arg1 preferredCallProvider:(NSInteger)arg2 contacts:(id)arg3 recordTypeForRedialing:(NSInteger)arg4 ttyType:(NSInteger)arg5 callCapability:(NSInteger)arg6 ;
-(id)initWithCallRecordFilter:(id)arg0 callRecordToCallBack:(id)arg1 audioRoute:(NSInteger)arg2 destinationType:(NSInteger)arg3 contacts:(id)arg4 callCapability:(NSInteger)arg5 ;
-(id)initWithCallRecordFilter:(id)arg0 callRecordToCallBack:(id)arg1 audioRoute:(NSInteger)arg2 destinationType:(NSInteger)arg3 preferredCallProvider:(NSInteger)arg4 contacts:(id)arg5 ttyType:(NSInteger)arg6 callCapability:(NSInteger)arg7 ;
-(id)initWithDestinationType:(NSInteger)arg0 contacts:(id)arg1 callCapability:(NSInteger)arg2 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif