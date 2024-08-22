// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCRTCPRECEIVERREPORT_H
#define AVCRTCPRECEIVERREPORT_H



#import "AVCRTCPPacket.h"

@interface AVCRTCPReceiverReport : AVCRTCPPacket

@property (nonatomic) unsigned int cumulativePacketsLost; // ivar: _cumulativePacketsLost
@property (nonatomic) unsigned int delaySinceLastSR; // ivar: _delaySinceLastSR
@property (nonatomic) unsigned int extendedHighestSequenceNumber; // ivar: _extendedHighestSequenceNumber
@property (nonatomic) unsigned char fractionLost; // ivar: _fractionLost
@property (nonatomic) unsigned int interarrivalJitter; // ivar: _interarrivalJitter
@property (nonatomic) unsigned int lastSRTimestamp; // ivar: _lastSRTimestamp
@property (nonatomic) unsigned int reportedSourceSSRC; // ivar: _reportedSourceSSRC


-(id)description;
-(id)initWithRTCPPacket:(struct tagRTCPPACKET *)arg0 ;


@end


#endif