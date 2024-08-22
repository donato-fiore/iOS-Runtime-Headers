// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFEVENTTRIGGERBUILDER_H
#define HFEVENTTRIGGERBUILDER_H

@class NSSet, NSArray, NSMutableDictionary, NSMutableSet;


#import "HFTriggerBuilder.h"
#import "HFCharacteristicTriggerBuilderInterface.h"
#import "HFEventBuilderLocationInterface.h"
#import "HFEventTrigggerBuilderTimeInterface.h"

@interface HFEventTriggerBuilder : HFTriggerBuilder

@property (readonly, nonatomic) HFCharacteristicTriggerBuilderInterface *characteristicInterface;
@property (readonly, nonatomic) NSSet *characteristics;
@property (readonly, nonatomic) NSArray *eventBuilders;
@property (readonly, nonatomic) NSSet *eventTypes; // ivar: _eventTypes
@property (nonatomic) BOOL executeOnce; // ivar: _executeOnce
@property (retain, nonatomic) NSMutableDictionary *extensionInterfaces; // ivar: _extensionInterfaces
@property (readonly, nonatomic) HFEventBuilderLocationInterface *locationInterface;
@property (retain, nonatomic) NSMutableSet *mutableEventBuilders; // ivar: _mutableEventBuilders
@property (retain, nonatomic) NSArray *recurrences; // ivar: _recurrences
@property (nonatomic) BOOL shouldMarkTriggerAsHomeAppCreated; // ivar: _shouldMarkTriggerAsHomeAppCreated
@property (readonly, nonatomic) HFEventTrigggerBuilderTimeInterface *timeInterface;


+(Class)homeKitRepresentationClass;
-(BOOL)requiresConfirmationToRun;
-(BOOL)supportsConditions;
-(BOOL)supportsEndEvents;
-(id)_allActionSets;
-(id)_createEvents;
-(id)_lazilyMarkTriggerAsHomeAppCreated;
-(id)_performValidation;
-(id)_updateEvents;
-(id)_updateExecuteOnce;
-(id)_updateRecurrences;
-(id)commitCreateTrigger;
-(id)commitEditTrigger;
-(id)commitItem;
-(id)compareToObject:(id)arg0 ;
-(id)deleteTrigger;
-(id)initWithExistingObject:(id)arg0 inHome:(id)arg1 context:(id)arg2 ;
-(id)naturalLanguageDetailsWithOptions:(id)arg0 ;
-(id)naturalLanguageNameOfType:(NSUInteger)arg0 ;
-(id)naturalLanguageNameWithOptions:(id)arg0 ;
-(void)_createEventBuilders;
-(void)addEventBuilder:(id)arg0 ;
-(void)applyEventBuilderDiff:(id)arg0 ;
-(void)removeEventBuilder:(id)arg0 ;
-(void)removeServiceLikeItem:(id)arg0 ;


@end


#endif