// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFTRIGGERACTIONSETSBUILDER_H
#define HFTRIGGERACTIONSETSBUILDER_H

@class NSArray, NSString, HMHome, WFHomeWorkflow, HMShortcutAction;
@protocol HFComparable, NSCopying;

#import <Foundation/Foundation.h>

#import "HFMutableSetDiff.h"
#import "HFTriggerAnonymousActionSetBuilder.h"
#import "HFSetDiff.h"

@interface HFTriggerActionSetsBuilder : NSObject <HFComparable, NSCopying>



@property (retain, nonatomic) HFMutableSetDiff *actionSetBuilders; // ivar: _actionSetBuilders
@property (readonly, nonatomic, getter=areActionsAffectedByEndEvents) BOOL actionsAffectedByEndEvents;
@property (readonly, nonatomic) NSArray *allActionBuilders;
@property (readonly, nonatomic) NSArray *allActionSets;
@property (readonly, nonatomic) NSArray *anonymousActionBuilder;
@property (retain, nonatomic) HFTriggerAnonymousActionSetBuilder *anonymousActionSetBuilder; // ivar: _anonymousActionSetBuilder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasActions;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) WFHomeWorkflow *homeWorkflow;
@property (readonly, nonatomic) BOOL isShortcutOwned;
@property (readonly, nonatomic) NSArray *namedActionSets;
@property (readonly, nonatomic) HFSetDiff *namedActionSetsDiff;
@property (retain, nonatomic) HMShortcutAction *shortcutAction; // ivar: _shortcutAction
@property (readonly) Class superclass;


-(id)_generateSummaryInformation;
-(id)_generateSummaryInformationForShortcutOwnedTrigger;
-(id)_generateSummaryInformationForStandardTrigger;
-(id)_removeDuplicateActionSets:(id)arg0 ;
-(id)_removeEmptyActionSets:(id)arg0 ;
-(id)_uniqueServiceGroupForServices:(id)arg0 ;
-(id)actionSetsSummary;
-(id)compareToObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithActionSets:(id)arg0 inHome:(id)arg1 ;
-(id)initWithActionSets:(id)arg0 inHome:(id)arg1 filterEmptyActionSets:(BOOL)arg2 ;
-(id)mediaAccessoriesForPlaybackAction:(id)arg0 ;
-(void)_generateStandaloneServices:(id)arg0 andMediaAccessories:(id)arg1 ;
-(void)_removeAllNamedActionsSets;
-(void)addActionSetBuilder:(id)arg0 ;
-(void)addActionSetIfNotPresent:(id)arg0 ;
-(void)addAnonymousActionBuilder:(id)arg0 ;
-(void)convertToHomeWorkflowActionSet:(id)arg0 ;
-(void)convertToHomeWorkflowActionSetIfNeeded;
-(void)defaultActionsForShortcut;
-(void)removeActionSetBuilder:(id)arg0 ;
-(void)removeActionSetIfPresent:(id)arg0 ;
-(void)removeAllActionsAndActionSets;
-(void)removeAnonymousActionBuilder:(id)arg0 ;
-(void)setFromTriggerActionSetsBuilder:(id)arg0 ;
-(void)updateActionSetBuilder:(id)arg0 ;
-(void)updateAnonymousActionBuilder:(id)arg0 ;
-(void)updateFromTriggerActionSetsBuilder:(id)arg0 ;


@end


#endif