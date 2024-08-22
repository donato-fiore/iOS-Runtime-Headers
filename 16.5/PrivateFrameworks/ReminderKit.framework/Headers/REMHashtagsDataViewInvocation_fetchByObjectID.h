// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMHASHTAGSDATAVIEWINVOCATION_FETCHBYOBJECTID_H
#define REMHASHTAGSDATAVIEWINVOCATION_FETCHBYOBJECTID_H

@class NSArray;
@protocol NSSecureCoding;


#import "REMStoreInvocation.h"

@interface REMHashtagsDataViewInvocation_fetchByObjectID : REMStoreInvocation <NSSecureCoding>



@property (nonatomic) BOOL allowConcealedObjects; // ivar: _allowConcealedObjects
@property (readonly, nonatomic) NSArray *objectIDs; // ivar: _objectIDs


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectIDs:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif