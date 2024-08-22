// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLETTSREPLACEMENT_H
#define FTMUTABLETTSREPLACEMENT_H

@class NSString;


#import "FTTTSReplacement.h"

@interface FTMutableTTSReplacement : FTTTSReplacement

@property (copy, nonatomic) NSString *original;
@property (copy, nonatomic) NSString *replacement;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif