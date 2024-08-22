// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFTRIGGERBUILDER_H
#define HFTRIGGERBUILDER_H

@class NSString, NSArray, HMTrigger;
@protocol HFComparable, HFTriggerBuilderContextProviding;


#import "HFItemBuilder.h"
#import "HFConditionCollection.h"
#import "HFDurationEventBuilder.h"
#import "HFMutableSetDiff.h"
#import "HFTriggerActionSetsBuilder.h"

@interface HFTriggerBuilder : HFItemBuilder <HFComparable>



@property (readonly, nonatomic, getter=areActionsAffectedByEndEvents) BOOL actionsAffectedByEndEvents;
@property (retain, nonatomic) HFConditionCollection *conditionCollection; // ivar: _conditionCollection
@property (retain, nonatomic) NSObject<HFTriggerBuilderContextProviding> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HFDurationEventBuilder *designatedDurationEventBuilder;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSArray *endEventBuilders;
@property (retain, nonatomic) HFMutableSetDiff *endEventBuildersDiff; // ivar: _endEventBuildersDiff
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isShortcutOwned;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL nameIsConfigured; // ivar: _nameIsConfigured
@property (readonly, nonatomic) BOOL requiresConfirmationToRun;
@property (readonly, nonatomic) BOOL requiresFMFDeviceToRun;
@property (readonly, nonatomic) BOOL requiresHomeHub;
@property (readonly, nonatomic) BOOL requiresLocationServicesAuthorization;
@property (readonly, nonatomic) BOOL requiresUpdatedHomeHub;
@property (readonly, nonatomic) BOOL secureActionsRequireConfirmationToRun;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsConditions;
@property (readonly, nonatomic) BOOL supportsEndEvents;
@property (readonly, nonatomic) BOOL supportsHomeKitAutomationBuilders;
@property (readonly, nonatomic) HMTrigger *trigger;
@property (retain, nonatomic) HFTriggerActionSetsBuilder *triggerActionSets; // ivar: _triggerActionSets


+(Class)homeKitRepresentationClass;
+(id)triggerBuilderForTrigger:(id)arg0 inHome:(id)arg1 context:(id)arg2 ;
+(id)triggerBuilderForTrigger:(id)arg0 inHome:(id)arg1 context:(id)arg2 assertsFailure:(BOOL)arg3 ;
-(id)_commitAddTriggerToHome:(id)arg0 ;
-(id)_commitUsingBuilders;
-(id)_deleteTrigger:(id)arg0 fromHome:(id)arg1 ;
-(id)_lazy_performValidation;
-(id)_legacyCommitItem;
-(id)_uniquelyRenameTrigger:(id)arg0 pendingReplaceByNewTriggerWithName:(id)arg1 ;
-(id)_updateActionSets;
-(id)_updateAnonymousActionSet;
-(id)_updateConditions;
-(id)_updateEnabledState;
-(id)_updateEndEvents;
-(id)_updateName;
-(id)asGeneric;
-(id)commitCreateTrigger;
-(id)commitEditTrigger;
-(id)commitItem;
-(id)compareToObject:(id)arg0 ;
-(id)createNewTriggerBuilder;
-(id)deleteTrigger;
-(id)getOrCreateTriggerBuilder;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 ;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 context:(id)arg2 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithHome:(id)arg0 context:(id)arg1 ;
-(id)lazilyFinishCommitingTrigger;
-(id)naturalLanguageDetailsWithOptions:(id)arg0 ;
-(id)naturalLanguageNameOfType:(NSUInteger)arg0 ;
-(id)naturalLanguageNameWithOptions:(id)arg0 ;
-(id)replaceCurrentTriggerWithTrigger:(id)arg0 ;
-(id)triggerBuilderWithContext:(id)arg0 ;
-(id)updateTriggerBuilder:(id)arg0 ;
-(id)validationError;
-(void)_didReplaceBackingTrigger;
-(void)_notifyObserversOfAddingTrigger:(id)arg0 ;
-(void)_notifyObserversOfChangingTrigger:(id)arg0 ;
-(void)addEndEventBuilder:(id)arg0 ;
-(void)removeAllEndEventBuilders;
-(void)removeEndEventBuilder:(id)arg0 ;
-(void)removeServiceLikeItem:(id)arg0 ;
-(void)replaceConditionsWithConditions:(id)arg0 ;
-(void)setEndEvent:(id)arg0 ;
-(void)updateEndEventBuilder:(id)arg0 ;


@end


#endif