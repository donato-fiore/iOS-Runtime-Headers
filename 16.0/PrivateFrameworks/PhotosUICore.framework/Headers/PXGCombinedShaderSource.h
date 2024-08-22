// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGCOMBINEDSHADERSOURCE_H
#define PXGCOMBINEDSHADERSOURCE_H

@class NSArray;


#import "PXGShaderSource.h"

@interface PXGCombinedShaderSource : PXGShaderSource {
    NSArray *_combinedShaderSources;
    NSArray *_combinedUniforms;
}


@property (readonly, nonatomic) BOOL isEmpty; // ivar: _isEmpty


-(BOOL)isValidForEffects:(id)arg0 ;
-(id)aliasedUniformsForEffects:(id)arg0 ;
-(id)description;
-(id)initWithEffects:(id)arg0 ;


@end


#endif