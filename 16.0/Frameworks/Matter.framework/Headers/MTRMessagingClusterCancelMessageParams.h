// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRMESSAGINGCLUSTERCANCELMESSAGEPARAMS_H
#define MTRMESSAGINGCLUSTERCANCELMESSAGEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRMessagingClusterCancelMessageParams : NSObject

@property (retain, nonatomic) NSNumber *messageControl; // ivar: _messageControl
@property (retain, nonatomic) NSNumber *messageId; // ivar: _messageId
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif