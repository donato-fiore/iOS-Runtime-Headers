// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMESSAGEPAIR_H
#define SGMESSAGEPAIR_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface SGMessagePair : NSObject

@property (retain, nonatomic) NSString *handle; // ivar: _handle
@property (retain, nonatomic) NSString *prompt; // ivar: _prompt
@property (retain, nonatomic) NSString *reply; // ivar: _reply
@property (retain, nonatomic) NSDate *sentAt; // ivar: _sentAt


-(id)initWithReply:(id)arg0 prompt:(id)arg1 handle:(id)arg2 sentAt:(id)arg3 ;


@end


#endif