// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCENESEGMENTATIONDATA_H
#define SISCENESEGMENTATIONDATA_H

@class NSString;
@protocol SIData;

#import <Foundation/Foundation.h>


@interface SISceneSegmentationData : NSObject <SIData>



@property (readonly) *__CVBuffer confidence; // ivar: _confidence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CGSize resolution; // ivar: _resolution
@property (readonly) *__CVBuffer semantic; // ivar: _semantic
@property (readonly) Class superclass;
@property (readonly) *__CVBuffer uncertainty; // ivar: _uncertainty


-(id)initWithOutputResolution:(struct CGSize )arg0 ;
-(id)initWithOutputSemanticBuffer:(struct __CVBuffer *)arg0 confidenceBuffer:(struct __CVBuffer *)arg1 uncertaintyBuffer:(struct __CVBuffer *)arg2 ;
-(void)dealloc;


@end


#endif