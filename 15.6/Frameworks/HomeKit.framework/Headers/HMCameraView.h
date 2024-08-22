// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMCAMERAVIEW_H
#define HMCAMERAVIEW_H

@class UIView;


#import "HMCameraSource.h"

@interface HMCameraView : UIView

@property (retain, nonatomic) HMCameraSource *cameraSource; // ivar: _cameraSource


-(void)_fillSlotForCameraSource;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif