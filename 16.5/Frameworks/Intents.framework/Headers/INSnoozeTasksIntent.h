// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INSNOOZETASKSINTENT_H
#define INSNOOZETASKSINTENT_H

@class NSNumber, NSString, NSArray;
@protocol INSnoozeTasksIntentExport;


#import "INIntent.h"
#import "INDateComponentsRange.h"

@interface INSnoozeTasksIntent : INIntent <INSnoozeTasksIntentExport>



@property (readonly, copy, nonatomic) NSNumber *all;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) INDateComponentsRange *nextTriggerTime;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *tasks;


-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithTasks:(id)arg0 nextTriggerTime:(id)arg1 all:(id)arg2 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif