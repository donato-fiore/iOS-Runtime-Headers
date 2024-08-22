// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCDATAGRAMCHANNELIDSEMULATED_H
#define VCDATAGRAMCHANNELIDSEMULATED_H



#import "VCDatagramChannelIDS.h"
#import "VCEmulatedNetwork.h"

@interface VCDatagramChannelIDSEmulated : VCDatagramChannelIDS {
    NSInteger _mode;
    VCDatagramChannelIDS *_idsChannel;
    VCEmulatedNetwork *_network;
    *tagVCMemoryPool _datagramMetaDataPool;
    int _packetCount;
    BOOL _isStarted;
}




-(?)writeDatagrams:(?)arg0 datagramsSize:(?)arg1 datagramsInfo:(?)arg2 datagramsCount:(?)arg3 optionscompletionHandler;
-(BOOL)writeToEmulatedNetworkWithDatagram:(*void)arg0 datagramSize:(unsigned int)arg1 datagramInfo:(struct ? )arg2 options:(struct ? *)arg3 ;
-(id)connectedLinks;
-(id)defaultLink;
-(id)destination;
-(id)initWithIDSDatagramChannel:(id)arg0 mode:(NSInteger)arg1 ;
-(int)start;
-(unsigned int)token;
-(void)dealloc;
-(void)invalidate;
-(void)optInStreamIDs:(id)arg0 ;
-(void)optOutStreamIDs:(id)arg0 ;
-(void)osChannelInfoLog;
-(void)readyToRead;
-(void)requestSessionInfoWithOptions:(id)arg0 ;
-(void)setChannelPreferences:(id)arg0 ;
-(void)setEventHandler:(id)arg0 ;
-(void)setReadHandler:(id)arg0 ;
-(void)setWiFiAssist:(BOOL)arg0 ;
-(void)setupEmulatedNetwork;
-(void)writeDatagram:(*void)arg0 datagramSize:(unsigned int)arg1 datagramInfo:(struct ? )arg2 options:(struct ? *)arg3 completionHandler:(id)arg4 ;


@end


#endif