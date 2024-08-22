// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLCONSOLECALLFRAME_H
#define RWIPROTOCOLCONSOLECALLFRAME_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolConsoleCallFrame : RWIProtocolJSONObject

@property (nonatomic) int columnNumber;
@property (copy, nonatomic) NSString *functionName;
@property (nonatomic) int lineNumber;
@property (copy, nonatomic) NSString *scriptId;
@property (copy, nonatomic) NSString *url;


-(id)initWithFunctionName:(id)arg0 url:(id)arg1 scriptId:(id)arg2 lineNumber:(int)arg3 columnNumber:(int)arg4 ;


@end


#endif