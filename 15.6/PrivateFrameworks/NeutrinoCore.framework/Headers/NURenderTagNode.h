// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NURENDERTAGNODE_H
#define NURENDERTAGNODE_H

@class NSString;


#import "NURenderNode.h"

@interface NURenderTagNode : NURenderNode

@property (retain) NURenderNode *input;
@property (readonly) NSString *name; // ivar: _name


+(BOOL)validateName:(id)arg0 error:(*id)arg1 ;
-(id)_descriptionWithOffset:(NSInteger)arg0 showInputs:(BOOL)arg1 ;
-(id)_evaluateGeometrySpaceMap:(*id)arg0 ;
-(id)_evaluateImage:(*id)arg0 ;
-(id)_evaluateImageGeometry:(*id)arg0 ;
-(id)descriptionSubClassHook;
-(id)initWithInput:(id)arg0 name:(id)arg1 ;
-(id)initWithSettings:(id)arg0 inputs:(id)arg1 ;
-(id)nodeByReplayingAgainstCache:(id)arg0 pipelineState:(id)arg1 error:(*id)arg2 ;


@end


#endif