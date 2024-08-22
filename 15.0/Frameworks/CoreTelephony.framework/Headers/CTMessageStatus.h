// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTMESSAGESTATUS_H
#define CTMESSAGESTATUS_H


#import <Foundation/Foundation.h>


@interface CTMessageStatus : NSObject

@property (readonly) unsigned int messageId; // ivar: _messageId
@property (readonly) int messageType; // ivar: _messageType
@property (readonly) int result; // ivar: _result


-(id)initWithMessageId:(unsigned int)arg0 messageType:(int)arg1 result:(int)arg2 ;


@end


#endif