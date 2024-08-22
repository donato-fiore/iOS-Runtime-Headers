// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RWIPROTOCOLNETWORKINITIATOR_H
#define RWIPROTOCOLNETWORKINITIATOR_H

@class NSArray, NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolNetworkInitiator : RWIProtocolJSONObject

@property (nonatomic) CGFloat lineNumber;
@property (nonatomic) int nodeId;
@property (copy, nonatomic) NSArray *stackTrace;
@property (nonatomic) NSInteger type;
@property (copy, nonatomic) NSString *url;


-(id)initWithType:(NSInteger)arg0 ;


@end


#endif