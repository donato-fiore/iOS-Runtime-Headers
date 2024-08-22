// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASSETRESOURCEMANAGER_H
#define PHASSETRESOURCEMANAGER_H

@class NSMutableDictionary, NSString;
@protocol PHAssetResourceRequestDelegate;

#import <Foundation/Foundation.h>


@interface PHAssetResourceManager : NSObject <PHAssetResourceRequestDelegate>

 {
    uint8_t _nextRequestID;
    NSMutableDictionary *_requestsByID;
    os_unfair_lock_s _lock;
    NSUInteger _managerID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)_nextManagerID;
+(id)defaultManager;
-(id)consolidateAssets:(id)arg0 completionHandler:(id)arg1 ;
-(id)infoForRequest:(int)arg0 ;
-(id)init;
// -(id)reconnectAssets:(id)arg0 urlResolvingHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(int)_nextRequestID;
// -(int)_requestForAssetResource:(id)arg0 loadURLOnly:(BOOL)arg1 options:(id)arg2 urlReceivedHandler:(id)arg3 dataReceivedHandler:(unk)arg4 completionHandler:(id)arg5  ;
// -(int)requestDataForAssetResource:(id)arg0 options:(id)arg1 dataReceivedHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(int)requestFileURLForAssetResource:(id)arg0 options:(id)arg1 urlReceivedHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(int)requestWriteDataForAssetResource:(id)arg0 toFile:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(void)_autoResolveReferencedResources:(id)arg0 folderURL:(id)arg1 resourceClient:(id)arg2 ;
-(void)assetResourceRequest:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)cancelDataRequest:(int)arg0 ;
-(void)writeDataForAssetResource:(id)arg0 toFile:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif