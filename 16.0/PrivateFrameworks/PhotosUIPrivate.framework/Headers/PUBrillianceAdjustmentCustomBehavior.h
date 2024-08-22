// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUBRILLIANCEADJUSTMENTCUSTOMBEHAVIOR_H
#define PUBRILLIANCEADJUSTMENTCUSTOMBEHAVIOR_H

@class NSString;
@protocol PUAdjustmentCustomBehavior;

#import <Foundation/Foundation.h>


@interface PUBrillianceAdjustmentCustomBehavior : NSObject <PUAdjustmentCustomBehavior>



@property BOOL calculatingStatistics; // ivar: _calculatingStatistics
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dataSource:(id)arg0 adjustmentInfo:(id)arg1 modifyValue:(CGFloat)arg2 ;
-(void)dataSource:(id)arg0 adjustmentInfo:(id)arg1 setEnabled:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)populateSmartToneStatisticsForDataSource:(id)arg0 adjustmentInfo:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif