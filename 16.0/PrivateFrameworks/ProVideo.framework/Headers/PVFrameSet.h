// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVFRAMESET_H
#define PVFRAMESET_H

@class NSMutableDictionary, AVDepthData;
@protocol MTLTexture;

#import <Foundation/Foundation.h>

#import "PVImageBuffer.h"
#import "PVCMSampleBuffer.h"

@interface PVFrameSet : NSObject {
    unique_ptr<PVGCDLock, std::default_delete<PVGCDLock>> _mdLock;
    NSMutableDictionary *_metadata;
}


@property (retain) PVImageBuffer *alphaMaskImageBuffer; // ivar: _alphaMaskImageBuffer
@property (readonly, nonatomic) PVImageBuffer *colorImageBuffer;
@property (readonly, nonatomic) PVCMSampleBuffer *colorSampleBuffer; // ivar: _colorSampleBuffer
@property (readonly, nonatomic) AVDepthData *depthData; // ivar: _depthData
@property (readonly, nonatomic) NSObject<MTLTexture> *dilatedDepth; // ivar: _dilatedDepth
@property (readonly, nonatomic) NSObject<MTLTexture> *matte; // ivar: _matte
@property (readonly, nonatomic) ? presentationTimeStamp;


+(id)frameSetWithARFrame:(id)arg0 depthData:(id)arg1 depthFreshness:(int)arg2 frameDuration:(struct ? )arg3 ;
+(id)frameSetWithARFrame:(id)arg0 depthData:(id)arg1 depthFreshness:(int)arg2 frameDuration:(struct ? )arg3 matte:(id)arg4 dilatedDepth:(id)arg5 ;
+(id)frameSetWithARFrame:(id)arg0 frameDuration:(struct ? )arg1 ;
+(id)frameSetWithARFrame:(id)arg0 frameDuration:(struct ? )arg1 matte:(id)arg2 dilatedDepth:(id)arg3 ;
-(id)initWithColorBuffer:(id)arg0 depthData:(id)arg1 metadata:(id)arg2 ;
-(id)initWithColorBuffer:(id)arg0 depthData:(id)arg1 metadata:(id)arg2 matte:(id)arg3 dilatedDepth:(id)arg4 ;
-(id)initWithColorBuffer:(id)arg0 metadata:(id)arg1 ;
-(id)metadataDict;
-(id)metadataObjectForKey:(id)arg0 ;
-(void)commonInitWithColorBuffer:(id)arg0 depthData:(id)arg1 metadata:(id)arg2 matte:(id)arg3 dilatedDepth:(id)arg4 ;
-(void)setMetadataDict:(id)arg0 ;
-(void)setMetadataObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif