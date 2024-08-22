// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXINLINEVIDEOSTABILIZATIONDIAGNOSTICSVIEWCONTROLLER_H
#define PXINLINEVIDEOSTABILIZATIONDIAGNOSTICSVIEWCONTROLLER_H

@class NSOperationQueue;
@protocol PXVideoStabilizeResult;


#import "PXVideoComparisonViewController.h"
#import "PXVideoStabilizeOperation.h"

@interface PXInlineVideoStabilizationDiagnosticsViewController : PXVideoComparisonViewController {
    PXVideoStabilizeOperation *_stabilizeOperation;
    PXVideoStabilizeOperation *_exportOperation;
    id<PXVideoStabilizeResult> *_result;
    NSOperationQueue *_operationQueue;
}




-(BOOL)useVariantVideoByDefaultInToggle;
-(id)_newStabilizeOperation;
-(id)extraAlertAction;
-(id)initWithInputAsset:(id)arg0 ;
-(id)inputVideoButtonsTitle;
-(id)radarComponentID;
-(id)radarComponentName;
-(id)radarComponentVersion;
-(id)radarTitle;
-(id)settings;
-(id)variantVideoButtonsTitle;
-(id)variantVideoDescription;
-(void)_exportRecipe;
-(void)_handleStabilizeOperationCompletedWithCompletionHandler:(id)arg0 ;
-(void)invalidateInputAndVariantReferences;
// -(void)prepareVariantVideoForExportWithProgress:(id)arg0 completion:(unk)arg1  ;
// -(void)prepareVariantVideoWithProgress:(id)arg0 completion:(unk)arg1  ;
-(void)viewDidLoad;


@end


#endif