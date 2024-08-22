// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFINDEVENTSINTENT_H
#define INFINDEVENTSINTENT_H

@class NSString, CLPlacemark, NSArray;
@protocol INFindEventsIntentExport;


#import "INIntent.h"
#import "INDateComponentsRange.h"

@interface INFindEventsIntent : INIntent <INFindEventsIntentExport>



@property (readonly, copy, nonatomic) INDateComponentsRange *dateTimeRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) CLPlacemark *location;
@property (readonly, copy, nonatomic) NSArray *participants;
@property (readonly, nonatomic) NSInteger requestedEventAttribute;
@property (readonly, copy, nonatomic) NSString *searchQuery;
@property (readonly) Class superclass;


-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithSearchQuery:(id)arg0 dateTimeRange:(id)arg1 participants:(id)arg2 location:(id)arg3 requestedEventAttribute:(NSInteger)arg4 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif