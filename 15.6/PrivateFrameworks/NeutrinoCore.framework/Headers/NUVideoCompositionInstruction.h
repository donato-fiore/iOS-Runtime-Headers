// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUVIDEOCOMPOSITIONINSTRUCTION_H
#define NUVIDEOCOMPOSITIONINSTRUCTION_H

@class NSMutableDictionary, NSString, NSArray;
@protocol AVVideoCompositionInstruction, NSCopying;

#import <Foundation/Foundation.h>

#import "NUComposition.h"
#import "NUColorSpace.h"
#import "NURenderContext.h"
#import "NURenderJob.h"
#import "NURenderNode.h"

@interface NUVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction, NSCopying>

 {
    NSMutableDictionary *_sourceIdentifiersByTrackID;
    NSMutableDictionary *_sourceIdentifiersByMetadataTrackID;
}


@property (retain, nonatomic) NUComposition *adjustmentComposition; // ivar: _adjustmentComposition
@property (retain, nonatomic) NUColorSpace *colorSpace; // ivar: _colorSpace
@property (readonly, nonatomic) BOOL containsTweening;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enablePostProcessing;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) int passthroughTrackID;
@property (retain, nonatomic) NSArray *pipelineFilters; // ivar: _pipelineFilters
@property (retain) NURenderContext *renderContext; // ivar: _renderContext
@property (weak, nonatomic) NURenderJob *renderJob; // ivar: _renderJob
@property (nonatomic) ? renderScale; // ivar: _renderScale
@property (readonly, nonatomic) NSArray *requiredSourceSampleDataTrackIDs;
@property (retain, nonatomic) NSArray *requiredSourceTrackIDs; // ivar: _requiredSourceTrackIDs
@property (nonatomic) NSInteger sampleMode; // ivar: _sampleMode
@property (readonly) Class superclass;
@property (nonatomic) ? timeRange; // ivar: _timeRange
@property (retain) NURenderNode *videoRenderPrepareNode; // ivar: _videoRenderPrepareNode


+(id)defaultInstructionForAsset:(id)arg0 error:(*id)arg1 ;
+(id)instructionForVideoTrack:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToInstruction:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)metadataTrackIDForSourceIdentifier:(id)arg0 ;
-(id)sourceIdentifierForMetadataTrackID:(id)arg0 ;
-(id)sourceIdentifierForTrackID:(id)arg0 ;
-(id)trackIDForSourceIdentifier:(id)arg0 ;
-(void)setSourceIdentifier:(id)arg0 forMetadataTrackID:(id)arg1 ;
-(void)setSourceIdentifier:(id)arg0 forTrackID:(id)arg1 ;


@end


#endif