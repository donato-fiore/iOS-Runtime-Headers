// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUPLACEHOLDERNODE_H
#define NUPLACEHOLDERNODE_H



#import "NURenderNode.h"

@interface NUPlaceholderNode : NURenderNode



-(BOOL)isPlaceholderNode;
-(id)_evaluateImageGeometryWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateImagePropertiesWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateImageWithSourceOptions:(id)arg0 subsampleFactor:(*NSInteger)arg1 error:(*id)arg2 ;
-(id)_evaluateVideoCompositionWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)_evaluateVideoPropertiesWithSourceOptions:(id)arg0 error:(*id)arg1 ;
-(id)initWithInputs:(id)arg0 ;
-(id)initWithSettings:(id)arg0 inputs:(id)arg1 ;


@end


#endif