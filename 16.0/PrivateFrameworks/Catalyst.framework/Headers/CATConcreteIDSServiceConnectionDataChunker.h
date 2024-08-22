// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATCONCRETEIDSSERVICECONNECTIONDATACHUNKER_H
#define CATCONCRETEIDSSERVICECONNECTIONDATACHUNKER_H

@protocol CATIDSServiceConnectionDataChunker, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CATConcreteIDSServiceConnectionDataChunker : NSObject <CATIDSServiceConnectionDataChunker>

 {
    NSObject<OS_dispatch_queue> *mWorkQueue;
    NSInteger mMaxDataLength;
    NSUInteger mNextDataNumber;
    NSUInteger mNextSequenceNumber;
}




-(id)chunkDataIntoMessageContent:(id)arg0 ;
-(id)initWithWorkQueue:(id)arg0 maxDataLength:(NSInteger)arg1 ;


@end


#endif