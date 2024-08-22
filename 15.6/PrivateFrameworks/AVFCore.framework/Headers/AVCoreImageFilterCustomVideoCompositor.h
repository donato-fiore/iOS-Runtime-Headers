// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCOREIMAGEFILTERCUSTOMVIDEOCOMPOSITOR_H
#define AVCOREIMAGEFILTERCUSTOMVIDEOCOMPOSITOR_H

@class CIContext, NSString, NSDictionary;
@protocol AVVideoCompositing, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface AVCoreImageFilterCustomVideoCompositor : NSObject <AVVideoCompositing>

 {
    NSObject<OS_dispatch_queue> *_defaultCIContextThreadSafety;
    CIContext *_defaultCIContext;
}


@property (readonly, nonatomic) BOOL canConformColorOfSourceFrames;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<OS_dispatch_group> *filteringRequestsInFlight; // ivar: _filteringRequestsInFlight
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property BOOL shouldCancelAllRequests; // ivar: _shouldCancelAllRequests
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsHDRSourceFrames;
@property (readonly, nonatomic) BOOL supportsWideColorSourceFrames;


+(void)initialize;
-(id)defaultCIContext;
-(id)init;
-(void)_willDeallocOrFinalize;
-(void)cancelAllPendingVideoCompositionRequests;
-(void)dealloc;
-(void)renderContextChanged:(id)arg0 ;
-(void)startVideoCompositionRequest:(id)arg0 ;


@end


#endif