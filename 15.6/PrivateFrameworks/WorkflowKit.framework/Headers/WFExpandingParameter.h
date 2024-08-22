// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFEXPANDINGPARAMETER_H
#define WFEXPANDINGPARAMETER_H

@class NSString;
@protocol WFExpandingParameterHintProvider;


#import "WFParameter.h"

@interface WFExpandingParameter : WFParameter

@property (readonly, nonatomic) NSString *hintLabel; // ivar: _hintLabel
@property (weak, nonatomic) NSObject<WFExpandingParameterHintProvider> *hintProvider; // ivar: _hintProvider


-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(id)importQuestionBehavior;
-(id)initWithDefinition:(id)arg0 ;


@end


#endif