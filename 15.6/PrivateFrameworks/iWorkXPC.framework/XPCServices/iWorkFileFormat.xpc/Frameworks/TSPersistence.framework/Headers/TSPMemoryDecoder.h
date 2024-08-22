// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPMEMORYDECODER_H
#define TSPMEMORYDECODER_H

@class NSString;
@protocol TSPDecoder, TSPMemoryDecoderDelegate, OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface TSPMemoryDecoder : NSObject <TSPDecoder>

 {
    id<TSPMemoryDecoderDelegate> *_delegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *metadataDispatchData; // ivar: _metadataDispatchData
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *rootObjectComponentDispatchData; // ivar: _rootObjectComponentDispatchData
@property (readonly) Class superclass;


-(id)init;
-(id)initWithEncodedData:(id)arg0 delegate:(id)arg1 ;
-(id)initWithMetadataDispatchData:(id)arg0 rootObjectComponentDispatchData:(id)arg1 delegate:(id)arg2 ;
-(id)newReadChannelForDataWithIdentifier:(NSInteger)arg0 info:(id)arg1 ;
-(id)newReadChannelForMetadata;
-(id)newReadChannelForRootObjectComponent;


@end


#endif