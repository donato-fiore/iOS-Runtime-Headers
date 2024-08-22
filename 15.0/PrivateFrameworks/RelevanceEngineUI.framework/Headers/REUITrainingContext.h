// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REUITRAININGCONTEXT_H
#define REUITRAININGCONTEXT_H

@class RETrainingContext, NSMutableDictionary, NSArray;



@interface REUITrainingContext : RETrainingContext {
    NSMutableDictionary *_becameVisibleDates;
    NSMutableDictionary *_visibilityDurations;
}


@property (readonly, nonatomic) CGFloat maximumNegativeDwellTime;
@property (readonly, nonatomic) CGFloat minimumPositiveDwellTime;
@property (readonly, nonatomic) NSUInteger onScreenElementCount;
@property (nonatomic) BOOL resetsWhenResignsCurrent; // ivar: _resetsWhenResignsCurrent
@property (readonly, nonatomic) NSArray *visibleElementIdentifiers;


-(BOOL)elementIsAvailable:(id)arg0 ;
-(BOOL)isDisplayingElementWithIdentifier:(id)arg0 ;
-(BOOL)performSimulationCommand:(id)arg0 withOptions:(id)arg1 ;
-(id)_higherElementsThanElement:(id)arg0 ;
-(id)_interactionForElement:(id)arg0 ;
-(id)_lowerElementsThanElement:(id)arg0 ;
-(id)_visibleElements;
-(id)elementsOrdered:(NSUInteger)arg0 relativeToElement:(id)arg1 ;
-(id)init;
-(id)interactionTypeForElement:(id)arg0 ;
-(void)_trainDwellForElement:(id)arg0 withInterval:(CGFloat)arg1 ;
-(void)_willResignCurrent;
-(void)elementWithIdentifierDidDisplay:(id)arg0 ;
-(void)elementWithIdentifierDidEndDisplay:(id)arg0 ;
-(void)resetContext;
-(void)selectElementWithIdentifier:(id)arg0 ;


@end


#endif