// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MITESTMANAGER_H
#define MITESTMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MITestManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *sourceForPID; // ivar: _sourceForPID
@property (nonatomic) NSUInteger testFlags; // ivar: _testFlags
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *testModeQueue; // ivar: _testModeQueue


+(id)sharedInstance;
-(BOOL)_onQueue_clearIsRunningInTestModeForProcessWithPID:(int)arg0 withError:(*id)arg1 ;
-(BOOL)_onQueue_setIsRunningInTestModeForProcessWithPID:(int)arg0 withError:(*id)arg1 ;
-(BOOL)clearIsRunningInTestModeForProcessWithPID:(int)arg0 withError:(*id)arg1 ;
-(BOOL)isRunningInTestMode:(*BOOL)arg0 outError:(*id)arg1 ;
-(BOOL)setIsRunningInTestModeForProcessWithPID:(int)arg0 withError:(*id)arg1 ;
-(BOOL)testFlagsAreSet:(NSUInteger)arg0 ;
-(id)_testModeSentinelURL;
-(id)init;
-(void)_onQueue_clearTestFlags:(NSUInteger)arg0 ;
-(void)clearTestFlags:(NSUInteger)arg0 ;


@end


#endif