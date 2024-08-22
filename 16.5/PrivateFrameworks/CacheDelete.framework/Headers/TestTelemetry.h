// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TESTTELEMETRY_H
#define TESTTELEMETRY_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TestTelemetry : NSObject

@property NSUInteger files_deleted; // ivar: _files_deleted
@property (readonly) NSObject<OS_dispatch_queue> *q; // ivar: _q
@property (retain, nonatomic) NSMutableArray *removeFailures; // ivar: _removeFailures
@property CGFloat remove_threshold; // ivar: _remove_threshold
@property (retain, nonatomic) NSMutableArray *terminationFailures; // ivar: _terminationFailures
@property CGFloat termination_threshold; // ivar: _termination_threshold


+(id)testTelemetryWithInfo:(id)arg0 ;
-(NSUInteger)deletes;
-(id)description;
-(id)initWithInfo:(id)arg0 ;
-(void)addDeletes:(NSUInteger)arg0 ;
-(void)addRemoveFailure:(id)arg0 ;
-(void)addTerminationFailure:(id)arg0 ;


@end


#endif