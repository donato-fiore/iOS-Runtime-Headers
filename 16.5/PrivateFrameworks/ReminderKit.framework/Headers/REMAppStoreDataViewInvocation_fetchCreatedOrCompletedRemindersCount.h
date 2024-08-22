// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMAPPSTOREDATAVIEWINVOCATION_FETCHCREATEDORCOMPLETEDREMINDERSCOUNT_H
#define REMAPPSTOREDATAVIEWINVOCATION_FETCHCREATEDORCOMPLETEDREMINDERSCOUNT_H

@class NSDate;
@protocol NSSecureCoding;


#import "REMStoreInvocation.h"

@interface REMAppStoreDataViewInvocation_fetchCreatedOrCompletedRemindersCount : REMStoreInvocation <NSSecureCoding>



@property (readonly, nonatomic) NSDate *fromDate; // ivar: _fromDate
@property (readonly, nonatomic) NSDate *toDate; // ivar: _toDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFromDate:(id)arg0 toDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif