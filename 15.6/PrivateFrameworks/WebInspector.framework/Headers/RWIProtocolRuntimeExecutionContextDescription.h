// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLRUNTIMEEXECUTIONCONTEXTDESCRIPTION_H
#define RWIPROTOCOLRUNTIMEEXECUTIONCONTEXTDESCRIPTION_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolRuntimeExecutionContextDescription : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *frameId;
@property (nonatomic) int identifier;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) NSInteger type;


-(id)initWithIdentifier:(int)arg0 type:(NSInteger)arg1 name:(id)arg2 frameId:(id)arg3 ;


@end


#endif