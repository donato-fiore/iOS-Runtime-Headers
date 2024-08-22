// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMETRICSESSION_H
#define AXMETRICSESSION_H

@class NSMutableArray, NSString, NSArray;
@protocol NSSecureCoding, AXMetricContainer;

#import <Foundation/Foundation.h>


@interface AXMetricSession : NSObject <NSSecureCoding, AXMetricContainer>



@property (retain, nonatomic) NSMutableArray *childMetrics; // ivar: _childMetrics
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *enabledByEnvironmentVariables; // ivar: _enabledByEnvironmentVariables
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL measurementsEnabled; // ivar: _measurementsEnabled
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)generateReport;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 measurementsEnabled:(BOOL)arg1 ;
-(id)initWithName:(id)arg0 measurementsEnabled:(BOOL)arg1 orEnabledByEnvironmentVariables:(id)arg2 ;
-(id)measure:(id)arg0 tryExecute:(id)arg1 ;
-(id)startMeasure:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)measure:(id)arg0 execute:(id)arg1 ;


@end


#endif