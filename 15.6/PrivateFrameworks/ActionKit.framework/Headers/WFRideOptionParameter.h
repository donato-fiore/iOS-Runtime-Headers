// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFRIDEOPTIONPARAMETER_H
#define WFRIDEOPTIONPARAMETER_H

@class WFDynamicEnumerationParameter, WFAction, NSString;
@protocol WFActionEventObserver;



@interface WFRideOptionParameter : WFDynamicEnumerationParameter <WFActionEventObserver>



@property (weak, nonatomic) WFAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)parameterStateIsValid:(id)arg0 ;
-(Class)singleStateClass;
-(void)action:(id)arg0 parameterStateDidChangeForKey:(id)arg1 ;


@end


#endif