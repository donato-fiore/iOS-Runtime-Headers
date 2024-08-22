// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLETOKENPRONS_H
#define FTMUTABLETOKENPRONS_H

@class NSArray, NSString;


#import "FTTokenProns.h"

@interface FTMutableTokenProns : FTTokenProns

@property (copy, nonatomic) NSArray *normalized_prons;
@property (copy, nonatomic) NSString *orthography;
@property (copy, nonatomic) NSArray *prons;
@property (copy, nonatomic) NSArray *sanitized_sequences;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif