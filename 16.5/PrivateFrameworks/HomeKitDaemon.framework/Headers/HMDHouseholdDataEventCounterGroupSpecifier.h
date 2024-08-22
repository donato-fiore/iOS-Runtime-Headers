// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOUSEHOLDDATAEVENTCOUNTERGROUPSPECIFIER_H
#define HMDHOUSEHOLDDATAEVENTCOUNTERGROUPSPECIFIER_H

@class NSUUID;


#import "HMDDateCounterGroupSpecifier.h"

@interface HMDHouseholdDataEventCounterGroupSpecifier : HMDDateCounterGroupSpecifier

@property (readonly, nonatomic) NSUUID *homeUUID; // ivar: _homeUUID


+(BOOL)supportsSecureCoding;
+(id)specifierWithGroupName:(id)arg0 homeUUID:(id)arg1 date:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroupName:(id)arg0 homeUUID:(id)arg1 date:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif