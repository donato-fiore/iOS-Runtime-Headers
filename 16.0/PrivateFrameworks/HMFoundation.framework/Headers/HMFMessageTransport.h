// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFMESSAGETRANSPORT_H
#define HMFMESSAGETRANSPORT_H

@protocol HMFMessageTransportDelegate;


#import "HMFObject.h"

@interface HMFMessageTransport : HMFObject

@property (weak) NSObject<HMFMessageTransportDelegate> *delegate; // ivar: _delegate


-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif