// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GOSSIP_H
#define GOSSIP_H

@class NSData;


#import "GPBMessage.h"

@interface Gossip : GPBMessage

@property (copy, nonatomic) NSData *sth;
@property (nonatomic) int version;


+(id)descriptor;


@end


#endif