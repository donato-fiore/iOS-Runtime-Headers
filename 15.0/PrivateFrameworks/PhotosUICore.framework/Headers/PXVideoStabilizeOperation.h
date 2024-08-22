// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXVIDEOSTABILIZEOPERATION_H
#define PXVIDEOSTABILIZEOPERATION_H

@class PLPhotoEditRenderer, PIVideoStabilizeRequest, NUImagePropertiesRequest;
@protocol PXVideoStabilizeResult;


#import "PXVideoProcessingOperation.h"
#import "PXVideoStabilizeOperationSpec.h"

@interface PXVideoStabilizeOperation : PXVideoProcessingOperation {
    PLPhotoEditRenderer *_renderer;
    PIVideoStabilizeRequest *_stabilizeRequest;
    NUImagePropertiesRequest *_imagePropertiesRequest;
}


@property (readonly, nonatomic) NSObject<PXVideoStabilizeResult> *result;
@property (readonly, nonatomic) PXVideoStabilizeOperationSpec *spec;


-(id)initWithSpec:(id)arg0 ;
-(id)performProcessing;
-(void)cancel;


@end


#endif