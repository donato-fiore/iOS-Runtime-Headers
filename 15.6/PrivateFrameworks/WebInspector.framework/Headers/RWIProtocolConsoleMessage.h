// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLCONSOLEMESSAGE_H
#define RWIPROTOCOLCONSOLEMESSAGE_H

@class NSString, NSArray;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolConsoleMessage : RWIProtocolJSONObject

@property (nonatomic) int column;
@property (nonatomic) NSInteger level;
@property (nonatomic) int line;
@property (copy, nonatomic) NSString *networkRequestId;
@property (copy, nonatomic) NSArray *parameters;
@property (nonatomic) int repeatCount;
@property (nonatomic) NSInteger source;
@property (copy, nonatomic) NSArray *stackTrace;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger type;
@property (copy, nonatomic) NSString *url;


-(id)initWithSource:(NSInteger)arg0 level:(NSInteger)arg1 text:(id)arg2 ;


@end


#endif