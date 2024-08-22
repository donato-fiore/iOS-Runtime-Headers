// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INSEARCHALARMINTENT_H
#define INSEARCHALARMINTENT_H

@class NSArray, NSString;
@protocol INSearchAlarmIntentExport;


#import "INIntent.h"
#import "INAlarmSearch.h"

@interface INSearchAlarmIntent : INIntent <INSearchAlarmIntentExport>



@property (readonly, copy, nonatomic) INAlarmSearch *alarmSearch;
@property (readonly, nonatomic) NSInteger alarmSearchType;
@property (readonly, copy, nonatomic) NSArray *alarms;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithAlarmSearch:(id)arg0 alarmSearchType:(NSInteger)arg1 alarms:(id)arg2 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif