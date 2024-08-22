// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVVIDEOCOMPOSITIONINSTRUCTION_H
#define PVVIDEOCOMPOSITIONINSTRUCTION_H

@class NSString, NSArray;
@protocol AVVideoCompositionInstruction, NSCopying;

#import <Foundation/Foundation.h>

#import "PVInstructionGraphNode.h"

@interface PVVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction, NSCopying>



@property (nonatomic) BOOL containsTweening; // ivar: m_containsTweening
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enablePostProcessing; // ivar: m_enablePostProcessing
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFreezeFrame; // ivar: _isFreezeFrame
@property (retain, nonatomic) PVInstructionGraphNode *outputNode; // ivar: m_outputIGNode
@property (readonly, nonatomic) int passthroughTrackID; // ivar: m_passthroughTrackID
@property (readonly, nonatomic) NSArray *requiredSourceSampleDataTrackIDs; // ivar: m_requiredSourceSampleDataTrackIDs
@property (readonly, nonatomic) NSArray *requiredSourceTrackIDs; // ivar: m_requiredSourceTrackIDs
@property (readonly) Class superclass;
@property (nonatomic) ? timeRange; // ivar: m_timeRange


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)videoInstructionDescription;
-(void)loadInstructionGraphNodes:(struct HGRef<PVInstructionGraphContext> )arg0 ;
-(void)unloadInstructionGraphNodes;


@end


#endif