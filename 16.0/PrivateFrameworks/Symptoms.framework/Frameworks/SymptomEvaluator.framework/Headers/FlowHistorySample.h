// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWHISTORYSAMPLE_H
#define FLOWHISTORYSAMPLE_H


#import <Foundation/Foundation.h>


@interface FlowHistorySample : NSObject {
    ? _flowCountArray;
}


@property (readonly, nonatomic) NSUInteger closedAppleStackFlows;
@property (readonly, nonatomic) NSUInteger closedFlows;
@property (readonly, nonatomic) NSUInteger closedNonAppleStackFlows;
@property (readonly, nonatomic) NSUInteger closedRNFFlows;
@property (readonly, nonatomic) NSUInteger closedSISFlows;
@property (readonly, nonatomic) NSUInteger currentAppleStackFlows; // ivar: _currentAppleStackFlows
@property (readonly, nonatomic) NSUInteger currentFlows; // ivar: _currentFlows
@property (readonly, nonatomic) NSUInteger currentNonAppleStackFlows; // ivar: _currentNonAppleStackFlows
@property (readonly, nonatomic) NSUInteger currentSISFlows; // ivar: _currentSISFlows
@property (nonatomic) CGFloat elapsedTime; // ivar: _elapsedTime
@property (readonly, nonatomic) NSUInteger openedAppleStackFlows;
@property (readonly, nonatomic) NSUInteger openedFlows;
@property (readonly, nonatomic) NSUInteger openedNonAppleStackFlows;
@property (readonly, nonatomic) NSUInteger openedRNFFlows;
@property (readonly, nonatomic) NSUInteger openedSISFlows;
@property (readonly, nonatomic) NSUInteger rxAppleStackBytes;
@property (readonly, nonatomic) NSUInteger rxBytes;
@property (readonly, nonatomic) NSUInteger rxNonAppleStackBytes;
@property (readonly, nonatomic) NSUInteger rxSISBytes;
@property (readonly, nonatomic) CGFloat rxThroughput;
@property (readonly, nonatomic) NSUInteger rxThroughputBps;
@property (nonatomic) CGFloat startTimeIntervalSinceReferenceDate; // ivar: _startTimeIntervalSinceReferenceDate
@property (readonly, nonatomic) NSUInteger txAppleStackBytes;
@property (readonly, nonatomic) NSUInteger txBytes;
@property (readonly, nonatomic) NSUInteger txNonAppleStackBytes;
@property (readonly, nonatomic) NSUInteger txSISBytes;
@property (readonly, nonatomic) CGFloat txThroughput;
@property (readonly, nonatomic) NSUInteger txThroughputBps;


-(id)description;
-(void)noteCurent:(struct ? *)arg0 previous:(struct ? *)arg1 ;


@end


#endif