// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPSTATUSBARTRANSITIONINFO_H
#define SBAPPSTATUSBARTRANSITIONINFO_H

@class UIStatusBarStyleRequest;

#import <Foundation/Foundation.h>


@interface SBAppStatusBarTransitionInfo : NSObject

@property (nonatomic) NSInteger endOrientation; // ivar: _endOrientation
@property (copy, nonatomic) UIStatusBarStyleRequest *endStyleRequest; // ivar: _endStyleRequest
@property (nonatomic) NSInteger startOrientation; // ivar: _startOrientation
@property (copy, nonatomic) UIStatusBarStyleRequest *startStyleRequest; // ivar: _startStyleRequest
@property (nonatomic) int transition; // ivar: _transition
@property (nonatomic) BOOL zoomOther; // ivar: _zoomOther


-(id)description;


@end


#endif