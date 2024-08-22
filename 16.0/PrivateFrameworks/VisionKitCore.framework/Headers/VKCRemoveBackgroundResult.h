// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKCREMOVEBACKGROUNDRESULT_H
#define VKCREMOVEBACKGROUNDRESULT_H


#import <Foundation/Foundation.h>

#import "VKCRemoveBackgroundRequest.h"

@interface VKCRemoveBackgroundResult : NSObject {
    *__CVBuffer _pixelBuffer;
}


@property (readonly, nonatomic) CGRect cropRect; // ivar: _cropRect
@property (readonly, nonatomic) NSInteger imageOrientation;
@property (nonatomic) *CGImage maskImage; // ivar: _maskImage
@property (readonly, nonatomic) CGRect normalizedCropRect; // ivar: _normalizedCropRect
@property (nonatomic) *CGImage orientedMaskImage; // ivar: _orientedMaskImage
@property (readonly, nonatomic) *__CVBuffer pixelBuffer;
@property (readonly, nonatomic) VKCRemoveBackgroundRequest *request; // ivar: _request


-(id)initWithMADResult:(id)arg0 request:(id)arg1 ;
-(struct CGImage *)createCGImage;
-(void)dealloc;
-(void)generateImageMaskIfNecessaryWithContext:(id)arg0 ;


@end


#endif