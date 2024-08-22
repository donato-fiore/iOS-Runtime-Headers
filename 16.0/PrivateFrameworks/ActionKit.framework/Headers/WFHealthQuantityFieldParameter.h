// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFHEALTHQUANTITYFIELDPARAMETER_H
#define WFHEALTHQUANTITYFIELDPARAMETER_H

@class WFQuantityFieldParameter, NSArray, WFAction, NSString, HKQuantityType;
@protocol WFActionEventObserver;



@interface WFHealthQuantityFieldParameter : WFQuantityFieldParameter <WFActionEventObserver>

 {
    NSArray *_possibleUnits;
}


@property (weak, nonatomic) WFAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType
@property (readonly) Class superclass;


-(BOOL)isHidden;
-(id)localizedLabel;
-(id)localizedLabelForPossibleUnit:(id)arg0 magnitude:(id)arg1 style:(NSUInteger)arg2 ;
-(id)localizedPrompt;
-(id)possibleUnits;
-(void)action:(id)arg0 parameterStateDidChangeForKey:(id)arg1 ;
-(void)attributesDidChange;
-(void)setPossibleUnits:(id)arg0 ;
-(void)updatePossibleUnits;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;


@end


#endif