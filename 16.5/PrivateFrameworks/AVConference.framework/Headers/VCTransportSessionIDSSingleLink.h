// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCTRANSPORTSESSIONIDSSINGLELINK_H
#define VCTRANSPORTSESSIONIDSSINGLELINK_H



#import "VCTransportSessionIDS.h"

@interface VCTransportSessionIDSSingleLink : VCTransportSessionIDS



-(id)initWithNotificationQueue:(id)arg0 reportingAgent:(struct opaqueRTCReporting *)arg1 ;
-(int)createVFD:(*int)arg0 forStreamType:(unsigned int)arg1 ;
-(int)onStart;
-(int)updateTransportStream:(struct OpaqueVCTransportStream *)arg0 ;
-(void)handleLinkConnectedWithInfo:(id)arg0 ;
-(void)handleLinkDisconnectedWithInfo:(id)arg0 ;


@end


#endif