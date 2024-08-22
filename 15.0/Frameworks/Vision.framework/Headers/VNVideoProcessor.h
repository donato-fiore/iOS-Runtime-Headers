// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNVIDEOPROCESSOR_H
#define VNVIDEOPROCESSOR_H

@class VCPVideoProcessor;

#import <Foundation/Foundation.h>


@interface VNVideoProcessor : NSObject {
    VCPVideoProcessor *_videoProcessor;
}




-(BOOL)addRequest:(id)arg0 processingOptions:(id)arg1 error:(*id)arg2 ;
-(BOOL)addRequest:(id)arg0 withProcessingOptions:(id)arg1 error:(*id)arg2 ;
-(BOOL)analyzeTimeRange:(struct ? )arg0 error:(*id)arg1 ;
-(BOOL)analyzeWithTimeRange:(struct ? )arg0 error:(*id)arg1 ;
-(BOOL)removeRequest:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(void)cancel;


@end


#endif