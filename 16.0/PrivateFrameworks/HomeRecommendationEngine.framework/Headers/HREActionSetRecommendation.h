// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HREACTIONSETRECOMMENDATION_H
#define HREACTIONSETRECOMMENDATION_H

@class NSSet, NSString, NSMutableSet, HFActionSetBuilder;
@protocol HREActionRecommendation;


#import "HRERecommendation.h"
#import "HREActionVarianceCollection.h"

@interface HREActionSetRecommendation : HRERecommendation <HREActionRecommendation>



@property (readonly, nonatomic) NSSet *actionSetBuilders;
@property (readonly, nonatomic) NSSet *actions;
@property (readonly, nonatomic) NSSet *addedActions;
@property (retain, nonatomic) HREActionVarianceCollection *allowedVariance; // ivar: allowedVariance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableSet *mutableActionSetBuilders; // ivar: _mutableActionSetBuilders
@property (retain, nonatomic) HFActionSetBuilder *selectedActionSetBuilder; // ivar: _selectedActionSetBuilder
@property (readonly) Class superclass;


-(BOOL)containsMeaningfulChanges;
-(BOOL)containsRecommendableContent;
-(BOOL)includesObjects:(id)arg0 ;
-(id)changedInvolvedObjects;
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


@end


#endif