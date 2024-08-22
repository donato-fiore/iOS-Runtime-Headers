// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSAMPLE_H
#define FLOWSAMPLE_H


#import <Foundation/Foundation.h>


@interface FlowSample : NSObject {
    CGFloat _minCellRxThroughput;
    CGFloat _maxCellRxThroughput;
    CGFloat _minCellTxThroughput;
    CGFloat _maxCellTxThroughput;
    CGFloat _minWiFiRxThroughput;
    CGFloat _maxWiFiRxThroughput;
    CGFloat _minWiFiTxThroughput;
    CGFloat _maxWiFiTxThroughput;
}


@property (readonly, nonatomic) CGFloat averageCellRxThroughput;
@property (readonly, nonatomic) CGFloat averageCellTxThroughput;
@property (readonly, nonatomic) CGFloat averageRxThroughput;
@property (readonly, nonatomic) CGFloat averageTxThroughput;
@property (readonly, nonatomic) CGFloat averageWiFiRxThroughput;
@property (readonly, nonatomic) CGFloat averageWiFiTxThroughput;
@property (readonly, nonatomic) CGFloat ceilingCellRxThroughput; // ivar: _ceilingCellRxThroughput
@property (readonly, nonatomic) CGFloat ceilingCellTxThroughput; // ivar: _ceilingCellTxThroughput
@property (readonly, nonatomic) CGFloat ceilingRxThroughput;
@property (readonly, nonatomic) CGFloat ceilingTxThroughput;
@property (readonly, nonatomic) CGFloat ceilingWiFiRxThroughput; // ivar: _ceilingWiFiRxThroughput
@property (readonly, nonatomic) CGFloat ceilingWiFiTxThroughput; // ivar: _ceilingWiFiTxThroughput
@property (nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (readonly, nonatomic) BOOL isIdle;
@property (readonly, nonatomic) CGFloat maxCellRxThroughput;
@property (readonly, nonatomic) CGFloat maxCellTxThroughput;
@property (readonly, nonatomic) CGFloat maxRxThroughput;
@property (readonly, nonatomic) CGFloat maxTxThroughput;
@property (readonly, nonatomic) CGFloat maxWiFiRxThroughput;
@property (readonly, nonatomic) CGFloat maxWiFiTxThroughput;
@property (readonly, nonatomic) CGFloat minCellRxThroughput;
@property (readonly, nonatomic) CGFloat minCellTxThroughput;
@property (readonly, nonatomic) CGFloat minRxThroughput;
@property (readonly, nonatomic) CGFloat minTxThroughput;
@property (readonly, nonatomic) CGFloat minWiFiRxThroughput;
@property (readonly, nonatomic) CGFloat minWiFiTxThroughput;
@property (nonatomic) NSUInteger totalObservedCellRxBytes; // ivar: _totalObservedCellRxBytes
@property (nonatomic) NSUInteger totalObservedCellTxBytes; // ivar: _totalObservedCellTxBytes
@property (readonly, nonatomic) NSUInteger totalObservedRxBytes;
@property (readonly, nonatomic) NSUInteger totalObservedTxBytes;
@property (nonatomic) NSUInteger totalObservedWiFiRxBytes; // ivar: _totalObservedWiFiRxBytes
@property (nonatomic) NSUInteger totalObservedWiFiTxBytes; // ivar: _totalObservedWiFiTxBytes


+(id)_cellRelay;
+(void)acquireNominalCeilingValuesForCellDL:(*CGFloat)arg0 andUL:(*CGFloat)arg1 ;
-(id)description;
-(void)accumulateFrom:(id)arg0 ;
-(void)acquireCeilingValuesForCellFlow:(id)arg0 ;


@end


#endif