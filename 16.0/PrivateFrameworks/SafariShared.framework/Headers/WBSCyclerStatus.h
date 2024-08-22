// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCYCLERSTATUS_H
#define WBSCYCLERSTATUS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSCyclerStatus : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *activeTestSuiteName; // ivar: _activeTestSuiteName
@property (readonly, nonatomic, getter=isConnectedToTestTarget) BOOL connectedToTestTarget; // ivar: _connectedToTestTarget
@property (readonly, nonatomic) CGFloat executionTime; // ivar: _executionTime
@property (readonly, nonatomic) NSUInteger iterationCount; // ivar: _iterationCount
@property (readonly, nonatomic, getter=isRunning) BOOL running; // ivar: _running
@property (readonly, nonatomic) NSUInteger seed; // ivar: _seed


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithActiveTestSuiteName:(id)arg0 seed:(NSUInteger)arg1 isConnectedToTestTarget:(BOOL)arg2 isRunning:(BOOL)arg3 iterationCount:(NSUInteger)arg4 executionTime:(CGFloat)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif