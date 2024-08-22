// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASYNCHRONOUSVIDEOCOMPOSITIONREQUESTINTERNAL_H
#define AVASYNCHRONOUSVIDEOCOMPOSITIONREQUESTINTERNAL_H

@class NSDictionary, NSArray;
@protocol AVVideoCompositionInstruction;

#import <Foundation/Foundation.h>

#import "AVVideoCompositionRenderContext.h"
#import "AVWeakReference.h"

@interface AVAsynchronousVideoCompositionRequestInternal : NSObject

@property (nonatomic) *OpaqueFigVideoCompositorFrame compositionFrame; // ivar: _compositionFrame
@property (nonatomic) ? compositionTime; // ivar: _compositionTime
@property (retain, nonatomic) NSObject<AVVideoCompositionInstruction> *instruction; // ivar: _instruction
@property (nonatomic) BOOL isFinished; // ivar: _isFinished
@property (retain, nonatomic) AVVideoCompositionRenderContext *renderContext; // ivar: _renderContext
@property (retain, nonatomic) NSDictionary *sampleBufferSourcesByTrackID; // ivar: _sampleBufferSourcesByTrackID
@property (retain, nonatomic) AVWeakReference *session; // ivar: _session
@property (retain, nonatomic) NSArray *sourceSampleBufferTrackIDsInClientOrder; // ivar: _sourceSampleBufferTrackIDsInClientOrder
@property (retain, nonatomic) NSArray *sourceTrackIDsInClientOrder; // ivar: _sourceTrackIDsInClientOrder
@property (retain, nonatomic) NSDictionary *sourcesByTrackID; // ivar: _sourcesByTrackID


-(void)dealloc;


@end


#endif