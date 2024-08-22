// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMVIDEOSTABILIZATIONSTATUSINDICATOR_H
#define CAMVIDEOSTABILIZATIONSTATUSINDICATOR_H



#import "CAMControlStatusIndicator.h"

@interface CAMVideoStabilizationStatusIndicator : CAMControlStatusIndicator

@property (nonatomic, setter=setVideoStabilizationMode:) NSInteger videoStabilizationMode; // ivar: _videoStabilizationMode


-(BOOL)shouldFillOutlineForCurrentState;
-(BOOL)shouldShowSlashForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseSlash;
-(id)imageNameForAXHUD;
-(id)imageNameForCurrentState;


@end


#endif