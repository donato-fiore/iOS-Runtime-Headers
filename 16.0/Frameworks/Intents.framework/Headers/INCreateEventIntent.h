// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCREATEEVENTINTENT_H
#define INCREATEEVENTINTENT_H

@class NSString, CLPlacemark, NSArray;
@protocol INCreateEventIntentExport;


#import "INIntent.h"
#import "INDateComponentsRange.h"

@interface INCreateEventIntent : INIntent <INCreateEventIntentExport>



@property (readonly, copy, nonatomic) INDateComponentsRange *dateTimeRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) CLPlacemark *location;
@property (readonly, copy, nonatomic) NSArray *participants;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;


-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithTitle:(id)arg0 dateTimeRange:(id)arg1 participants:(id)arg2 location:(id)arg3 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif