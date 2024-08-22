// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMTIPKITDATAVIEWINVOCATION_FETCHCOMPLETEDREMINDERSCOUNTINLIST_H
#define REMTIPKITDATAVIEWINVOCATION_FETCHCOMPLETEDREMINDERSCOUNTINLIST_H

@protocol NSSecureCoding;


#import "REMStoreInvocation.h"
#import "REMObjectID.h"

@interface REMTipKitDataViewInvocation_fetchCompletedRemindersCountInList : REMStoreInvocation <NSSecureCoding>



@property (readonly, nonatomic) REMObjectID *listID; // ivar: _listID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithListID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif