// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATIDSSERVICECONNECTIONMESSAGEPROCESSOR_H
#define CATIDSSERVICECONNECTIONMESSAGEPROCESSOR_H

@class NSUUID;
@protocol OS_dispatch_queue, CATIDSServiceConnectionMessageProcessorDelegate;

#import <Foundation/Foundation.h>


@interface CATIDSServiceConnectionMessageProcessor : NSObject {
    NSObject<OS_dispatch_queue> *mWorkQueue;
    NSUUID *mConnectionIdentifier;
}


@property (weak, nonatomic) NSObject<CATIDSServiceConnectionMessageProcessorDelegate> *delegate; // ivar: _delegate


-(id)initWithWorkQueue:(id)arg0 connectionIdentifier:(id)arg1 ;
-(void)receiveMessage:(id)arg0 ;


@end


#endif