// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPAVASSETRESOURCELOADERDELEGATE_H
#define TSPAVASSETRESOURCELOADERDELEGATE_H

@class NSString;
@protocol AVAssetResourceLoaderDelegate, OS_dispatch_queue, TSUReadChannel;

#import <Foundation/Foundation.h>

#import "TSPFileDataStorage.h"

@interface TSPAVAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>

 {
    TSPFileDataStorage *_dataStorage;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<TSUReadChannel> *_readChannel;
    NSObject<OS_dispatch_queue> *_concurrentRequestQueue;
    NSString *_contentTypeUTI;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)resourceLoader:(id)arg0 shouldWaitForLoadingOfRequestedResource:(id)arg1 ;
-(id)delegateQueue;
-(id)initWithTSPFileDataStorage:(id)arg0 contentTypeUTI:(id)arg1 ;
-(void)_provideData:(id)arg0 untilRequestCancelledForResourceLoadingRequest:(id)arg1 ;
-(void)dealloc;


@end


#endif