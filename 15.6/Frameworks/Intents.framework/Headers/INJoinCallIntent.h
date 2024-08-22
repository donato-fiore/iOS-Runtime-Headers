// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INJOINCALLINTENT_H
#define INJOINCALLINTENT_H

@class NSString;
@protocol INJoinCallIntentExport;


#import "INIntent.h"
#import "INCallGroupConversation.h"
#import "INCallGroupConversationFilter.h"

@interface INJoinCallIntent : INIntent <INJoinCallIntentExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) INCallGroupConversation *groupConversation;
@property (readonly, copy, nonatomic) INCallGroupConversationFilter *groupConversationFilter;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithGroupConversationFilter:(id)arg0 groupConversation:(id)arg1 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif