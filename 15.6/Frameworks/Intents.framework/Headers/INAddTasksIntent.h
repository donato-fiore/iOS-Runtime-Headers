// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INADDTASKSINTENT_H
#define INADDTASKSINTENT_H

@class NSArray, NSString;
@protocol INAddTasksIntentExport;


#import "INIntent.h"
#import "INContactEventTrigger.h"
#import "INSpatialEventTrigger.h"
#import "INTaskList.h"
#import "INTemporalEventTrigger.h"

@interface INAddTasksIntent : INIntent <INAddTasksIntentExport>



@property (copy, nonatomic) INContactEventTrigger *contactEventTrigger;
@property (copy, nonatomic) NSArray *contactEventTriggers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSInteger priority;
@property (readonly, copy, nonatomic) INSpatialEventTrigger *spatialEventTrigger;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INTaskList *targetTaskList;
@property (copy, nonatomic) NSArray *targetTaskListMembers;
@property (nonatomic) NSInteger taskReference;
@property (readonly, copy, nonatomic) NSArray *taskTitles;
@property (readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;


-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithTargetTaskList:(id)arg0 taskTitles:(id)arg1 spatialEventTrigger:(id)arg2 temporalEventTrigger:(id)arg3 ;
-(id)initWithTargetTaskList:(id)arg0 taskTitles:(id)arg1 spatialEventTrigger:(id)arg2 temporalEventTrigger:(id)arg3 priority:(NSInteger)arg4 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif