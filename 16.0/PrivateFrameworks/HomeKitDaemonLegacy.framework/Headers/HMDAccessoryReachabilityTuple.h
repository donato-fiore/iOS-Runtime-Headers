// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYREACHABILITYTUPLE_H
#define HMDACCESSORYREACHABILITYTUPLE_H

@class HMFObject, NSString;



@interface HMDAccessoryReachabilityTuple : HMFObject

@property (retain, nonatomic) NSString *accessoryUUID; // ivar: _accessoryUUID
@property (nonatomic) BOOL currentReachability; // ivar: _currentReachability
@property (nonatomic) NSUInteger currentSuspendedState; // ivar: _currentSuspendedState
@property (nonatomic) BOOL previouslySentReachability; // ivar: _previouslySentReachability
@property (nonatomic) NSUInteger previouslySentSuspendedState; // ivar: _previouslySentSuspendedState


+(id)tupleWithAccessoryUUID:(id)arg0 reachable:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif