// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ESPRESSODATAFRAMEEXECUTOR_H
#define ESPRESSODATAFRAMEEXECUTOR_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface EspressoDataFrameExecutor : NSObject {
    vector<void *, std::allocator<void *>> pointers_to_free;
    vector<__CVBuffer *, std::allocator<__CVBuffer *>> pixelbuffers_to_release;
}


@property (retain) NSArray *outputMatchingBuffers; // ivar: _outputMatchingBuffers
@property (nonatomic) int use_cvpixelbuffer; // ivar: _use_cvpixelbuffer


-(BOOL)useCVPixelBuffers;
-(BOOL)useCVPixelBuffersForOutputs:(BOOL)arg0 ;
-(int)bindInput:(id)arg0 fromImageAttachment:(id)arg1 toNetwork:(struct ? )arg2 ;
-(int)bindInput:(id)arg0 fromTensorAttachment:(id)arg1 toNetwork:(struct ? )arg2 ;
-(int)bindInputsFromFrame:(id)arg0 toNetwork:(struct ? )arg1 ;
-(int)bindOutputsFromFrame:(id)arg0 toNetwork:(struct ? )arg1 ;
-(int)bindOutputsFromFrame:(id)arg0 toNetwork:(struct ? )arg1 executionStatus:(int)arg2 ;
-(int)bindOutputsFromFrame:(id)arg0 toNetwork:(struct ? )arg1 referenceNetwork:(struct ? )arg2 ;
-(void)dealloc;
-(void)freeTemporaryResources;


@end


#endif