// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMTEMPLATESDATAVIEWINVOCATION_FETCHBYOBJECTIDS_H
#define REMTEMPLATESDATAVIEWINVOCATION_FETCHBYOBJECTIDS_H

@class NSSet;
@protocol NSSecureCoding;


#import "REMStoreInvocation.h"

@interface REMTemplatesDataViewInvocation_fetchByObjectIDs : REMStoreInvocation <NSSecureCoding>



@property (readonly, nonatomic) NSSet *objectIDs; // ivar: _objectIDs


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectIDs:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif