// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUACTIVITYITEMSOURCE_H
#define PUACTIVITYITEMSOURCE_H

@class PXObservable, NSDictionary, NSMutableSet, NSMutableDictionary, NSString, PHAssetExportRequest, NSURL, NSProgress, NSItemProvider, PHAsset, NSError;
@protocol PHAssetExportRequestDelegate, PUActivityItemSourceOperationDelegate, PUMutableActivityItemSource, UIActivityItemDeferredSource, UIActivityItemApplicationExtensionSource, UIActivityItemImageDataProvider, UIActivityItemSource, OS_dispatch_group, OS_dispatch_queue;


#import "PUActivityItemSourceOperation.h"
#import "PUActivityItemSourceAnchorOperation.h"
#import "PUActivityItemSourceConfiguration.h"

@interface PUActivityItemSource : PXObservable <PHAssetExportRequestDelegate, PUActivityItemSourceOperationDelegate, PUMutableActivityItemSource, UIActivityItemDeferredSource, UIActivityItemApplicationExtensionSource, UIActivityItemImageDataProvider, UIActivityItemSource>

 {
    NSDictionary *_cachedSharingVariants;
    NSObject<OS_dispatch_group> *_cachedSharingVariantsDisptachGroup;
    NSMutableSet *_onDemandExports;
    NSMutableDictionary *_sharingURLs;
    NSString *_sharingUUID;
    NSString *_assetOriginalFilenameBase;
    PUActivityItemSourceOperation *_currentOperation;
    PUActivityItemSourceAnchorOperation *_anchorOperation;
}


@property (retain, nonatomic, setter=_setAssetExportRequest:) PHAssetExportRequest *_assetExportRequest; // ivar: __assetExportRequest
@property (retain, setter=_setAssetsLibraryURL:) NSURL *_assetsLibraryURL; // ivar: __assetsLibraryURL
@property (retain, nonatomic, setter=_setExportProgress:) NSProgress *_exportProgress; // ivar: __exportProgress
@property (copy, nonatomic, setter=_setExportProgressHandler:) id *_exportProgressHandler; // ivar: __exportProgressHandler
@property (retain) NSItemProvider *_pasteboardItemProvider; // ivar: __pasteboardItemProvider
@property (retain, setter=_setPasteboardRepresentation:) NSDictionary *_pasteboardRepresentation; // ivar: __pasteboardRepresentation
@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset
@property (copy) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PUActivityItemSourceConfiguration *exportConfiguration; // ivar: _exportConfiguration
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *externalIsolation; // ivar: _externalIsolation
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSError *lastPreparationError; // ivar: _lastPreparationError
@property (copy) id *postCompletionHandler; // ivar: _postCompletionHandler
@property (copy) id *progressHandler; // ivar: _progressHandler
@property (readonly, nonatomic) ? sharingPreferences; // ivar: _sharingPreferences
@property (readonly, nonatomic) NSString *sharingUUID;
@property (nonatomic) BOOL shouldAnchorPreparation; // ivar: _shouldAnchorPreparation
@property (nonatomic) BOOL shouldSendAnalyticsInterval; // ivar: _shouldSendAnalyticsInterval
@property (nonatomic) BOOL shouldSkipPreparation; // ivar: _shouldSkipPreparation
@property (readonly, nonatomic) NSUInteger signpostId; // ivar: _signpostId
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


+(BOOL)supportsAssetLocalIdentifierForActivityType:(id)arg0 ;
+(id)_exportResultHandlingQueue;
+(id)_sharingErrorWithCode:(NSInteger)arg0 underlyingError:(id)arg1 localizedDescription:(id)arg2 additionalInfo:(id)arg3 ;
+(id)activityItemSourceLog;
+(void)_deleteOutputDirectoryURL:(id)arg0 forSharingUUID:(id)arg1 ;
-(BOOL)_copyResourceAtURL:(id)arg0 toURL:(id)arg1 shouldMove:(BOOL)arg2 ;
-(id)_activityOperationQueueForExplicitRunning;
-(id)_createManagedURLForResourceAtURL:(id)arg0 shouldMove:(BOOL)arg1 forType:(NSInteger)arg2 ;
-(id)_generateURLForType:(NSInteger)arg0 withPathExtension:(id)arg1 preferredFilename:(id)arg2 ;
-(id)_itemForActivityType:(id)arg0 ;
-(id)_newOperationForActivityType:(id)arg0 ;
-(id)_newPasteboardItemProviderForURL:(id)arg0 ;
-(id)_newPasteboardRepresentationForURL:(id)arg0 ;
-(id)_outboundResourcesDirectoryURL;
-(id)_resourceURLForType:(NSInteger)arg0 ;
-(id)_runOnDemandExportForAsset:(id)arg0 withOptions:(id)arg1 completionHandler:(id)arg2 ;
-(id)_runOnDemandSingleFileExportForAsset:(id)arg0 withOptions:(id)arg1 completionHandler:(id)arg2 ;
-(id)_sharingVariants;
-(id)_uniformTypeIdentifierForActivityType:(id)arg0 ;
-(id)activityViewController:(id)arg0 dataTypeIdentifierForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 itemForActivityType:(id)arg1 ;
-(id)activityViewController:(id)arg0 thumbnailImageDataForActivityType:(id)arg1 suggestedSize:(struct CGSize )arg2 ;
-(id)activityViewControllerApplicationExtensionItem:(id)arg0 ;
-(id)activityViewControllerOperation:(id)arg0 ;
-(id)activityViewControllerPlaceholderItem:(id)arg0 ;
-(id)initWithAsset:(id)arg0 sharingPreferences:(struct ? )arg1 ;
-(void)_beginObservingExportRequest:(id)arg0 withProgressHandler:(id)arg1 ;
// -(void)_fetchAlternateWithOptions:(id)arg0 forActivityType:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(void)_fetchImageWithOptions:(id)arg0 forActivityType:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(void)_fetchLivePhotoWithOptions:(id)arg0 forActivityType:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)_fetchSharingVariants;
// -(void)_fetchVideoWithOptions:(id)arg0 forActivityType:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(void)_runExportRequestWithOptions:(id)arg0 forActivityType:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)_setResourceURL:(id)arg0 forType:(NSInteger)arg1 ;
-(void)_stopObservingExportRequest;
-(void)activityItemSourceOperation:(id)arg0 prepareItemForActivityType:(id)arg1 ;
-(void)assetExportRequest:(id)arg0 didChangeToState:(NSUInteger)arg1 fromState:(NSUInteger)arg2 ;
-(void)cancel;
-(void)cleanUpExportedFiles;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)runWithActivityType:(id)arg0 ;
-(void)signalAnchorCompletion;


@end


#endif