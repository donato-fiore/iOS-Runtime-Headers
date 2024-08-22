// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STAGINGBUFFER_H
#define STAGINGBUFFER_H

@class NSDictionary;
@protocol MTLTexture;

#import <Foundation/Foundation.h>


@interface StagingBuffer : NSObject

@property ? atlasHomography; // ivar: _atlasHomography
@property (retain) NSObject<MTLTexture> *chroma; // ivar: _chroma
@property BOOL dirty; // ivar: _dirty
@property ? homographyToReference; // ivar: _homographyToReference
@property (retain) NSObject<MTLTexture> *luma; // ivar: _luma
@property (retain) NSDictionary *metadata; // ivar: _metadata
@property (retain) NSObject<MTLTexture> *weights; // ivar: _weights


-(float)overlapWithAtlasHomography:(struct ? )arg0 roi:(struct CGRect )arg1 ;
-(id)initWithContext:(id)arg0 stagingWidth:(NSUInteger)arg1 stagingHeight:(NSUInteger)arg2 homography:(struct ? )arg3 atlasHomography:(struct ? )arg4 ;


@end


#endif