// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRREADER_H
#define SPRREADER_H

@protocol OS_dispatch_queue;


#import "SPRObject.h"

@interface SPRReader : SPRObject {
    NSObject<OS_dispatch_queue> *_relayQueue;
}




-(BOOL)cancelReadAndReturnError:(*id)arg0 ;
-(BOOL)cancelReadWithCallback:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateWithReadParameters:(id)arg0 error:(*id)arg1 ;
-(id)generateSecureReaderBlobWithTrxBlob:(id)arg0 pinBlob:(id)arg1 error:(*id)arg2 ;
-(id)getCardReaderBlobWithTxnBlob:(id)arg0 ;
-(id)initWithConnector:(id)arg0 ;
-(void)cancelReadWithCallback:(id)arg0 ;
-(void)readCardWithParameter:(id)arg0 callback:(id)arg1 ;
-(void)readCardWithParameter:(id)arg0 delegate:(id)arg1 completion:(id)arg2 ;


@end


#endif