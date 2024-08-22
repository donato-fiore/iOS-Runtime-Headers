// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMOCKIDSDATAGRAMCHANNELSOCKET_H
#define VCMOCKIDSDATAGRAMCHANNELSOCKET_H



#import "VCMockIDSDatagramChannel.h"

@interface VCMockIDSDatagramChannelSocket : VCMockIDSDatagramChannel {
    sockaddr_in _remoteAddress;
    sockaddr_in _localAddress;
}




-(?)writeDatagrams:(?)arg0 datagramsSize:(?)arg1 datagramsInfo:(?)arg2 datagramsCount:(?)arg3 optionscompletionHandler;
-(id)initRequiresOptions:(BOOL)arg0 localIP:(id)arg1 localPort:(short)arg2 remoteIP:(id)arg3 remotePort:(short)arg4 ;
-(int)readyToRead;
-(void)dealloc;
-(void)setAllSubscribedStreamIDsOnOptions:(struct ? *)arg0 ;
-(void)setIsHopByHopEncryptedOnOptions:(struct ? *)arg0 ;
-(void)writeDatagram:(*void)arg0 datagramSize:(unsigned int)arg1 ;
-(void)writeDatagram:(*void)arg0 datagramSize:(unsigned int)arg1 datagramInfo:(struct ? )arg2 options:(struct ? *)arg3 completionHandler:(id)arg4 ;
-(void)writeDatagram:(*void)arg0 datagramSize:(unsigned int)arg1 flags:(struct ? )arg2 completionHandler:(id)arg3 ;


@end


#endif