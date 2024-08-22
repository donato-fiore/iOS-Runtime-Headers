// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FOREGROUNDAPPRECORD_H
#define FOREGROUNDAPPRECORD_H

@class NSString, NEPolicy;

#import <Foundation/Foundation.h>


@interface ForegroundAppRecord : NSObject {
    BOOL _isForeground;
    CGFloat _stateChangeTime;
    NSUInteger _policyId;
}


@property (retain, nonatomic) NSString *bundleName; // ivar: _bundleName
@property (nonatomic) NSInteger closedConnectionCount; // ivar: _closedConnectionCount
@property (nonatomic) NSInteger connectionCount; // ivar: _connectionCount
@property (nonatomic) BOOL countedAsExploitingOutrank; // ivar: _countedAsExploitingOutrank
@property (nonatomic) BOOL countedAsNonExploitingOutrank; // ivar: _countedAsNonExploitingOutrank
@property (nonatomic) BOOL foregroundSessionActivity; // ivar: _foregroundSessionActivity
@property (nonatomic) BOOL isForeground;
@property (retain, nonatomic) NEPolicy *policy; // ivar: _policy
@property (nonatomic) NSUInteger policyId;
@property (readonly, nonatomic) CGFloat stateChangeTime;


-(id)description;


@end


#endif