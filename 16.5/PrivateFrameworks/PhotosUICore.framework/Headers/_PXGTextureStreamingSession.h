// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXGTEXTURESTREAMINGSESSION_H
#define _PXGTEXTURESTREAMINGSESSION_H

@class NSMutableIndexSet, NSDate, NSIndexSet;
@protocol PXGDisplayAssetAdjustment, PXDisplayAsset, PXGDisplayAssetPixelBufferSource;

#import <Foundation/Foundation.h>

#import "PXGDisplayAssetVideoPresentationController.h"

@interface _PXGTextureStreamingSession : NSObject {
    NSMutableIndexSet *_textureRequestIDs;
}


@property (readonly, nonatomic) NSObject<PXGDisplayAssetAdjustment> *displayAdjustment; // ivar: _displayAdjustment
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *displayAsset; // ivar: _displayAsset
@property (copy, nonatomic) NSDate *firstPixelBufferDisplayDate; // ivar: _firstPixelBufferDisplayDate
@property (retain, nonatomic) *__CVPixelBufferPool pixelBufferPool; // ivar: _pixelBufferPool
@property (readonly, nonatomic) NSObject<PXGDisplayAssetPixelBufferSource> *pixelBufferSource; // ivar: _pixelBufferSource
@property (readonly, nonatomic) PXGDisplayAssetVideoPresentationController *presentationController; // ivar: _presentationController
@property (readonly, copy, nonatomic) NSIndexSet *textureRequestIDs;


-(id)initWithDisplayAsset:(id)arg0 presentationController:(id)arg1 pixelBufferSource:(id)arg2 adjustment:(id)arg3 ;
-(void)addTextureRequestID:(int)arg0 ;
-(void)removeTextureRequestID:(int)arg0 ;
-(void)removeTextureRequestIDs:(id)arg0 ;


@end


#endif