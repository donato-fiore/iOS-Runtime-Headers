// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWNODEOUTPUTMEDIAPROPERTIES_H
#define BWNODEOUTPUTMEDIAPROPERTIES_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BWNodeOutput.h"
#import "BWFormat.h"
#import "BWPixelBufferPool.h"
#import "BWDataBufferPool.h"
#import "BWVideoFormat.h"
#import "BWPointCloudFormat.h"

@interface BWNodeOutputMediaProperties : NSObject {
    NSString *_associatedAttachedMediaKey;
    BWNodeOutput *_owningNodeOutput;
    BWFormat *_resolvedFormat;
    BWPixelBufferPool *_livePixelBufferPool;
    BWDataBufferPool *_liveDataBufferPool;
}


@property (retain, nonatomic) BWDataBufferPool *liveDataBufferPool;
@property (nonatomic) int liveDataBufferPoolSize; // ivar: _liveDataBufferPoolSize
@property (retain, nonatomic) BWFormat *liveFormat; // ivar: _liveFormat
@property (retain, nonatomic) BWPixelBufferPool *livePixelBufferPool;
@property (nonatomic) int livePixelBufferPoolSize; // ivar: _livePixelBufferPoolSize
@property (readonly, nonatomic) BWVideoFormat *liveVideoFormat;
@property (readonly, nonatomic) unsigned int mediaType; // ivar: _mediaType
@property (retain, nonatomic) BWDataBufferPool *preparedDataBufferPool; // ivar: _preparedDataBufferPool
@property (nonatomic) int preparedDataBufferPoolSize; // ivar: _preparedDataBufferPoolSize
@property (retain, nonatomic) BWPixelBufferPool *preparedPixelBufferPool; // ivar: _preparedPixelBufferPool
@property (nonatomic) int preparedPixelBufferPoolSize; // ivar: _preparedPixelBufferPoolSize
@property (retain, nonatomic) BWFormat *resolvedFormat;
@property (readonly, nonatomic) BWPointCloudFormat *resolvedPointCloudFormat;
@property (nonatomic) int resolvedRetainedBufferCount; // ivar: _resolvedRetainedBufferCount
@property (readonly, nonatomic) BWVideoFormat *resolvedVideoFormat;


-(void)_setOwningNodeOutput:(id)arg0 associatedAttachedMediaKey:(id)arg1 ;
-(void)dealloc;
-(void)setNodePreparedDataBufferPool:(id)arg0 ;
-(void)setNodePreparedPixelBufferPool:(id)arg0 ;
-(void)setPreparedSharedDataBufferPool:(id)arg0 ;
-(void)setPreparedSharedPixelBufferPool:(id)arg0 ;


@end


#endif