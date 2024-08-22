// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMISALIENCYMODEL_H
#define SGMISALIENCYMODEL_H


#import <Foundation/Foundation.h>


@interface SGMISaliencyModel : NSObject



+(CGFloat)saliencyThreshold;
+(NSInteger)ruleBasedInferenceFor:(id)arg0 ;
+(NSInteger)ruleBasedInferenceFor:(id)arg0 config:(id)arg1 ;
+(id)defaultModel;
+(id)getSaliencyOutputOf:(id)arg0 forArray:(id)arg1 ;
+(id)saliencyForFeatureVector:(id)arg0 ;


@end


#endif