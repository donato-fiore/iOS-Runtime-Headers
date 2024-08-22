// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISLIVEPHOTOAUTOPLAYVITALITYFILTER_H
#define ISLIVEPHOTOAUTOPLAYVITALITYFILTER_H

@class NSDate;


#import "ISLivePhotoVitalityFilter.h"

@interface ISLivePhotoAutoplayVitalityFilter : ISLivePhotoVitalityFilter

@property (nonatomic, setter=_setState:) NSInteger _state; // ivar: __state
@property (retain, nonatomic) NSDate *estimatedScrollEndDate; // ivar: _estimatedScrollEndDate
@property (nonatomic) BOOL hasTargetVisibilityOffset; // ivar: _hasTargetVisibilityOffset
@property (nonatomic, setter=setDecelerating:) BOOL isDecelerating; // ivar: _isDecelerating
@property (nonatomic, setter=setScrolling:) BOOL isScrolling; // ivar: _isScrolling
@property (nonatomic, setter=setVisible:) BOOL isVisible; // ivar: _isVisible
@property (nonatomic) CGFloat targetVisibilityOffset; // ivar: _targetVisibilityOffset
@property (nonatomic) CGFloat visibilityOffset; // ivar: _visibilityOffset


-(void)updateOutput;


@end


#endif