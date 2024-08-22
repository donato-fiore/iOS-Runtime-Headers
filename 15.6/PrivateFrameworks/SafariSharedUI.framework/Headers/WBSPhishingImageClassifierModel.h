// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPHISHINGIMAGECLASSIFIERMODEL_H
#define WBSPHISHINGIMAGECLASSIFIERMODEL_H

@class VNCoreMLModel, NSURL;
@protocol WBSPhishingImageClassifierModelProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSPhishingImageClassifierModel : NSObject <WBSPhishingImageClassifierModelProtocol>

 {
    VNCoreMLModel *_model;
    NSURL *_url;
    CGSize _imageInputSize;
    NSUInteger _cropAndScaleOption;
    NSObject<OS_dispatch_queue> *_queue;
}




+(void)configureSnapshotConfiguration:(id)arg0 cropAndScaleOption:(NSUInteger)arg1 webViewBounds:(struct CGRect )arg2 modelInputSize:(struct CGSize )arg3 ;
// -(BOOL)classifyImage:(id)arg0 enumerationBlock:(id)arg1 error:(unk)arg2  ;
-(id)_createClassifierRequest;
-(id)_createClassifierRequestHandlerWithImage:(id)arg0 ;
-(id)initWithURL:(id)arg0 cropAndScaleOption:(NSUInteger)arg1 imageInputSize:(struct CGSize )arg2 error:(*id)arg3 ;
-(void)_loadModelIfNecessary;
-(void)configureSnapshotConfiguration:(id)arg0 webViewBounds:(struct CGRect )arg1 ;


@end


#endif