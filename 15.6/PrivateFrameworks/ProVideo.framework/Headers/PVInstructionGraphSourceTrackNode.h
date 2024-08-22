// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVINSTRUCTIONGRAPHSOURCETRACKNODE_H
#define PVINSTRUCTIONGRAPHSOURCETRACKNODE_H

@protocol PVStabilizationDelegate;


#import "PVInstructionGraphSourceNode.h"

@interface PVInstructionGraphSourceTrackNode : PVInstructionGraphSourceNode {
    atomic<int> _sourceTrackloaded;
}


@property (nonatomic) CGSize clipNaturalSize; // ivar: _clipNaturalSize
@property (nonatomic) CGRect cropRect; // ivar: _cropRect
@property (nonatomic) int dataTrackID; // ivar: _dataTrackID
@property (nonatomic) int fillMode; // ivar: _fillMode
@property (retain, nonatomic) NSObject<PVStabilizationDelegate> *stabilizationDelegate; // ivar: _stabilizationDelegate
@property (nonatomic) BOOL stabilizationDelegateRespondsToDidStabilize; // ivar: _stabilizationDelegateRespondsToDidStabilize
@property (nonatomic) int trackID; // ivar: _trackID
@property (retain, nonatomic) id *userContext; // ivar: _userContext


+(id)newSourceTrackNode:(int)arg0 animation:(id)arg1 fillMode:(int)arg2 clipNaturalSize:(struct CGSize )arg3 ;
+(id)newSourceTrackNode:(int)arg0 transform:(struct CGAffineTransform )arg1 cropRect:(struct CGRect )arg2 clipNaturalSize:(struct CGSize )arg3 ;
+(id)newSourceTrackNodeWithStabilizationDelegate:(id)arg0 userContext:(id)arg1 trackID:(int)arg2 dataTrackID:(int)arg3 transform:(struct CGAffineTransform )arg4 clipNaturalSize:(struct CGSize )arg5 ;
+(id)newSourceTrackNodeWithStabilizationDelegate:(id)arg0 userContext:(id)arg1 trackID:(int)arg2 transform:(struct CGAffineTransform )arg3 clipNaturalSize:(struct CGSize )arg4 ;
-(BOOL)isPassthru;
-(BOOL)isPortrait;
-(id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> )arg0 ;
-(id)init;
-(id)instructionGraphNodeDescription;
-(id)requiredSourceTrackIDs;
-(struct HGRef<HGNode> )internalHGNodeForTime:(struct ? )arg0 trackInputs:(*void)arg1 renderer:(*void)arg2 igContext:(struct HGRef<PVInstructionGraphContext> )arg3 ;
-(struct PCMatrix44Tmpl<double> )pixelTransformForPVEffect:(id)arg0 igContext:(struct HGRef<PVInstructionGraphContext> )arg1 ;
-(struct PCRect<double> )inputSizeForPVEffect:(id)arg0 igContext:(struct HGRef<PVInstructionGraphContext> )arg1 ;
-(void)loadIGNode:(struct HGRef<PVInstructionGraphContext> )arg0 returnLoadedEffects:(id)arg1 ;
-(void)unloadIGNode;


@end


#endif