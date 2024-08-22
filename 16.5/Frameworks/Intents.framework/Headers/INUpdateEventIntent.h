// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INUPDATEEVENTINTENT_H
#define INUPDATEEVENTINTENT_H

@class NSArray, NSString, NSNumber, CLPlacemark;
@protocol INUpdateEventIntentExport;


#import "INIntent.h"
#import "INDateComponentsRange.h"

@interface INUpdateEventIntent : INIntent <INUpdateEventIntentExport>



@property (readonly, copy, nonatomic) NSArray *addParticipants;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *removeLocation;
@property (readonly, copy, nonatomic) NSArray *removeParticipants;
@property (readonly, copy, nonatomic) INDateComponentsRange *setDateTimeRange;
@property (readonly, copy, nonatomic) CLPlacemark *setLocation;
@property (readonly, copy, nonatomic) NSString *setTitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *targetEventIdentifier;
@property (readonly, copy, nonatomic) NSNumber *updateAllOccurrences;


-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithTargetEventIdentifier:(id)arg0 setTitle:(id)arg1 setDateTimeRange:(id)arg2 setLocation:(id)arg3 addParticipants:(id)arg4 removeParticipants:(id)arg5 updateAllOccurrences:(id)arg6 removeLocation:(id)arg7 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif