// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INCREATEALARMINTENT_H
#define INCREATEALARMINTENT_H

@class NSString, NSNumber;
@protocol INCreateAlarmIntentExport;


#import "INIntent.h"
#import "INSpeakableString.h"
#import "INDateComponentsRange.h"

@interface INCreateAlarmIntent : INIntent <INCreateAlarmIntentExport>



@property (readonly, nonatomic) NSUInteger alarmRepeatScheduleOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) INSpeakableString *label;
@property (readonly, copy, nonatomic) NSNumber *relativeOffsetInMinutes;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INDateComponentsRange *time;


-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithRelativeOffsetInMinutes:(id)arg0 time:(id)arg1 label:(id)arg2 alarmRepeatScheduleOptions:(NSUInteger)arg3 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif