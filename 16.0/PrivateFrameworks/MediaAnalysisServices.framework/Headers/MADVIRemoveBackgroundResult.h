// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MADVIREMOVEBACKGROUNDRESULT_H
#define MADVIREMOVEBACKGROUNDRESULT_H

@class IOSurface;


#import "MADResult.h"

@interface MADVIRemoveBackgroundResult : MADResult {
    IOSurface *_surface;
    CF<__CVBuffer *> _pixelBuffer;
    CF<CGImage *> _image;
}


@property (readonly, nonatomic) float confidence; // ivar: _confidence
@property (readonly, nonatomic) CGRect cropRect; // ivar: _cropRect
@property (readonly, nonatomic) *CGImage image;
@property (readonly, nonatomic) *__CVBuffer pixelBuffer;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSurface:(id)arg0 ;
-(id)initWithSurface:(id)arg0 cropRect:(struct CGRect )arg1 confidence:(float)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif