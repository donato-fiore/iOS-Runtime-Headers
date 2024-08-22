// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OPTTSMUTABLETTSREPLACEMENT_H
#define OPTTSMUTABLETTSREPLACEMENT_H

@class NSString;


#import "OPTTSTTSReplacement.h"

@interface OPTTSMutableTTSReplacement : OPTTSTTSReplacement

@property (copy, nonatomic) NSString *original;
@property (copy, nonatomic) NSString *replacement;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif