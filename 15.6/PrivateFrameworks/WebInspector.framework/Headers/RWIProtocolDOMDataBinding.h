// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLDOMDATABINDING_H
#define RWIPROTOCOLDOMDATABINDING_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolDOMDataBinding : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *binding;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *value;


-(id)initWithBinding:(id)arg0 value:(id)arg1 ;


@end


#endif