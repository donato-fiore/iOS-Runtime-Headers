// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAFLIPBOOKFRAME_H
#define CAFLIPBOOKFRAME_H


#import <Foundation/Foundation.h>


@interface CAFlipBookFrame : NSObject {
    NSUInteger _presentationTime;
    NSUInteger _frameId;
    unsigned int _generation;
    float _apl;
    float _aplDimming;
    NSUInteger _memoryUsage;
    *__IOSurface _rawSurface;
    CGRect _rawSurfaceFrame;
    *__IOSurface _surface;
    id *_userInfo;
    BOOL _inverted;
}


@property (readonly, nonatomic) float apl;
@property (readonly, nonatomic) float aplDimming;
@property (readonly, nonatomic) NSUInteger frameId;
@property (readonly, nonatomic, getter=isInverted) BOOL inverted;
@property (readonly, nonatomic) NSUInteger memoryUsage;
@property (readonly, nonatomic) NSUInteger presentationTime;
@property (nonatomic) *__IOSurface rawSurface;
@property (readonly, nonatomic) CGRect rawSurfaceFrame;
@property (nonatomic) *__IOSurface surface;
@property (readonly, nonatomic) id *userInfo;


-(id)_initWithPresentationTime:(NSUInteger)arg0 frameId:(NSUInteger)arg1 generation:(unsigned int)arg2 apl:(float)arg3 aplDimming:(float)arg4 memoryUsage:(NSUInteger)arg5 inverted:(BOOL)arg6 userInfo:(id)arg7 ;
-(id)description;
-(unsigned int)generation;
-(void)dealloc;
-(void)releaseSurface;


@end


#endif