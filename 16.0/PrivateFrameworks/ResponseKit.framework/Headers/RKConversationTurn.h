// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RKCONVERSATIONTURN_H
#define RKCONVERSATIONTURN_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface RKConversationTurn : NSObject

@property (readonly) NSString *senderId; // ivar: _senderId
@property (readonly) NSString *text; // ivar: _text
@property (readonly) NSDate *timestamp; // ivar: _timestamp


-(id)initWithString:(id)arg0 senderID:(id)arg1 timestamp:(id)arg2 ;


@end


#endif