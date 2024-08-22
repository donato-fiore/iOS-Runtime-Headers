// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIMPLERULECONDITION_H
#define SIMPLERULECONDITION_H

@class NSMutableDictionary, NSString;
@protocol ConfigurableObjectProtocol, SymptomAdditionalProtocol;

#import <Foundation/Foundation.h>


@interface SimpleRuleCondition : NSObject <ConfigurableObjectProtocol>

 {
    NSMutableDictionary *_resetSources;
}


@property (retain, nonatomic) NSObject<SymptomAdditionalProtocol> *additionalHandler; // ivar: _additionalHandler
@property (nonatomic) SEL additionalSelector; // ivar: _additionalSelector
@property (nonatomic) NSInteger conditionFlags; // ivar: _conditionFlags
@property (nonatomic) NSInteger conditionMaxAge; // ivar: _conditionMaxAge
@property (nonatomic) NSInteger conditionMinCount; // ivar: _conditionMinCount
@property (retain, nonatomic) NSString *conditionName; // ivar: _conditionName
@property (retain, nonatomic) NSString *conditionPrevSymptom; // ivar: _conditionPrevSymptom
@property (retain, nonatomic) NSString *conditionStringID; // ivar: _conditionStringID
@property (nonatomic) NSInteger conditionStringLength; // ivar: _conditionStringLength
@property (nonatomic) int conditionType; // ivar: _conditionType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)configureClass:(id)arg0 ;
+(id)objectWithName:(id)arg0 ;
-(BOOL)evaluate:(id)arg0 showingWorkAt:(id)arg1 ;
-(BOOL)evaluateHandler:(id)arg0 showingWorkAt:(id)arg1 ;
-(BOOL)evaluatePrevSymptom:(id)arg0 showingWorkAt:(id)arg1 ;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)_reset:(id)arg0 ;


@end


#endif