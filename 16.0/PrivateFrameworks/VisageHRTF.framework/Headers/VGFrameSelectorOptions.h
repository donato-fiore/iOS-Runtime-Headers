// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VGFRAMESELECTOROPTIONS_H
#define VGFRAMESELECTOROPTIONS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VGFrameSelectorOptions : NSObject

@property (retain, nonatomic) NSArray *angles; // ivar: _angles
@property (nonatomic) BOOL detectFrontPose; // ivar: _detectFrontPose
@property (nonatomic) float frameAngularLimit; // ivar: _frameAngularLimit
@property (retain, nonatomic) NSArray *frontExpressionFilters; // ivar: _frontExpressionFilters




@end


#endif