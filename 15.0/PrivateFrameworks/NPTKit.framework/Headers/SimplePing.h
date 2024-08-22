// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIMPLEPING_H
#define SIMPLEPING_H

@class NSData, NSString;
@protocol NSCopying, OS_dispatch_source, SimplePingDelegate;

#import <Foundation/Foundation.h>


@interface SimplePing : NSObject <NSCopying>

 {
    NSObject<OS_dispatch_source> *timeoutTimer;
}


@property (nonatomic) NSInteger addressStyle; // ivar: _addressStyle
@property (weak, nonatomic) NSObject<SimplePingDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) *__CFHost host; // ivar: _host
@property (copy, nonatomic) NSData *hostAddress; // ivar: _hostAddress
@property (readonly, nonatomic) unsigned char hostAddressFamily;
@property (readonly, copy, nonatomic) NSString *hostName; // ivar: _hostName
@property (readonly, nonatomic) unsigned short identifier; // ivar: _identifier
@property (nonatomic) unsigned short nextSequenceNumber; // ivar: _nextSequenceNumber
@property (nonatomic) BOOL nextSequenceNumberHasWrapped; // ivar: _nextSequenceNumberHasWrapped
@property (retain, nonatomic) *__CFSocket socket; // ivar: _socket


+(NSUInteger)icmpHeaderOffsetInIPv4Packet:(id)arg0 ;
-(BOOL)validatePing4ResponsePacket:(id)arg0 sequenceNumber:(*unsigned short)arg1 ;
-(BOOL)validatePing6ResponsePacket:(id)arg0 sequenceNumber:(*unsigned short)arg1 ;
-(BOOL)validatePingResponsePacket:(id)arg0 sequenceNumber:(*unsigned short)arg1 ;
-(BOOL)validateSequenceNumber:(unsigned short)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHostName:(id)arg0 ;
-(id)pingPacketWithType:(unsigned char)arg0 payload:(id)arg1 requiresChecksum:(BOOL)arg2 ;
-(void)dealloc;
-(void)didFailWithError:(id)arg0 ;
-(void)didFailWithHostStreamError:(struct ? )arg0 ;
-(void)readData;
-(void)sendPingWithData:(id)arg0 ;
-(void)setupTimer:(id)arg0 currentSequenceNumber:(unsigned short)arg1 ;
-(void)start;
-(void)startWithHostAddress;
-(void)stop;
-(void)stopHostResolution;
-(void)stopSocket;
-(void)timeOutHandler:(id)arg0 sequenceNumber:(unsigned short)arg1 ;


@end


#endif