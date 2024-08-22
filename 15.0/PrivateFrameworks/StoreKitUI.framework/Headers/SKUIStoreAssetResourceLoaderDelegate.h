// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISTOREASSETRESOURCELOADERDELEGATE_H
#define SKUISTOREASSETRESOURCELOADERDELEGATE_H

@class NSURL, NSOperationQueue, NSString;
@protocol AVAssetResourceLoaderDelegate;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"

@interface SKUIStoreAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>

 {
    BOOL _isITunesStream;
    NSURL *_keyCertificateURL;
    NSURL *_keyServerURL;
    NSOperationQueue *_operationQueue;
    BOOL _shouldUseITunesStoreSecureKeyDelivery;
}


@property (readonly, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)storeAssetResourceLoaderDelegateForPlayableAsset:(id)arg0 clientContext:(id)arg1 ;
-(BOOL)resourceLoader:(id)arg0 shouldWaitForLoadingOfRequestedResource:(id)arg1 ;


@end


#endif