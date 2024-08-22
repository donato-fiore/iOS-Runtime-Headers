// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMMUTABLECHIPHOME_H
#define HMMUTABLECHIPHOME_H

@class NSString;


#import "HMCHIPHome.h"
#import "HMCHIPEcosystem.h"

@interface HMMutableCHIPHome : HMCHIPHome

@property (copy) HMCHIPEcosystem *ecosystem;
@property (copy) NSString *name;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif