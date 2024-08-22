// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFLIPFULLSIZERENDEREDITOPERATIONPERFORMER_H
#define PXFLIPFULLSIZERENDEREDITOPERATIONPERFORMER_H



#import "PXAssetEditOperationPerformer.h"

@interface PXFlipFullSizeRenderEditOperationPerformer : PXAssetEditOperationPerformer



+(void)_flipFullSizeRenderOnAsset:(id)arg0 input:(id)arg1 output:(id)arg2 completionHandler:(id)arg3 ;
+(void)performFlipFullSizeRenderEditOperationOnAsset:(id)arg0 completionHandler:(id)arg1 ;
-(void)executeWithUndoManager:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif