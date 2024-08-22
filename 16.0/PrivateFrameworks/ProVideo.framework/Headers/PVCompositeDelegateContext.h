// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVCOMPOSITEDELEGATECONTEXT_H
#define PVCOMPOSITEDELEGATECONTEXT_H


#import <Foundation/Foundation.h>

#import "PVColorSpace.h"
#import "PVInstructionGraphSourceNode.h"

@interface PVCompositeDelegateContext : NSObject

@property (readonly, nonatomic) id *preprocessData; // ivar: _preprocessData
@property (readonly, nonatomic) PVColorSpace *renderingColorSpace; // ivar: _renderingColorSpace
@property (readonly, weak, nonatomic) PVInstructionGraphSourceNode *sourceNode; // ivar: _sourceNode


-(id)initWithNode:(id)arg0 ;
-(void)setRenderColorSpace:(id)arg0 ;


@end


#endif