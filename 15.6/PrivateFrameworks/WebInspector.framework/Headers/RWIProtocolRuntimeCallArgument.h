// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLRUNTIMECALLARGUMENT_H
#define RWIPROTOCOLRUNTIMECALLARGUMENT_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolRuntimeCallArgument : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *objectId;
@property (retain, nonatomic) RWIProtocolJSONObject *value;




@end


#endif