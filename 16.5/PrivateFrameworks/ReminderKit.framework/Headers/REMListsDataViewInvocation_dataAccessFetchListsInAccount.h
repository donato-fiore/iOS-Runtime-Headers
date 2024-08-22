// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMLISTSDATAVIEWINVOCATION_DATAACCESSFETCHLISTSINACCOUNT_H
#define REMLISTSDATAVIEWINVOCATION_DATAACCESSFETCHLISTSINACCOUNT_H

@protocol NSSecureCoding;


#import "REMStoreInvocation.h"
#import "REMObjectID.h"

@interface REMListsDataViewInvocation_dataAccessFetchListsInAccount : REMStoreInvocation <NSSecureCoding>



@property (readonly, nonatomic) REMObjectID *accountObjectID; // ivar: _accountObjectID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParentAccountObjectID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif