// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPSOCIALHIGHLIGHTMLSCORER_H
#define PPSOCIALHIGHLIGHTMLSCORER_H

@class MLModel, NSString;
@protocol PPSocialHighlightScorer, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PPSocialHighlightMLScorer : NSObject <PPSocialHighlightScorer>

 {
    MLModel *_model;
    NSObject<OS_dispatch_queue> *_modelQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_oneHotEncodeString:(id)arg0 columns:(id)arg1 prefix:(id)arg2 ;
+(id)_scorerFromModelFactorName:(id)arg0 ;
+(id)_singleItemMultiArrayValueWithConstantValue:(CGFloat)arg0 ;
+(id)clientEncodingForClientId:(id)arg0 applicationIdentifiers:(id)arg1 ;
+(id)sharedFirstPassInstance;
+(id)sharedTopKInstance;
+(id)variantEncodingForVariant:(id)arg0 ;
-(CGFloat)scoreSocialHighlight:(id)arg0 ;
-(id)initWithModel:(id)arg0 ;


@end


#endif