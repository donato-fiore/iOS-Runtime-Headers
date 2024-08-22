// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARCOACHINGFRAME_H
#define ARCOACHINGFRAME_H

@class NSArray, ARCamera, ARGeoTrackingStatus;

#import <Foundation/Foundation.h>


@interface ARCoachingFrame : NSObject

@property (retain, nonatomic) NSArray *anchors; // ivar: _anchors
@property (retain, nonatomic) ARCamera *camera; // ivar: _camera
@property (retain, nonatomic) ARGeoTrackingStatus *geoTrackingStatus; // ivar: _geoTrackingStatus
@property (nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)initWithFrame:(id)arg0 ;


@end


#endif