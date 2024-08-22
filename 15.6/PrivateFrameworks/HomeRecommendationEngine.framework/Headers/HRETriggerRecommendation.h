// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRETRIGGERRECOMMENDATION_H
#define HRETRIGGERRECOMMENDATION_H

@class NSSet, NSString, NSMutableSet, HFTriggerBuilder;
@protocol HREActionRecommendation, HFIconDescriptor;


#import "HRERecommendation.h"
#import "HREActionVarianceCollection.h"

@interface HRETriggerRecommendation : HRERecommendation <HREActionRecommendation>



@property (readonly, nonatomic) NSSet *actions;
@property (readonly, nonatomic) NSSet *addedActions;
@property (retain, nonatomic) HREActionVarianceCollection *allowedVariance; // ivar: allowedVariance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor; // ivar: _iconDescriptor
@property (retain, nonatomic) NSMutableSet *mutableTriggerBuilders; // ivar: mutableTriggerBuilders
@property (retain, nonatomic) HFTriggerBuilder *selectedTriggerBuilder; // ivar: _selectedTriggerBuilder
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *triggerBuilders;


-(BOOL)containsMeaningfulChanges;
-(BOOL)containsRecommendableContent;
-(BOOL)includesObjects:(id)arg0 ;
-(id)changedInvolvedObjects;
-(id)compareForMatchingToTrigger:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)existingActionBuilder:(id)arg0 inSet:(id)arg1 ;
-(id)initWithHome:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)involvedObjects;
-(void)addAction:(id)arg0 ;
-(void)addAction:(id)arg0 allowEditingExistingActions:(BOOL)arg1 ;
-(void)addActions:(id)arg0 ;
-(void)addActions:(id)arg0 allowEditingExistingActions:(BOOL)arg1 ;
-(void)removeAction:(id)arg0 ;
-(void)removeActions:(id)arg0 ;
-(void)replaceTriggerBuilder:(id)arg0 withTriggerBuilder:(id)arg1 allowEditingExistingActions:(BOOL)arg2 ;


@end


#endif