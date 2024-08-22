// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMREMINDERSDATAVIEWINVOCATION_FETCHBYEXTERNALIDENTIFIER_H
#define REMREMINDERSDATAVIEWINVOCATION_FETCHBYEXTERNALIDENTIFIER_H

@class NSArray;
@protocol NSSecureCoding;


#import "REMStoreInvocation.h"
#import "REMObjectID.h"

@interface REMRemindersDataViewInvocation_fetchByExternalIdentifier : REMStoreInvocation <NSSecureCoding>



@property (readonly, nonatomic) NSArray *externalIdentifiers; // ivar: _externalIdentifiers
@property (readonly, nonatomic) REMObjectID *listObjectID; // ivar: _listObjectID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExternalIdentifiers:(id)arg0 listObjectID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif