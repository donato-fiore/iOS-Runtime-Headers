// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLOWSAMPLE_H
#define FLOWSAMPLE_H


#import <Foundation/Foundation.h>


@interface FlowSample : NSObject {
    CGFloat _minRxThroughput;
    CGFloat _maxRxThroughput;
    CGFloat _minTxThroughput;
    CGFloat _maxTxThroughput;
}


@property (readonly, nonatomic) CGFloat averageRxThroughput;
@property (readonly, nonatomic) CGFloat averageTxThroughput;
@property (readonly, nonatomic) CGFloat ceilingRxThroughput; // ivar: _ceilingRxThroughput
@property (readonly, nonatomic) CGFloat ceilingTxThroughput; // ivar: _ceilingTxThroughput
@property (nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (readonly, nonatomic) BOOL isIdle;
@property (readonly, nonatomic) CGFloat maxRxThroughput;
@property (readonly, nonatomic) CGFloat maxTxThroughput;
@property (readonly, nonatomic) CGFloat minRxThroughput;
@property (readonly, nonatomic) CGFloat minTxThroughput;
@property (nonatomic) NSUInteger totalObservedIfTypeRxBytes; // ivar: _totalObservedIfTypeRxBytes
@property (nonatomic) NSUInteger totalObservedIfTypeTxBytes; // ivar: _totalObservedIfTypeTxBytes


+(id)_cellRelay;
+(void)acquireNominalCeilingValuesForDL:(*CGFloat)arg0 andUL:(*CGFloat)arg1 ;
-(id)description;
-(void)accumulateFrom:(id)arg0 ;
-(void)acquireCeilingValuesForFlow:(id)arg0 ;


@end


#endif