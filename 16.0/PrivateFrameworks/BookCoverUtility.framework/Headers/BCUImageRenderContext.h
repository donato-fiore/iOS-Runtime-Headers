// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCUIMAGERENDERCONTEXT_H
#define BCUIMAGERENDERCONTEXT_H

@class NSHashTable;

#import <Foundation/Foundation.h>

#import "BCUCoverEffects.h"
#import "BCULayerRenderer.h"

@interface BCUImageRenderContext : NSObject {
    os_unfair_lock_s _accessLock;
}


@property (readonly, nonatomic) BCUCoverEffects *coverEffects; // ivar: _coverEffects
@property (retain, nonatomic) NSHashTable *filterOperations; // ivar: _filterOperations
@property (readonly, nonatomic) BCULayerRenderer *renderer; // ivar: _renderer


-(id)init;
-(id)initWithMode:(NSUInteger)arg0 ;
-(void)filteredImageFromImage:(struct CGImage *)arg0 filterInfo:(id)arg1 size:(struct CGSize )arg2 contentsScale:(CGFloat)arg3 completion:(id)arg4 ;
-(void)filteredImageFromImage:(struct CGImage *)arg0 filterInfo:(id)arg1 size:(struct CGSize )arg2 contentsScale:(CGFloat)arg3 waitForCPUSynchronization:(BOOL)arg4 completion:(id)arg5 ;


@end


#endif