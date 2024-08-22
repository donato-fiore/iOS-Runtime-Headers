// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMSMARTLISTSDATAVIEWINVOCATION_FETCHCUSTOMSMARTLISTSINACCOUNT_H
#define REMSMARTLISTSDATAVIEWINVOCATION_FETCHCUSTOMSMARTLISTSINACCOUNT_H

@protocol NSSecureCoding;


#import "REMStoreInvocation.h"
#import "REMObjectID.h"

@interface REMSmartListsDataViewInvocation_fetchCustomSmartListsInAccount : REMStoreInvocation <NSSecureCoding>



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