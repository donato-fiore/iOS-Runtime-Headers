// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDEMOCAMERACLIP_H
#define HMDEMOCAMERACLIP_H

@class NSURL;


#import "HMCameraClip.h"

@interface HMDemoCameraClip : HMCameraClip

@property (readonly, copy) NSURL *clipURL; // ivar: _clipURL


-(id)initWithCameraProfile:(id)arg0 clipURL:(id)arg1 startDate:(id)arg2 duration:(CGFloat)arg3 significantEvents:(id)arg4 ;
-(id)initWithClipURL:(id)arg0 startDate:(id)arg1 duration:(CGFloat)arg2 significantEvents:(id)arg3 ;


@end


#endif