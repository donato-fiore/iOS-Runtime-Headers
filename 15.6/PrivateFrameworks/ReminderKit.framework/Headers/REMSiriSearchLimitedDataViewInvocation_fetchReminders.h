// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMSIRISEARCHLIMITEDDATAVIEWINVOCATION_FETCHREMINDERS_H
#define REMSIRISEARCHLIMITEDDATAVIEWINVOCATION_FETCHREMINDERS_H

@class NSNumber, NSDate, NSString;
@protocol NSSecureCoding;


#import "REMStoreInvocation.h"

@interface REMSiriSearchLimitedDataViewInvocation_fetchReminders : REMStoreInvocation <NSSecureCoding>



@property (readonly, nonatomic) NSNumber *completed; // ivar: _completed
@property (readonly, nonatomic) NSDate *dueAfter; // ivar: _dueAfter
@property (readonly, nonatomic) NSDate *dueBefore; // ivar: _dueBefore
@property (readonly, nonatomic) NSNumber *hasLocation; // ivar: _hasLocation
@property (readonly, nonatomic) NSString *location; // ivar: _location
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 dueAfter:(id)arg1 dueBefore:(id)arg2 isCompleted:(id)arg3 hasLocation:(id)arg4 location:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif