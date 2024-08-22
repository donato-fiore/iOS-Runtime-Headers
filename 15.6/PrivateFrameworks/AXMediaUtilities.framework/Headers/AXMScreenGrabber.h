// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMSCREENGRABBER_H
#define AXMSCREENGRABBER_H

@class NSString;
@protocol RPScreenRecorderDelegate;

#import <Foundation/Foundation.h>


@interface AXMScreenGrabber : NSObject <RPScreenRecorderDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)_adjustedScaleFactorForInputSize:(struct CGSize )arg0 constrainingToPreferredInputSizeFromDetectors:(id)arg1 ;
-(id)_ioSurfaceConfigurationWithSize:(struct CGSize )arg0 ;
-(id)_renderOptionsForSurface:(struct __IOSurface *)arg0 captureRect:(struct CGRect )arg1 displayName:(id)arg2 scaleFactor:(CGFloat)arg3 ignoredLayerContextIDs:(id)arg4 includedLayerContextIDs:(id)arg5 ;
-(id)grabScreenWithRect:(struct CGRect )arg0 orientation:(NSInteger)arg1 options:(id)arg2 metrics:(id)arg3 error:(*id)arg4 ;
-(void)recordScreenForDuration:(CGFloat)arg0 completion:(id)arg1 ;
-(void)screenRecorder:(id)arg0 didStopRecordingWithPreviewViewController:(id)arg1 error:(id)arg2 ;


@end


#endif