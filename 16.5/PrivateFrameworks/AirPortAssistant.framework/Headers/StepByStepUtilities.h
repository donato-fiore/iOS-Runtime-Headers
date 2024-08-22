// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STEPBYSTEPUTILITIES_H
#define STEPBYSTEPUTILITIES_H


#import <Foundation/Foundation.h>


@interface StepByStepUtilities : NSObject



+(NSInteger)autoGuessRecommendationToMatrixTag:(id)arg0 ;
+(NSInteger)selectorChoiceToMatrixTag:(int)arg0 ;
+(id)findSourceBaseByName:(id)arg0 fromParamDict:(id)arg1 ;
+(id)findSourceBaseByRadioName:(id)arg0 fromParamDict:(id)arg1 ;
+(id)findSourceConfigByName:(id)arg0 fromParamDict:(id)arg1 ;
+(id)findSourceNetworkByName:(id)arg0 fromParamDict:(id)arg1 ;
+(id)getProductLocalizedStringWithFormat:(id)arg0 fromParamDict:(id)arg1 ;
+(id)nameForNetworkOrDevice:(id)arg0 ;
+(id)productIDForNetworkOrDevice:(id)arg0 ;
+(id)selectorChoiceToReplaceOption:(int)arg0 ;
+(int)getDeviceKindFromParamDict:(id)arg0 ;
+(int)matrixTagToSelectorChoice:(NSInteger)arg0 ;
+(unsigned int)getProductIDFromParamDict:(id)arg0 ;
+(void)formatRecommendation:(id)arg0 fromParamDict:(id)arg1 forStep:(int)arg2 restoreString:(*id)arg3 restoreSpecificString:(*id)arg4 dontRecommendString:(*id)arg5 ;


@end


#endif