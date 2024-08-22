// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INSEARCHCALLHISTORYINTENT_H
#define INSEARCHCALLHISTORYINTENT_H

@class NSString, NSNumber;
@protocol INSearchCallHistoryIntentExport;


#import "INIntent.h"
#import "INDateComponentsRange.h"
#import "INPerson.h"

@interface INSearchCallHistoryIntent : INIntent <INSearchCallHistoryIntentExport>



@property (readonly, nonatomic) NSUInteger callCapabilities;
@property (readonly, nonatomic) NSInteger callType;
@property (readonly, nonatomic) NSUInteger callTypes;
@property (readonly, copy, nonatomic) INDateComponentsRange *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger preferredCallProvider;
@property (readonly, copy, nonatomic) INPerson *recipient;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSNumber *unseen;


-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithCallType:(NSInteger)arg0 dateCreated:(id)arg1 recipient:(id)arg2 callCapabilities:(NSUInteger)arg3 ;
-(id)initWithDateCreated:(id)arg0 recipient:(id)arg1 callCapabilities:(NSUInteger)arg2 callTypes:(NSUInteger)arg3 ;
-(id)initWithDateCreated:(id)arg0 recipient:(id)arg1 callCapabilities:(NSUInteger)arg2 callTypes:(NSUInteger)arg3 unseen:(id)arg4 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif