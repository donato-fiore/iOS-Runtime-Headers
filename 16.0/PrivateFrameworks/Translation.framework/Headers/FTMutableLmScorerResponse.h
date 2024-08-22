// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLELMSCORERRESPONSE_H
#define FTMUTABLELMSCORERRESPONSE_H

@class NSString, NSArray;


#import "FTLmScorerResponse.h"

@interface FTMutableLmScorerResponse : FTLmScorerResponse

@property (nonatomic) CGFloat ppl;
@property (nonatomic) int return_code;
@property (copy, nonatomic) NSString *return_str;
@property (copy, nonatomic) NSArray *tokens;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif