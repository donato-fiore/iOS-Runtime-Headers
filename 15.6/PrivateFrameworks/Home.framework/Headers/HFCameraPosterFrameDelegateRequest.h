// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCAMERAPOSTERFRAMEDELEGATEREQUEST_H
#define HFCAMERAPOSTERFRAMEDELEGATEREQUEST_H

@class HMCameraClip, NSNumber;
@protocol HFCameraPosterFrameDelegate;

#import <Foundation/Foundation.h>


@interface HFCameraPosterFrameDelegateRequest : NSObject

@property (weak, nonatomic) NSObject<HFCameraPosterFrameDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) HMCameraClip *highQualityClip; // ivar: _highQualityClip
@property (retain, nonatomic) NSNumber *offsetNumber; // ivar: _offsetNumber
@property (retain, nonatomic) HMCameraClip *timelapseClip; // ivar: _timelapseClip




@end


#endif