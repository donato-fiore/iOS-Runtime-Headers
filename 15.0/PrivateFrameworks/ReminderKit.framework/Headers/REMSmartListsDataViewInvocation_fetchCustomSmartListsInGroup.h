// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMSMARTLISTSDATAVIEWINVOCATION_FETCHCUSTOMSMARTLISTSINGROUP_H
#define REMSMARTLISTSDATAVIEWINVOCATION_FETCHCUSTOMSMARTLISTSINGROUP_H

@protocol NSSecureCoding;


#import "REMStoreInvocation.h"
#import "REMObjectID.h"

@interface REMSmartListsDataViewInvocation_fetchCustomSmartListsInGroup : REMStoreInvocation <NSSecureCoding>



@property (readonly, nonatomic) REMObjectID *groupObjectID; // ivar: _groupObjectID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParentGroupObjectID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif