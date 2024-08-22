// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPOBJECTSERIALIZATIONENCODER_H
#define TSPOBJECTSERIALIZATIONENCODER_H

@class NSError, NSString;
@protocol TSPEncoder, OS_dispatch_queue, OS_dispatch_data;

#import <Foundation/Foundation.h>

#import "TSPMemoryComponentWriteChannel.h"

@interface TSPObjectSerializationEncoder : NSObject <TSPEncoder>

 {
    NSError *_error;
    BOOL _isFinished;
    NSObject<OS_dispatch_queue> *_accessQueue;
    ObjectSerializationDirectory _directory;
    TSPMemoryComponentWriteChannel *_metadataWriteChannel;
    TSPMemoryComponentWriteChannel *_rootComponentWriteChannel;
    NSObject<OS_dispatch_data> *_encodedData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)newMetadataComponentWriteChannel;
-(id)newRootObjectComponentWriteChannel;
-(void)appendData:(id)arg0 completion:(id)arg1 ;
-(void)finishEncodingWithCompletion:(id)arg0 ;


@end


#endif