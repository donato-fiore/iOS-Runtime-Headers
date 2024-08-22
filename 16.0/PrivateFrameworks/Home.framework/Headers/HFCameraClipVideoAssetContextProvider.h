// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCAMERACLIPVIDEOASSETCONTEXTPROVIDER_H
#define HFCAMERACLIPVIDEOASSETCONTEXTPROVIDER_H

@class NSString, HMFUnfairLock, NSOperationQueue, NSMutableDictionary;
@protocol HFCameraClipVideoAssetContextProviderDelegate;

#import <Foundation/Foundation.h>


@interface HFCameraClipVideoAssetContextProvider : NSObject <HFCameraClipVideoAssetContextProviderDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HFCameraClipVideoAssetContextProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMFUnfairLock *lock; // ivar: _lock
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *videoContextFuturesByClipID; // ivar: _videoContextFuturesByClipID


+(id)defaultProvider;
-(id)cachedVideoAssetContextForClip:(id)arg0 clipManager:(id)arg1 ;
-(id)fetchVideoAssetContextForClip:(id)arg0 clipManager:(id)arg1 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)newFetchVideoAssetContextOperationForClip:(id)arg0 clipManager:(id)arg1 ;


@end


#endif