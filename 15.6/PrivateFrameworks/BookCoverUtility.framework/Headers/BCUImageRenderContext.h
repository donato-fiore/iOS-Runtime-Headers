// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCUIMAGERENDERCONTEXT_H
#define BCUIMAGERENDERCONTEXT_H

@class NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BCUCoverEffects.h"
#import "BCULayerRenderer.h"

@interface BCUImageRenderContext : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (readonly, nonatomic) BCUCoverEffects *coverEffects; // ivar: _coverEffects
@property (retain, nonatomic) NSHashTable *filterOperations; // ivar: _filterOperations
@property (readonly, nonatomic) BCULayerRenderer *renderer; // ivar: _renderer


-(id)init;
-(void)filteredImageFromImage:(struct CGImage *)arg0 filterInfo:(id)arg1 size:(struct CGSize )arg2 contentsScale:(CGFloat)arg3 completion:(id)arg4 ;


@end


#endif