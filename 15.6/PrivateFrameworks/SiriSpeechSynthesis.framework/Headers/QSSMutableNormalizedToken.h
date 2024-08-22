// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLENORMALIZEDTOKEN_H
#define QSSMUTABLENORMALIZEDTOKEN_H

@class NSArray, NSString;


#import "QSSNormalizedToken.h"

@interface QSSMutableNormalizedToken : QSSNormalizedToken

@property (copy, nonatomic) NSArray *nbest_variants;
@property (copy, nonatomic) NSString *original_token;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif