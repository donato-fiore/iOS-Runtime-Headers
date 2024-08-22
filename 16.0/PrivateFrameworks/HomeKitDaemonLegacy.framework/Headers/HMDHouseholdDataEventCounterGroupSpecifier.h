// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHOUSEHOLDDATAEVENTCOUNTERGROUPSPECIFIER_H
#define HMDHOUSEHOLDDATAEVENTCOUNTERGROUPSPECIFIER_H

@class NSDate, NSString, NSUUID;
@protocol HMDEventCounterGroupSpecifying;

#import <Foundation/Foundation.h>


@interface HMDHouseholdDataEventCounterGroupSpecifier : NSObject <HMDEventCounterGroupSpecifying>



@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *groupName; // ivar: _groupName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)specifierWithGroupName:(id)arg0 homeUUID:(id)arg1 date:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroupName:(id)arg0 homeUUID:(id)arg1 date:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif