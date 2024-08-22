// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKCARDIOFITNESSCLASSIFICATIONCONTEXT_H
#define _HKCARDIOFITNESSCLASSIFICATIONCONTEXT_H

@class HKCardioFitnessOverlayContext;
@protocol _HKCardioFitnessClassificationContextDelegate;



@interface _HKCardioFitnessClassificationContext : HKCardioFitnessOverlayContext

@property (weak, nonatomic) NSObject<_HKCardioFitnessClassificationContextDelegate> *delegate; // ivar: _delegate


-(BOOL)canSelectOverlayContextItem:(id)arg0 isDeselecting:(BOOL)arg1 timeScope:(NSInteger)arg2 chartController:(id)arg3 ;
-(id)baseDisplayTypeForOverlay:(NSInteger)arg0 ;
-(id)initWithMode:(NSInteger)arg0 applicationItems:(id)arg1 overlayChartController:(id)arg2 delegate:(id)arg3 ;
-(id)overlayDisplayTypeForTimeScope:(NSInteger)arg0 ;
-(id)sampleTypeForDateRangeUpdates;
-(void)updateContextItemForDateInterval:(id)arg0 overlayController:(id)arg1 timeScope:(NSInteger)arg2 completion:(id)arg3 ;


@end


#endif