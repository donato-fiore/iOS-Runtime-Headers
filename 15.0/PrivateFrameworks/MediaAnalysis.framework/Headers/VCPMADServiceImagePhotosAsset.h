// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPMADSERVICEIMAGEPHOTOSASSET_H
#define VCPMADSERVICEIMAGEPHOTOSASSET_H

@class PHAsset, NSArray, NSNumber, NSData;


#import "VCPMADServiceImageAsset.h"

@interface VCPMADServiceImagePhotosAsset : VCPMADServiceImageAsset {
    PHAsset *_asset;
    NSArray *_resources;
    CF<__CVBuffer *> _pixelBuffer;
    unsigned int _orientation;
    NSArray *_documentObservations;
    NSArray *_barcodeObservations;
    NSNumber *_hasCachedParseData;
    NSData *_cachedParseData;
}




-(?)loadPixelBufferorientation;
-(BOOL)hasCachedParseData;
-(BOOL)isScreenshot;
-(id)asset;
-(id)barcodeObservations;
-(id)cachedParseData;
-(id)documentObservations;
-(id)faces;
-(id)identifier;
-(id)initWithPhotosAsset:(id)arg0 clientBundleID:(id)arg1 clientTeamID:(id)arg2 ;
-(id)initWithPhotosAsset:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 orientation:(unsigned int)arg2 clientBundleID:(id)arg3 clientTeamID:(id)arg4 ;
-(id)location;
-(id)nsfwClassifications;
-(id)resources;
-(id)thumbnailResource;
-(void)persistOCRMRC;
-(void)setBarcodeObservations:(id)arg0 ;
-(void)setCachedParseData:(id)arg0 ;
-(void)setDocumentObservations:(id)arg0 ;


@end


#endif