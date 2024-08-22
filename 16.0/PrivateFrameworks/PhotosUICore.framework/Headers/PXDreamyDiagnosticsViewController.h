// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXDREAMYDIAGNOSTICSVIEWCONTROLLER_H
#define PXDREAMYDIAGNOSTICSVIEWCONTROLLER_H

@class PHAsset, NSURL;


#import "PXVideoComparisonViewController.h"

@interface PXDreamyDiagnosticsViewController : PXVideoComparisonViewController

@property (retain, nonatomic) PHAsset *variantAsset; // ivar: _variantAsset
@property (nonatomic) int variantVideoRequestID; // ivar: _variantVideoRequestID
@property (retain, nonatomic) NSURL *variantVideoURL; // ivar: _variantVideoURL


-(BOOL)useVariantVideoByDefaultInToggle;
-(id)_loadAndCacheVariantAssetWithError:(*id)arg0 ;
-(id)inputVideoButtonsTitle;
-(id)radarComponentID;
-(id)radarComponentName;
-(id)radarComponentVersion;
-(id)radarTitle;
-(id)variantVideoButtonsTitle;
-(id)variantVideoDescription;
-(void)_loadAndCacheVariantVideoURLFromAsset:(id)arg0 completion:(id)arg1 ;
-(void)invalidateInputAndVariantReferences;
// -(void)prepareVariantVideoForExportWithProgress:(id)arg0 completion:(unk)arg1  ;
// -(void)prepareVariantVideoWithProgress:(id)arg0 completion:(unk)arg1  ;
-(void)viewDidLoad;


@end


#endif