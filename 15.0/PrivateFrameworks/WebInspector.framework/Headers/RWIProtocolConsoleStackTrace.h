// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RWIPROTOCOLCONSOLESTACKTRACE_H
#define RWIPROTOCOLCONSOLESTACKTRACE_H

@class NSArray;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolConsoleStackTrace.h"

@interface RWIProtocolConsoleStackTrace : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *callFrames;
@property (retain, nonatomic) RWIProtocolConsoleStackTrace *parentStackTrace;
@property (nonatomic) BOOL topCallFrameIsBoundary;
@property (nonatomic) BOOL truncated;


-(id)initWithCallFrames:(id)arg0 ;


@end


#endif