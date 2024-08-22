// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMEVENTKITBRIDGINGDATAVIEWINVOCATION_FETCHINCOMPLETEREMINDERSWITHDUEDATE_H
#define REMEVENTKITBRIDGINGDATAVIEWINVOCATION_FETCHINCOMPLETEREMINDERSWITHDUEDATE_H

@class NSDate, NSArray;
@protocol NSSecureCoding;


#import "REMStoreInvocation.h"

@interface REMEventKitBridgingDataViewInvocation_fetchIncompleteRemindersWithDueDate : REMStoreInvocation <NSSecureCoding>



@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSArray *listIDs; // ivar: _listIDs
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithListIDs:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif