// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APSOUTGOINGMESSAGE_H
#define APSOUTGOINGMESSAGE_H

@class NSString;


#import "APSMessage.h"

@interface APSOutgoingMessage : APSMessage

@property (nonatomic) BOOL ackReceived; // ivar: _ackReceived
@property (nonatomic) NSUInteger ackTimestamp;
@property (nonatomic, getter=isCritical) BOOL critical;
@property (nonatomic) NSUInteger payloadFormat;
@property (nonatomic) NSUInteger payloadLength;
@property (nonatomic) BOOL sendRetried;
@property (copy, nonatomic) NSString *senderTokenName;
@property (nonatomic) NSUInteger timeout;


-(BOOL)hasTimedOut;
-(BOOL)isEager;
-(BOOL)wasCancelled;
-(BOOL)wasSent;
-(NSInteger)priority;
-(NSInteger)sendInterface;
-(NSUInteger)_effectiveSendTimeout;
-(NSUInteger)messageID;
-(NSUInteger)pushType;
-(id)channelID;
-(id)eagernessTimeoutTime;
-(id)originator;
-(id)rawTimeoutTime;
-(id)sendTimeoutTime;
-(id)sentTimestamp;
-(id)timestamp;
-(unsigned int)pushFlags;
-(void)setCancelled:(BOOL)arg0 ;
-(void)setChannelID:(id)arg0 ;
-(void)setMessageID:(NSUInteger)arg0 ;
-(void)setOriginator:(id)arg0 ;
-(void)setPriority:(NSInteger)arg0 ;
-(void)setPushFlags:(unsigned int)arg0 ;
-(void)setPushType:(NSUInteger)arg0 ;
-(void)setSendInterface:(NSInteger)arg0 ;
-(void)setSent:(BOOL)arg0 ;
-(void)setSentTimestamp:(id)arg0 ;
-(void)setTimedOut:(BOOL)arg0 ;
-(void)setTimestamp:(id)arg0 ;


@end


#endif