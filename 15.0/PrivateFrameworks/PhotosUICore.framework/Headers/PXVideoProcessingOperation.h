// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXVIDEOPROCESSINGOPERATION_H
#define PXVIDEOPROCESSINGOPERATION_H

@class NSOperation;
@protocol PXVideoProcessingOperationResult;


#import "PXVideoProcessingOperationSpec.h"

@interface PXVideoProcessingOperation : NSOperation

@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (readonly, nonatomic) NSObject<PXVideoProcessingOperationResult> *result; // ivar: _result
@property (readonly, nonatomic) PXVideoProcessingOperationSpec *spec; // ivar: _spec


+(id)new;
-(id)init;
-(id)initWithSpec:(id)arg0 ;
-(id)performProcessing;
-(void)main;


@end


#endif