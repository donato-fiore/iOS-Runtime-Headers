// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCCONTROLCHANNELFACETIME_H
#define VCCONTROLCHANNELFACETIME_H



#import "VCControlChannel.h"

@interface VCControlChannelFaceTime : VCControlChannel {
    unsigned int _callID;
    *tagHANDLE _SIPHandle;
}




-(BOOL)sendReliableMessageAndWait:(id)arg0 withTopic:(id)arg1 ;
-(id)initWithCallID:(unsigned int)arg0 reportingAgent:(struct opaqueRTCReporting *)arg1 ;
-(void)dealloc;
-(void)sendReliableMessage:(id)arg0 withTopic:(id)arg1 ;


@end


#endif