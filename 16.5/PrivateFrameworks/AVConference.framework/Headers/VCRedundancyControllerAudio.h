// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCREDUNDANCYCONTROLLERAUDIO_H
#define VCREDUNDANCYCONTROLLERAUDIO_H

@class NSString;
@protocol VCRedundancyControllerProtocol, VCRedundancyControlAlgorithm;

#import <Foundation/Foundation.h>

#import "AVCStatisticsCollector.h"

@interface VCRedundancyControllerAudio : NSObject <VCRedundancyControllerProtocol>

 {
    id *_redundancyControllerDelegate;
    AVCStatisticsCollector *_statisticsCollector;
    unsigned int _mode;
    id<VCRedundancyControlAlgorithm> *_algorithm;
    unsigned int _currentRedundancyPercentage;
    CGFloat _currentRedundancyInterval;
    BOOL _isNWConnectionEnabled;
    int _statisticRegistrationIndexNetwork;
    int _statisticRegistrationIndexNWConnection;
    int _networkStatisticsType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 statisticsCollector:(id)arg1 mode:(unsigned int)arg2 ;
-(void)dealloc;
-(void)reportRedundancyPercentage:(unsigned int)arg0 redundancyInterval:(CGFloat)arg1 ;
-(void)unregisterStatistics;
-(void)updateRedundancyStrategyWithNetworkStatistics:(struct tagVCStatisticsMessage )arg0 ;


@end


#endif