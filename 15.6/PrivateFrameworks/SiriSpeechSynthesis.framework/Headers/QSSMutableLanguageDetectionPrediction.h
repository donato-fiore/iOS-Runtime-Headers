// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLELANGUAGEDETECTIONPREDICTION_H
#define QSSMUTABLELANGUAGEDETECTIONPREDICTION_H

@class NSString;


#import "QSSLanguageDetectionPrediction.h"

@interface QSSMutableLanguageDetectionPrediction : QSSLanguageDetectionPrediction

@property (nonatomic) float confidence;
@property (nonatomic) BOOL is_low_confidence;
@property (copy, nonatomic) NSString *locale;
@property (nonatomic) float threshold;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif