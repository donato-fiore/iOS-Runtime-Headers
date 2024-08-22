// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RWIPROTOCOLRUNTIMEREMOTEOBJECT_H
#define RWIPROTOCOLRUNTIMEREMOTEOBJECT_H

@class NSString;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolRuntimeRemoteObject.h"
#import "RWIProtocolRuntimeObjectPreview.h"

@interface RWIProtocolRuntimeRemoteObject : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *className;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *classPrototype;
@property (copy, nonatomic) NSString *objectId;
@property (retain, nonatomic) RWIProtocolRuntimeObjectPreview *preview;
@property (nonatomic) int size;
@property (copy, nonatomic) NSString *stringRepresentation;
@property (nonatomic) NSInteger subtype;
@property (nonatomic) NSInteger type;
@property (retain, nonatomic) RWIProtocolJSONObject *value;


-(id)initWithType:(NSInteger)arg0 ;


@end


#endif