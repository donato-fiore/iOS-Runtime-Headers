// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CONNECTIONFAILURETRACKER_H
#define CONNECTIONFAILURETRACKER_H

@class NSData, NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface ConnectionFailureTracker : NSObject

@property (retain, nonatomic) NSData *destinationAddress; // ivar: _destinationAddress
@property (retain, nonatomic) NSMutableArray *failedFlows; // ivar: _failedFlows
@property (nonatomic) CGFloat firstConnectionFailTime; // ivar: _firstConnectionFailTime
@property (nonatomic) unsigned int ifIndex; // ivar: _ifIndex
@property (nonatomic) NSInteger ifType; // ivar: _ifType
@property (nonatomic) BOOL isIPv6; // ivar: _isIPv6
@property (nonatomic) CGFloat lastConnectionFailTime; // ivar: _lastConnectionFailTime
@property (nonatomic) int numConsecutiveFailures; // ivar: _numConsecutiveFailures
@property (retain, nonatomic) NSString *processName; // ivar: _processName


-(BOOL)noteInitialSnapshot:(id)arg0 ;
-(id)description;
-(void)_logFailure;
-(void)_reportFailure:(NSUInteger)arg0 owner:(id)arg1 ;


@end


#endif