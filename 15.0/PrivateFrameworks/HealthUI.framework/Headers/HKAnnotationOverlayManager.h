// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKANNOTATIONOVERLAYMANAGER_H
#define HKANNOTATIONOVERLAYMANAGER_H

@class NSString;
@protocol HKInteractiveChartViewObserver;

#import <Foundation/Foundation.h>

#import "HKInteractiveChartViewController.h"
#import "HKAnnotationDisplayType.h"

@interface HKAnnotationOverlayManager : NSObject <HKInteractiveChartViewObserver>



@property (readonly, nonatomic) HKInteractiveChartViewController *chartViewController; // ivar: _chartViewController
@property (retain, nonatomic) HKAnnotationDisplayType *currentOverlayDisplayType; // ivar: _currentOverlayDisplayType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithInteractiveChart:(id)arg0 ;
-(void)dealloc;
-(void)installAnnotationOverlayForRange:(id)arg0 trendData:(id)arg1 ;
-(void)removeAnnotationOverlay;


@end


#endif