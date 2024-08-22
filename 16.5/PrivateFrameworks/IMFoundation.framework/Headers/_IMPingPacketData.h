// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _IMPINGPACKETDATA_H
#define _IMPINGPACKETDATA_H


#import <Foundation/Foundation.h>


@interface _IMPingPacketData : NSObject

@property (readonly, nonatomic) int error; // ivar: _error
@property (readonly, nonatomic) CGFloat rtt; // ivar: _rtt
@property (readonly, nonatomic) int sequenceNumber; // ivar: _sequenceNumber
@property (readonly, nonatomic) timeval timeSent; // ivar: _timeSent
@property (readonly, nonatomic) BOOL timedOut; // ivar: _timedOut


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSequeneceNumber:(int)arg0 timesent:(struct timeval *)arg1 error:(int)arg2 ;
-(void)_markPacketAsTimedOut:(CGFloat)arg0 ;
-(void)_returnPacketArrived;


@end


#endif