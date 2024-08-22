// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIOFFSCREENRENDEROPERATION_H
#define SKUIOFFSCREENRENDEROPERATION_H

@class NSOperation, UIImage;
@protocol OS_dispatch_queue;



@interface SKUIOffscreenRenderOperation : NSOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    id *_createLayerBlock;
    UIImage *_outputImage;
}


@property (copy, nonatomic) id *createLayerBlock;
@property (readonly, nonatomic) UIImage *outputImage;


+(void)preheatOffscreenRenderOperations;
-(id)init;
-(void)main;


@end


#endif