// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PIVIDEOREFRAMETIMEDMETADATA_H
#define PIVIDEOREFRAMETIMEDMETADATA_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PIVideoReframeTimedMetadata : NSObject

@property (readonly) CGVector estimatedCenterMotion; // ivar: _estimatedCenterMotion
@property (readonly) CGVector estimatedMotionBlur; // ivar: _estimatedMotionBlur
@property (readonly) NSArray *subjects; // ivar: _subjects
@property (readonly) ? time; // ivar: _time
@property (readonly) ? trajectoryHomography; // ivar: _trajectoryHomography




@end


#endif