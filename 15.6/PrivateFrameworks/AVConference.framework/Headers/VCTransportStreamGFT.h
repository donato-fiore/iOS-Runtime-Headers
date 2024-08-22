// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCTRANSPORTSTREAMGFT_H
#define VCTRANSPORTSTREAMGFT_H


#import <Foundation/Foundation.h>


@interface VCTransportStreamGFT : NSObject {
    unsigned int _transportSessionID;
    int _vtpReceiveSocket;
    int _vtpCancelSocket;
    id *_callback;
    *void _callbackContext;
    int _vtpCallbackId;
    fd_set _readFDsForCallback;
}


@property (nonatomic) *tagVCMediaQueue mediaQueue; // ivar: _mediaQueue


-(id)initWithTransportSessionID:(unsigned int)arg0 options:(id)arg1 ;
-(int)VCTransportStreamSendPacket:(struct ? *)arg0 ;
-(int)receivePacket:(struct ? *)arg0 ;
-(int)registerPacketCallbackContext:(*void)arg0 callback:(id)arg1 ;
-(int)unregisterPacketCallback;
-(void)VCTransportStreamUnblock;
-(void)dealloc;
-(void)processVTPPacket:(struct _VTPPacket *)arg0 ;


@end


#endif