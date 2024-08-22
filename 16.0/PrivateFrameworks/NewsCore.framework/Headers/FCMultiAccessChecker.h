// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCMULTIACCESSCHECKER_H
#define FCMULTIACCESSCHECKER_H

@class NSArray;


#import "FCAccessChecker.h"

@interface FCMultiAccessChecker : FCAccessChecker

@property (readonly, copy, nonatomic) NSArray *accessCheckers; // ivar: _accessCheckers


-(BOOL)canSynchronouslyCheckAccessToItem:(id)arg0 ;
-(BOOL)hasAccessToItem:(id)arg0 blockedReason:(*NSUInteger)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithAccessCheckers:(id)arg0 ;
-(void)checkAccessToItem:(id)arg0 withQualityOfService:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif