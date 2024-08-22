// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCRTCPSENDERREPORT_H
#define AVCRTCPSENDERREPORT_H



#import "AVCRTCPPacket.h"
#import "AVCRTCPReceiverReport.h"

@interface AVCRTCPSenderReport : AVCRTCPPacket

@property (nonatomic) unsigned int NTPLeastSignificantWord; // ivar: _NTPLeastSignificantWord
@property (nonatomic) unsigned int NTPMostSignificantWord; // ivar: _NTPMostSignificantWord
@property (nonatomic) unsigned int RTPTimestamp; // ivar: _RTPTimestamp
@property (nonatomic) unsigned int octetsSent; // ivar: _octetsSent
@property (nonatomic) unsigned int packetsSent; // ivar: _packetsSent
@property (retain, nonatomic) AVCRTCPReceiverReport *receiverReport; // ivar: _receiverReport


-(id)description;
-(id)initWithRTCPPacket:(struct tagRTCPPACKET *)arg0 ;
-(void)dealloc;


@end


#endif