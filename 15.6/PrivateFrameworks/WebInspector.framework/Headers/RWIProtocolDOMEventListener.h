// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLDOMEVENTLISTENER_H
#define RWIPROTOCOLDOMEVENTLISTENER_H

@class NSString;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolDebuggerLocation.h"

@interface RWIProtocolDOMEventListener : RWIProtocolJSONObject

@property (nonatomic) BOOL disabled;
@property (nonatomic) int eventListenerId;
@property (copy, nonatomic) NSString *handlerName;
@property (nonatomic) BOOL hasBreakpoint;
@property (nonatomic) BOOL isAttribute;
@property (retain, nonatomic) RWIProtocolDebuggerLocation *location;
@property (nonatomic) int nodeId;
@property (nonatomic) BOOL onWindow;
@property (nonatomic) BOOL once;
@property (nonatomic) BOOL passive;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL useCapture;


-(id)initWithEventListenerId:(int)arg0 type:(id)arg1 useCapture:(BOOL)arg2 isAttribute:(BOOL)arg3 ;


@end


#endif