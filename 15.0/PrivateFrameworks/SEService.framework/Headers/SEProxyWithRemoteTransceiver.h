// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEPROXYWITHREMOTETRANSCEIVER_H
#define SEPROXYWITHREMOTETRANSCEIVER_H

@class STSRemoteTransceiverProxy;
@protocol SEProxyInterface;

#import <Foundation/Foundation.h>


@interface SEProxyWithRemoteTransceiver : NSObject <SEProxyInterface>

 {
    STSRemoteTransceiverProxy *_remoteTransceiver;
}




-(void)setRemoteTransceiver:(id)arg0 ;
-(void)transceive:(id)arg0 callback:(id)arg1 ;


@end


#endif