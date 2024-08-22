// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKAXISCONFIGURATION_H
#define HKAXISCONFIGURATION_H

@class NSNumber;
@protocol HKAxisLabelDataSource, HKZoomScale;

#import <Foundation/Foundation.h>

#import "HKAxisStyle.h"
#import "HKCoordinateTransform.h"

@interface HKAxisConfiguration : NSObject

@property (weak, nonatomic) NSObject<HKAxisLabelDataSource> *labelDataSource; // ivar: _labelDataSource
@property (retain, nonatomic) NSNumber *maxLabelWidth; // ivar: _maxLabelWidth
@property (nonatomic) NSInteger maxLabels; // ivar: _maxLabels
@property (nonatomic) NSInteger minLabels; // ivar: _minLabels
@property (nonatomic) BOOL overrideNoTopBaseline; // ivar: _overrideNoTopBaseline
@property (retain, nonatomic) HKAxisStyle *preferredStyle; // ivar: _preferredStyle
@property (retain, nonatomic) HKCoordinateTransform *transform; // ivar: _transform
@property (retain, nonatomic) NSObject<HKZoomScale> *zoomScaleEngine; // ivar: _zoomScaleEngine


-(id)init;
-(void)applyOverridesFromAxisConfiguration:(id)arg0 ;


@end


#endif