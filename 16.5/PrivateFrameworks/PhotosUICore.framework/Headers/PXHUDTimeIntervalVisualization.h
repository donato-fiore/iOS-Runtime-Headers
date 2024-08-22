// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXHUDTIMEINTERVALVISUALIZATION_H
#define PXHUDTIMEINTERVALVISUALIZATION_H



#import "PXHUDVisualization.h"
#import "PXTimeInterval.h"

@interface PXHUDTimeIntervalVisualization : PXHUDVisualization {
    id *_stateTransitionHandlerToken;
}


@property (retain, nonatomic) PXTimeInterval *timeInterval; // ivar: _timeInterval


+(id)visualizationWithTimeInterval:(id)arg0 ;


@end


#endif