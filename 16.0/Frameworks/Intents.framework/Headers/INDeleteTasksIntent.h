// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INDELETETASKSINTENT_H
#define INDELETETASKSINTENT_H

@class NSNumber, NSString, NSArray;
@protocol INDeleteTasksIntentExport;


#import "INIntent.h"
#import "INTaskList.h"

@interface INDeleteTasksIntent : INIntent <INDeleteTasksIntentExport>



@property (readonly, copy, nonatomic) NSNumber *all;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INTaskList *taskList;
@property (readonly, copy, nonatomic) NSArray *tasks;


-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithTaskList:(id)arg0 tasks:(id)arg1 all:(id)arg2 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif