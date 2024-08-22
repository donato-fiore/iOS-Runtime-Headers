// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTEHOMEMESSAGEDESTINATION_H
#define HMDREMOTEHOMEMESSAGEDESTINATION_H

@class NSUUID, NSNumber;


#import "HMDRemoteMessageDestination.h"

@interface HMDRemoteHomeMessageDestination : HMDRemoteMessageDestination

@property (readonly, nonatomic) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly, nonatomic) NSNumber *queueTimeout; // ivar: _queueTimeout


+(id)shortDescription;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)initWithTarget:(id)arg0 ;
-(id)initWithTarget:(id)arg0 homeUUID:(id)arg1 ;
-(id)initWithTarget:(id)arg0 homeUUID:(id)arg1 queueTimeout:(id)arg2 ;
-(id)privateDescription;
-(id)shortDescription;


@end


#endif