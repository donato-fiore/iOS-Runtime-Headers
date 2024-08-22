// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UPPREPROCESSOR_H
#define UPPREPROCESSOR_H

@class NSLocale;

#import <Foundation/Foundation.h>


@interface UPPreprocessor : NSObject {
    *AbstractFeaturizer __featurizer;
}


@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale


+(struct vector<nl_featurization::span_matching::MatchedSpan, std::allocator<nl_featurization::span_matching::MatchedSpan>> )buildMatchedSpanListFromQuerySpans:(id)arg0 ;
-(id)initWithLocale:(id)arg0 featurizer:(struct AbstractFeaturizer *)arg1 ;
-(id)preprocess:(id)arg0 error:(*id)arg1 ;


@end


#endif