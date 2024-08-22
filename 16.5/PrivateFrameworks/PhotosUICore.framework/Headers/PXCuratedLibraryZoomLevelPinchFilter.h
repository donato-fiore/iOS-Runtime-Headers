// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCURATEDLIBRARYZOOMLEVELPINCHFILTER_H
#define PXCURATEDLIBRARYZOOMLEVELPINCHFILTER_H


#import <Foundation/Foundation.h>

#import "PXInitialHysteresisNumberFilter.h"
#import "PXChangeDirectionNumberFilter.h"

@interface PXCuratedLibraryZoomLevelPinchFilter : NSObject {
    BOOL _didHandleInitialPinch;
    PXInitialHysteresisNumberFilter *_initialDirectionFilter;
    PXChangeDirectionNumberFilter *_scaleDirectionFilter;
    CGFloat _lastDirection;
}


@property (readonly, nonatomic) BOOL isTrackingPinch; // ivar: _isTrackingPinch


-(id)init;
// -(void)filterPinchGestureWithScale:(CGFloat)arg0 initialPinchHandler:(id)arg1 subsequentDirectionChangeHandler:(unk)arg2  ;
-(void)reset;


@end


#endif