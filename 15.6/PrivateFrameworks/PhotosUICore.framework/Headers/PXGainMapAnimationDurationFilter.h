// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGAINMAPANIMATIONDURATIONFILTER_H
#define PXGAINMAPANIMATIONDURATIONFILTER_H



#import "PXNumberFilter.h"

@interface PXGainMapAnimationDurationFilter : PXNumberFilter

@property (nonatomic) CGFloat activationThreshold; // ivar: _activationThreshold
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) CGFloat filterStartTime; // ivar: _filterStartTime
@property (nonatomic) BOOL gainMapImageAvailable; // ivar: _gainMapImageAvailable


-(CGFloat)updatedOutput;
-(id)init;


@end


#endif