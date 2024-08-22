// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASMEETINGRESPONSESINGULARRESPONSE_H
#define ASMEETINGRESPONSESINGULARRESPONSE_H

@class NSString, NSNumber;


#import "ASItem.h"

@interface ASMeetingResponseSingularResponse : ASItem

@property (retain, nonatomic) NSString *eventId; // ivar: _eventId
@property (retain, nonatomic) NSString *instanceId; // ivar: _instanceId
@property (retain, nonatomic) NSString *requestId; // ivar: _requestId
@property (retain, nonatomic) NSNumber *status; // ivar: _status


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)description;


@end


#endif