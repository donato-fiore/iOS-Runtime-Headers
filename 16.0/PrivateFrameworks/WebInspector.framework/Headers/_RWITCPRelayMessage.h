// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _RWITCPRELAYMESSAGE_H
#define _RWITCPRELAYMESSAGE_H

@class NSData;

#import <Foundation/Foundation.h>


@interface _RWITCPRelayMessage : NSObject {
    BOOL _writtenHeader;
    NSUInteger _writtenPayloadOffset;
}


@property (readonly, nonatomic) NSUInteger length;
@property (readonly, copy, nonatomic) NSData *payload; // ivar: _payload


+(id)TCPRelayMessageFromDataStream:(id)arg0 error:(*id)arg1 ;
+(id)TCPRelayMessageWithPayload:(id)arg0 ;
-(NSInteger)write:(int)arg0 ;
-(NSInteger)writeInternal:(id)arg0 ;
-(NSInteger)writeLockdown:(struct _lockdown_connection *)arg0 ;
-(id)initWithPayload:(id)arg0 ;


@end


#endif