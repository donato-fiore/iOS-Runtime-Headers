// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDATECOUNTERGROUPSPECIFIER_H
#define HMDDATECOUNTERGROUPSPECIFIER_H

@class NSDate;


#import "HMDEventCounterGroupNameSpecifier.h"

@interface HMDDateCounterGroupSpecifier : HMDEventCounterGroupNameSpecifier

@property (readonly, nonatomic) NSDate *date; // ivar: _date


+(BOOL)supportsSecureCoding;
+(id)specifierWithGroupName:(id)arg0 date:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroupName:(id)arg0 date:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif