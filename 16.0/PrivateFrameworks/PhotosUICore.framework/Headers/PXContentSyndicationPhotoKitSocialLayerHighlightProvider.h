// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCONTENTSYNDICATIONPHOTOKITSOCIALLAYERHIGHLIGHTPROVIDER_H
#define PXCONTENTSYNDICATIONPHOTOKITSOCIALLAYERHIGHLIGHTPROVIDER_H

@class NSMutableDictionary, NSHashTable, NSString;
@protocol PXContentSyndicationSocialLayerHighlightProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXLRUMemoryCache.h"

@interface PXContentSyndicationPhotoKitSocialLayerHighlightProvider : NSObject <PXContentSyndicationSocialLayerHighlightProvider>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_observers;
    PXLRUMemoryCache *_highlightsCache;
    NSHashTable *_assetsWithNilHighlightsCache;
    id *_highlightFetchBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)isSocialLayerHighlightCachedForAsset:(id)arg0 ;
-(id)_serialQueue_fetchSocialLayerHighlightForAsset:(id)arg0 usingHighlightResultBlock:(id)arg1 ;
-(id)cachedSocialLayerHighlightForAsset:(id)arg0 ;
-(id)init;
-(id)initWithHighlightFetchBlock:(id)arg0 ;
-(id)socialLayerHighlightForAsset:(id)arg0 ;
-(void)_didChangeHighlight:(id)arg0 forAsset:(id)arg1 withChangeObservers:(id)arg2 ;
-(void)_serialQueue_registerChangeObserver:(id)arg0 forAsset:(id)arg1 ;
-(void)_serialQueue_unregisterChangeObserver:(id)arg0 forAsset:(id)arg1 ;
-(void)fetchSocialLayerHighlightForAsset:(id)arg0 completion:(id)arg1 ;
-(void)registerChangeObserver:(id)arg0 forAsset:(id)arg1 ;
-(void)unregisterChangeObserver:(id)arg0 forAsset:(id)arg1 ;


@end


#endif