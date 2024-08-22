// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRECONTEXTACTIONRECOMMENDATION_H
#define HRECONTEXTACTIONRECOMMENDATION_H

@class NSMutableSet, NSSet, NSString;
@protocol HREActionRecommendation, HFIconDescriptor;


#import "HRERecommendation.h"
#import "HREActionVarianceCollection.h"

@interface HREContextActionRecommendation : HRERecommendation <HREActionRecommendation>



@property (retain, nonatomic) NSMutableSet *_actions; // ivar: __actions
@property (readonly, nonatomic) NSSet *actions;
@property (readonly, nonatomic) NSSet *addedActions;
@property (retain, nonatomic) HREActionVarianceCollection *allowedVariance; // ivar: allowedVariance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<HFIconDescriptor> *iconDescriptor; // ivar: _iconDescriptor
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


-(BOOL)containsMeaningfulChanges;
-(BOOL)containsRecommendableContent;
-(id)copyWithActionFilter:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)executeActions;
-(id)initWithHome:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(void)addAction:(id)arg0 ;
-(void)addAction:(id)arg0 allowEditingExistingActions:(BOOL)arg1 ;
-(void)addActions:(id)arg0 ;
-(void)addActions:(id)arg0 allowEditingExistingActions:(BOOL)arg1 ;
-(void)removeAction:(id)arg0 ;
-(void)removeActions:(id)arg0 ;


@end


#endif