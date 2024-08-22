// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PIAUTOLOOPFRAMENODE_H
#define PIAUTOLOOPFRAMENODE_H

@class NURenderNode;



@interface PIAutoLoopFrameNode : NURenderNode



-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateImageGeometry:(*id)arg0 ;
-(id)_processImage:(id)arg0 cleanRect:(struct CGRect )arg1 cropRect:(struct CGRect )arg2 transform:(id)arg3 geometry:(id)arg4 ;
-(struct ? )videoScale;


@end


#endif