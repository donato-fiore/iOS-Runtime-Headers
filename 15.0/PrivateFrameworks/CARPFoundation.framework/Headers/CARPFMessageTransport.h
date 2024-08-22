// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPFMESSAGETRANSPORT_H
#define CARPFMESSAGETRANSPORT_H

@protocol CARPFMessageTransportDelegate;


#import "CARPFObject.h"

@interface CARPFMessageTransport : CARPFObject

@property (weak) NSObject<CARPFMessageTransportDelegate> *delegate; // ivar: _delegate


-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif