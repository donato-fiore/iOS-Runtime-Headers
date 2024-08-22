// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMLISTSDATAVIEWINVOCATION_USERACTIVITYFETCHBYEXTERNALIDENTIFIER_H
#define REMLISTSDATAVIEWINVOCATION_USERACTIVITYFETCHBYEXTERNALIDENTIFIER_H

@class NSString;
@protocol NSSecureCoding;


#import "REMStoreInvocation.h"
#import "REMObjectID.h"

@interface REMListsDataViewInvocation_userActivityFetchByExternalIdentifier : REMStoreInvocation <NSSecureCoding>



@property (readonly, nonatomic) REMObjectID *accountObjectID; // ivar: _accountObjectID
@property (readonly, nonatomic) NSString *externalIdentifier; // ivar: _externalIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExternalIdentifier:(id)arg0 accountObjectID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif