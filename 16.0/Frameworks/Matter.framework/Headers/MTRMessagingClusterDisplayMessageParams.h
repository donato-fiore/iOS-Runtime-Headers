// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRMESSAGINGCLUSTERDISPLAYMESSAGEPARAMS_H
#define MTRMESSAGINGCLUSTERDISPLAYMESSAGEPARAMS_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface MTRMessagingClusterDisplayMessageParams : NSObject

@property (retain, nonatomic) NSNumber *durationInMinutes; // ivar: _durationInMinutes
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSNumber *messageControl; // ivar: _messageControl
@property (retain, nonatomic) NSNumber *messageId; // ivar: _messageId
@property (retain, nonatomic) NSNumber *optionalExtendedMessageControl; // ivar: _optionalExtendedMessageControl
@property (retain, nonatomic) NSNumber *startTime; // ivar: _startTime
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif