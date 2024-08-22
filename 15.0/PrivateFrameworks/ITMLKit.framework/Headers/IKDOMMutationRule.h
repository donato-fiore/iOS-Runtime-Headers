// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKDOMMUTATIONRULE_H
#define IKDOMMUTATIONRULE_H



#import "IKDOMConditional.h"

@interface IKDOMMutationRule : IKDOMConditional

@property (readonly, nonatomic, getter=isMutable) BOOL mutable; // ivar: _mutable


+(id)_applyGeneralizationOnDOMElement:(id)arg0 withDOMElement:(id)arg1 ;
+(id)_applySpecializationOnDOMElement:(id)arg0 withDOMElement:(id)arg1 ;
+(id)mutationRuleWithDOMElement:(id)arg0 mutable:(BOOL)arg1 ;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 mutable:(BOOL)arg1 ;
-(void)applyOnDOMElement:(id)arg0 ;


@end


#endif