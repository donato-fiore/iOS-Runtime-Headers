// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUICGLINDEXCACHEENTRY_H
#define SUICGLINDEXCACHEENTRY_H


#import <Foundation/Foundation.h>


@interface SUICGLIndexCacheEntry : NSObject

@property (nonatomic) *unsigned int gl_indices; // ivar: _gl_indices
@property (nonatomic) unsigned int numAuraIndices; // ivar: _numAuraIndices
@property (nonatomic) unsigned int numAuraIndicesCulled; // ivar: _numAuraIndicesCulled
@property (nonatomic) unsigned int numWaveIndices; // ivar: _numWaveIndices


-(void)dealloc;


@end


#endif