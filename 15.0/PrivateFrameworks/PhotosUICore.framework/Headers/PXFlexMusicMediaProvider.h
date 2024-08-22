// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXFLEXMUSICMEDIAPROVIDER_H
#define PXFLEXMUSICMEDIAPROVIDER_H

@class NSMutableDictionary, NSString;
@protocol PXAudioAssetMediaProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXFlexMusicMediaProvider : NSObject <PXAudioAssetMediaProvider>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_queue_requestByID;
    NSMutableDictionary *_queue_requestIDsByAsset;
    NSMutableDictionary *_queue_downloaderByAsset;
    uint8_t _requestIDCounter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(NSInteger)_nextRequestID;
-(NSInteger)requestMediaForAsset:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
-(id)init;
-(id)initWithQOSClass:(unsigned int)arg0 ;
-(void)_deliverResultForAsset:(id)arg0 preferredDuration:(struct ? )arg1 toHandler:(id)arg2 ;
-(void)_handleDownloaderFinishedForAsset:(id)arg0 ;
-(void)_queue_cancelRequest:(NSInteger)arg0 ;
-(void)_queue_handleDownloaderFinishedForAsset:(id)arg0 ;
-(void)_queue_startDownloadIfNeededForRequest:(id)arg0 ;
-(void)cancelRequest:(NSInteger)arg0 ;


@end


#endif