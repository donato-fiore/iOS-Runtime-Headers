// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPMEMORYENCODER_H
#define TSPMEMORYENCODER_H

@class NSString;
@protocol TSPEncoder, OS_dispatch_data;

#import <Foundation/Foundation.h>

#import "TSPMemoryComponentWriteChannel.h"

@interface TSPMemoryEncoder : NSObject <TSPEncoder>

 {
    TSPMemoryComponentWriteChannel *_metadataWriteChannel;
    TSPMemoryComponentWriteChannel *_rootComponentWriteChannel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *metadataDispatchData;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *rootObjectComponentDispatchData;
@property (readonly) Class superclass;


-(id)encodedData;
-(id)metadataData;
-(id)newMetadataComponentWriteChannel;
-(id)newRootObjectComponentWriteChannel;
-(id)rootObjectComponentData;


@end


#endif