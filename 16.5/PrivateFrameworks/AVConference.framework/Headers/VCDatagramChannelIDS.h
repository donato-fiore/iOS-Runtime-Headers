// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCDATAGRAMCHANNELIDS_H
#define VCDATAGRAMCHANNELIDS_H

@class IDSDatagramChannel, NSArray, IDSDataChannelLinkContext, NSString;


#import "VCObject.h"

@interface VCDatagramChannelIDS : VCObject {
    IDSDatagramChannel *_idsChannel;
    int _vtpSocket;
    id *_eventHandler;
}


@property (readonly) NSArray *connectedLinks;
@property (readonly) int dataPath; // ivar: _dataPath
@property (readonly) IDSDataChannelLinkContext *defaultLink;
@property (readonly) NSString *destination; // ivar: _destination
@property (readonly) unsigned int token; // ivar: _token


-(?)writeDatagrams:(?)arg0 datagramsSize:(?)arg1 datagramsInfo:(?)arg2 datagramsCount:(?)arg3 optionscompletionHandler;
-(id)VTPConnectionContext;
-(id)datagramChannelOptions;
-(id)datagramChannelWithDestination:(id)arg0 error:(*id)arg1 ;
-(id)initWithDestination:(id)arg0 token:(unsigned int)arg1 dataPath:(int)arg2 error:(*id)arg3 ;
-(id)initWithSocketDescriptor:(int)arg0 token:(unsigned int)arg1 error:(*id)arg2 ;
-(id)sharedIDSService;
-(int)setupVTPSocketWithFileDescriptor:(int)arg0 ;
-(int)start;
-(void)dealloc;
-(void)flushLinkProbingStatusWithOptions:(id)arg0 ;
-(void)invalidate;
-(void)optInStreamIDs:(id)arg0 ;
-(void)optOutStreamIDs:(id)arg0 ;
-(void)osChannelInfoLog;
-(void)queryProbingResultsWithOptions:(id)arg0 ;
-(void)readyToRead;
-(void)requestSessionInfoWithOptions:(id)arg0 ;
-(void)setChannelPreferences:(id)arg0 ;
-(void)setEventHandler:(id)arg0 ;
-(void)setOneToOneModeEnabled:(BOOL)arg0 isInitiator:(BOOL)arg1 ;
-(void)setReadHandler:(id)arg0 ;
-(void)setWiFiAssist:(BOOL)arg0 ;
-(void)setWriteCompletionHandler:(id)arg0 ;
-(void)startActiveProbingWithOptions:(id)arg0 ;
-(void)startMKMRecoveryForParticipantIDs:(id)arg0 ;
-(void)stopActiveProbingWithOptions:(id)arg0 ;
-(void)writeDatagram:(*void)arg0 datagramSize:(unsigned int)arg1 datagramInfo:(struct ? )arg2 options:(struct ? *)arg3 completionHandler:(id)arg4 ;


@end


#endif