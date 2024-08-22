// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAGEMEMORYMEASUREMENTCONTROLLER_H
#define PAGEMEMORYMEASUREMENTCONTROLLER_H

@class NSTimer, NSArray;


#import "MeasurementControllerBase.h"

@interface PageMemoryMeasurementController : MeasurementControllerBase {
    NSTimer *_waitForMemoryPressureHandler;
    NSArray *_pagesNeedingMemoryWarningSent;
    int _currentPageIndex;
}




-(id)_memoryUsage:(BOOL)arg0 ;
-(id)initWithPluginPageContextController:(id)arg0 pagesNeedingMemoryWarningSent:(id)arg1 ;
-(void)_doBeforePageLoad;
-(void)_postPageLoadEnd;
-(void)_waitForMemoryPressureHandlerTimerFired:(id)arg0 ;


@end


#endif