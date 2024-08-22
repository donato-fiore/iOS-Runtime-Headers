// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGVIDEOSESSIONPIXELBUFFERSOURCE_H
#define PXGVIDEOSESSIONPIXELBUFFERSOURCE_H

@class NSString;
@protocol PXChangeObserver, PXGDisplayAssetPixelBufferSource;

#import <Foundation/Foundation.h>

#import "PXVideoSession.h"

@interface PXGVideoSessionPixelBufferSource : NSObject <PXChangeObserver, PXGDisplayAssetPixelBufferSource>

 {
    NSString *_bufferRequestIdentifier;
}


@property (readonly, nonatomic) *__CVBuffer currentPixelBuffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize maxOutputSize; // ivar: _maxOutputSize
@property (copy, nonatomic) id *pixelBufferDidChangeHandler; // ivar: _pixelBufferDidChangeHandler
@property (readonly, nonatomic) CGAffineTransform preferredTransform;
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXVideoSession *videoSession; // ivar: _videoSession


-(id)init;
-(id)initWithVideoSession:(id)arg0 maxOutputSize:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
-(void)dealloc;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif