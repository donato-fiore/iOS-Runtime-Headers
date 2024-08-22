// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMEVENTKITBRIDGINGDATAVIEWINVOCATION_FETCHREMINDERS_H
#define REMEVENTKITBRIDGINGDATAVIEWINVOCATION_FETCHREMINDERS_H

@class NSArray;
@protocol NSSecureCoding;


#import "REMStoreInvocation.h"

@interface REMEventKitBridgingDataViewInvocation_fetchReminders : REMStoreInvocation <NSSecureCoding>



@property (readonly, nonatomic) NSArray *listIDs; // ivar: _listIDs


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithListIDs:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif