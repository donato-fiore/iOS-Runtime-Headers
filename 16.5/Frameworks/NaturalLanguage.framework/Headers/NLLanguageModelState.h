// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLLANGUAGEMODELSTATE_H
#define NLLANGUAGEMODELSTATE_H

@class NSDictionary, NSMutableString, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NLLanguageModelSession.h"

@interface NLLanguageModelState : NSObject <NSCopying>

 {
    NSDictionary *_options;
    NSMutableString *_context;
}


@property (readonly, copy, nonatomic) NSString *context;
@property (readonly, copy, nonatomic) NLLanguageModelSession *session; // ivar: _session


-(id)conditionalProbabilitiesForStrings:(id)arg0 ;
-(id)conditionalProbabilitiesForTokens:(id)arg0 ;
-(id)conditionalProbabilityForString:(id)arg0 ;
-(id)conditionalProbabilityForToken:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSession:(id)arg0 options:(id)arg1 context:(id)arg2 ;
-(id)options;
-(void)addContext:(id)arg0 ;
-(void)enumeratePredictions:(NSUInteger)arg0 maximumTokensPerPrediction:(NSUInteger)arg1 withBlock:(id)arg2 ;


@end


#endif