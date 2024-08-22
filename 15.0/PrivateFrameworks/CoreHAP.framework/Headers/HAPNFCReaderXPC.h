// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPNFCREADERXPC_H
#define HAPNFCREADERXPC_H

@class HMFObject, NSString;
@protocol OS_xpc_object, HAPNFCReaderStream, OS_dispatch_queue;



@interface HAPNFCReaderXPC : HMFObject

@property (retain) NSObject<OS_xpc_object> *event; // ivar: _event
@property (retain) NSObject<HAPNFCReaderStream> *readerStream; // ivar: _readerStream
@property NSUInteger source; // ivar: _source
@property (retain) NSString *stream; // ivar: _stream
@property (readonly, nonatomic) BOOL supportsBackgroundReading; // ivar: _supportsBackgroundReading
@property (retain) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)initReaderWithStream:(id)arg0 fromSource:(NSUInteger)arg1 workQueue:(id)arg2 readerStream:(id)arg3 ;
-(void)beginSession;


@end


#endif