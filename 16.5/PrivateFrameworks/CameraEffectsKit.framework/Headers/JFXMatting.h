// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXMATTING_H
#define JFXMATTING_H


#import <Foundation/Foundation.h>


@interface JFXMatting : NSObject {
    CGSize _colorBufferSize;
    NSInteger _cameraLocation;
}


@property (nonatomic) BOOL ready; // ivar: _ready


+(BOOL)_defaultMatteGeneratorPrefersDepth;
+(BOOL)canMatteWithANE;
+(BOOL)defaultMatteGeneratorPrefersDepth;
+(BOOL)isCVASegMattingSPIWorking;
+(Class)defaultMatteGeneratorClass;
+(id)defaultMatteGenerator:(id)arg0 ;
+(id)depthDataForCVPixelBuffer:(struct __CVBuffer *)arg0 ;
+(struct CGSize )mattingDepthInputSize;
+(void)postNotification:(NSUInteger)arg0 ;
-(BOOL)isValidForCameraFrameSet:(id)arg0 ;
-(id)initForFrameSet:(id)arg0 ;
-(void)alphaMatteForFrameSet:(id)arg0 mattingPerfState:(id)arg1 completionHandler:(id)arg2 ;
-(void)requestMattingStatus;


@end


#endif