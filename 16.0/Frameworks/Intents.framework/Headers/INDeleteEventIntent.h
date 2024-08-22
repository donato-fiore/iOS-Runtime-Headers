// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INDELETEEVENTINTENT_H
#define INDELETEEVENTINTENT_H

@class NSString, NSNumber;
@protocol INDeleteEventIntentExport;


#import "INIntent.h"

@interface INDeleteEventIntent : INIntent <INDeleteEventIntentExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSNumber *deleteAllOccurrences;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *targetEventIdentifier;


-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithTargetEventIdentifier:(id)arg0 deleteAllOccurrences:(id)arg1 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif