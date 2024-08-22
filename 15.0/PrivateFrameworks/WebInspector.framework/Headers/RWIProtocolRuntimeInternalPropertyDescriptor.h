// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RWIPROTOCOLRUNTIMEINTERNALPROPERTYDESCRIPTOR_H
#define RWIPROTOCOLRUNTIMEINTERNALPROPERTYDESCRIPTOR_H

@class NSString;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolRuntimeRemoteObject.h"

@interface RWIProtocolRuntimeInternalPropertyDescriptor : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *value;


-(id)initWithName:(id)arg0 ;


@end


#endif