// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLELMSCORERRESPONSE_H
#define QSSMUTABLELMSCORERRESPONSE_H

@class NSString, NSArray;


#import "QSSLmScorerResponse.h"

@interface QSSMutableLmScorerResponse : QSSLmScorerResponse

@property (nonatomic) CGFloat ppl;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSArray *tokens;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif