// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INUPDATEALARMINTENT_H
#define INUPDATEALARMINTENT_H

@class NSString;
@protocol INUpdateAlarmIntentExport;


#import "INIntent.h"
#import "INAlarm.h"
#import "INAlarmSearch.h"
#import "INSpeakableString.h"
#import "INDateComponentsRange.h"

@interface INUpdateAlarmIntent : INIntent <INUpdateAlarmIntentExport>



@property (readonly, copy, nonatomic) INAlarm *alarm;
@property (readonly, copy, nonatomic) INAlarmSearch *alarmSearch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger operation;
@property (readonly, copy, nonatomic) INSpeakableString *proposedLabel;
@property (readonly, copy, nonatomic) INDateComponentsRange *proposedTime;
@property (readonly) Class superclass;


-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithAlarmSearch:(id)arg0 alarm:(id)arg1 operation:(NSInteger)arg2 proposedTime:(id)arg3 proposedLabel:(id)arg4 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif