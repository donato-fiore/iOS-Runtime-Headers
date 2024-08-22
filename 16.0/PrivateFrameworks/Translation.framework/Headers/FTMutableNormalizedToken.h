// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLENORMALIZEDTOKEN_H
#define FTMUTABLENORMALIZEDTOKEN_H

@class NSArray, NSString;


#import "FTNormalizedToken.h"

@interface FTMutableNormalizedToken : FTNormalizedToken

@property (copy, nonatomic) NSArray *nbest_variants;
@property (copy, nonatomic) NSString *original_token;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif