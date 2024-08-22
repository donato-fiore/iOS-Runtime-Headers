// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPVIDEOPROCESSOR_H
#define VCPVIDEOPROCESSOR_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "VCPVideoProcessorSession.h"

@interface VCPVideoProcessor : NSObject {
    NSURL *_url;
    VCPVideoProcessorSession *_session;
    atomic<bool> _canceled;
}


@property (copy) id *progressHandler; // ivar: _progressHandler


-(BOOL)_analyzeWithStart:(struct ? )arg0 andDuration:(struct ? )arg1 error:(*id)arg2 ;
-(BOOL)addRequest:(id)arg0 withConfiguration:(id)arg1 error:(*id)arg2 ;
-(BOOL)analyzeWithStart:(struct ? )arg0 andDuration:(struct ? )arg1 error:(*id)arg2 ;
-(BOOL)removeRequest:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(void)cancel;


@end


#endif