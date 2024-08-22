// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLPTPDFORMATCONVERSIONMANAGER_H
#define PLPTPDFORMATCONVERSIONMANAGER_H

@class PFMediaCapabilities, NSMutableDictionary, NSString, PHMediaFormatConversionManager, NSURL;
@protocol PLPTPConversionSupport;

#import <Foundation/Foundation.h>


@interface PLPTPdFormatConversionManager : NSObject <PLPTPConversionSupport>

 {
    PFMediaCapabilities *_legacyCapabilities;
}


@property (retain) NSMutableDictionary *convertedLivePhotoPairingIdentifiersByOriginalIdentifiers; // ivar: _convertedLivePhotoPairingIdentifiersByOriginalIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL initialized; // ivar: _initialized
@property (retain) PHMediaFormatConversionManager *mediaFormatConversionManager; // ivar: _mediaFormatConversionManager
@property (retain) PFMediaCapabilities *peerMediaCapabilities; // ivar: _peerMediaCapabilities
@property (readonly, nonatomic) BOOL peerSupportsAdjustmentBaseResources;
@property (readonly, nonatomic) BOOL peerSupportsTranscodeChoice;
@property (readonly, nonatomic) BOOL penultimateIsPublic;
@property (readonly) Class superclass;
@property (retain) NSURL *temporaryDirectoryURL; // ivar: _temporaryDirectoryURL


-(BOOL)generatePosterFrameExportForVideoURL:(id)arg0 outputData:(*id)arg1 maximumSize:(struct CGSize )arg2 error:(*id)arg3 ;
-(BOOL)setupTemporaryDirectory;
-(id)assetReaderForFormatConvertedPTPAsset:(id)arg0 ofManagedAsset:(id)arg1 path:(id)arg2 ;
-(id)conversionResultForAsset:(id)arg0 isVideo:(BOOL)arg1 isRender:(BOOL)arg2 forceLegacyConversion:(BOOL)arg3 ;
-(id)convertedAssetLivePhotoPairingIdentifierForOriginalIdentifier:(id)arg0 ;
-(id)effectivePeerMediaCapabilites;
-(id)init;
-(id)requestForOriginalAtPath:(id)arg0 isVideo:(BOOL)arg1 imageDimensions:(struct CGSize )arg2 originalPairingIdentifier:(id)arg3 ;
-(id)requestForPath:(id)arg0 isVideo:(BOOL)arg1 imageDimensions:(struct CGSize )arg2 ;
-(id)requestForRenderImagePath:(id)arg0 imageDimensions:(struct CGSize )arg1 outputFilename:(id)arg2 ;
-(id)sourceForPath:(id)arg0 isVideo:(BOOL)arg1 imageDimensions:(struct CGSize )arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif