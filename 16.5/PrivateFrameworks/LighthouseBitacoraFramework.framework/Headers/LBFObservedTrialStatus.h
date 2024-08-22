// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LBFOBSERVEDTRIALSTATUS_H
#define LBFOBSERVEDTRIALSTATUS_H

@class NSString, NSNumber, NSDate;

#import <Foundation/Foundation.h>


@interface LBFObservedTrialStatus : NSObject

@property (readonly, nonatomic) NSString *deploymentId; // ivar: _deploymentId
@property (readonly, nonatomic) NSString *experimentOrTaskId; // ivar: _experimentOrTaskId
@property (retain, nonatomic) NSNumber *isActivated; // ivar: _isActivated
@property (nonatomic) BOOL isActivated_implicit; // ivar: _isActivated_implicit
@property (retain, nonatomic) NSNumber *isAllocated; // ivar: _isAllocated
@property (nonatomic) BOOL isAllocated_implicit; // ivar: _isAllocated_implicit
@property (retain, nonatomic) NSDate *lastObservedTimestamp; // ivar: _lastObservedTimestamp


-(id)initWithObservedStatus:(id)arg0 deploymentId:(id)arg1 ;
-(id)initWithObservedStatus:(id)arg0 deploymentId:(id)arg1 isAllocated:(id)arg2 isActivated:(id)arg3 isAllocated_implicit:(BOOL)arg4 isActivated_implicit:(BOOL)arg5 ;


@end


#endif