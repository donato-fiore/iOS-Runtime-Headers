// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMLISTSDATAVIEWINVOCATION_DATAACCESSFETCHBYEXTERNALIDENTIFIER_H
#define REMLISTSDATAVIEWINVOCATION_DATAACCESSFETCHBYEXTERNALIDENTIFIER_H

@class NSArray;
@protocol NSSecureCoding;


#import "REMStoreInvocation.h"
#import "REMObjectID.h"

@interface REMListsDataViewInvocation_dataAccessFetchByExternalIdentifier : REMStoreInvocation <NSSecureCoding>



@property (readonly, nonatomic) REMObjectID *accountObjectID; // ivar: _accountObjectID
@property (readonly, nonatomic) NSArray *externalIdentifiers; // ivar: _externalIdentifiers


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExternalIdentifiers:(id)arg0 accountObjectID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif