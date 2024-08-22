// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLELMSCORERTOKEN_H
#define QSSMUTABLELMSCORERTOKEN_H

@class NSString;


#import "QSSLmScorerToken.h"

@interface QSSMutableLmScorerToken : QSSLmScorerToken

@property (nonatomic) CGFloat log10_score;
@property (nonatomic) int ngram_used;
@property (copy, nonatomic) NSString *token_str;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif