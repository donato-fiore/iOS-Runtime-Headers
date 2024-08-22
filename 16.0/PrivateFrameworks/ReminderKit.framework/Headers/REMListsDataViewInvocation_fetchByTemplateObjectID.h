// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMLISTSDATAVIEWINVOCATION_FETCHBYTEMPLATEOBJECTID_H
#define REMLISTSDATAVIEWINVOCATION_FETCHBYTEMPLATEOBJECTID_H

@protocol NSSecureCoding;


#import "REMStoreInvocation.h"
#import "REMObjectID.h"

@interface REMListsDataViewInvocation_fetchByTemplateObjectID : REMStoreInvocation <NSSecureCoding>



@property (readonly, nonatomic) REMObjectID *templateObjectID; // ivar: _templateObjectID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTemplateObjectID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif