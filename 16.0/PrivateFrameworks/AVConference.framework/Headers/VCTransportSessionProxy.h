// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCTRANSPORTSESSIONPROXY_H
#define VCTRANSPORTSESSIONPROXY_H



#import "VCTransportSession.h"

@interface VCTransportSessionProxy : VCTransportSession {
    unsigned int _transportSessionID;
}




-(BOOL)isIPv6;
-(id)initWithTransportSessionID:(unsigned int)arg0 ;
-(int)createVFD:(*int)arg0 forStreamType:(unsigned int)arg1 ;
-(int)networkInterfaceType;
-(unsigned int)networkMTU;
-(void)start;


@end


#endif