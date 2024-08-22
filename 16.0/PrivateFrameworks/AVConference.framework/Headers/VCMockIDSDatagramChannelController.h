// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCMOCKIDSDATAGRAMCHANNELCONTROLLER_H
#define VCMOCKIDSDATAGRAMCHANNELCONTROLLER_H



#import "VCObject.h"
#import "VCMockIDSDatagramChannel.h"

@interface VCMockIDSDatagramChannelController : VCObject {
    VCMockIDSDatagramChannel *_datagramChannel;
}




+(id)sharedInstance;
-(id)datagramChannelRequiresOptions:(BOOL)arg0 ;
-(id)datagramChannelRequiresOptions:(BOOL)arg0 dataPath:(int)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)setReadyToReadBlock:(id)arg0 ;
-(void)setWriteDatagramBlock:(id)arg0 ;
-(void)setWriteDatagramsBlock:(id)arg0 ;


@end


#endif