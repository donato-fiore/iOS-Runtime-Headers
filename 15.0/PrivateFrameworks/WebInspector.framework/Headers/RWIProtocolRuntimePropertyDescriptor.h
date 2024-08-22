// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RWIPROTOCOLRUNTIMEPROPERTYDESCRIPTOR_H
#define RWIPROTOCOLRUNTIMEPROPERTYDESCRIPTOR_H

@class NSString;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolRuntimeRemoteObject.h"

@interface RWIProtocolRuntimePropertyDescriptor : RWIProtocolJSONObject

@property (nonatomic) BOOL configurable;
@property (nonatomic) BOOL enumerable;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *get;
@property (nonatomic) BOOL isOwn;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL nativeGetter;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *set;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *symbol;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *value;
@property (nonatomic) BOOL wasThrown;
@property (nonatomic) BOOL writable;


-(id)initWithName:(id)arg0 ;


@end


#endif