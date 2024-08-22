// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMTEMPLATESDATAVIEWINVOCATIONRESULT_H
#define REMTEMPLATESDATAVIEWINVOCATIONRESULT_H

@class NSArray;
@protocol NSSecureCoding;


#import "REMStoreInvocationResult.h"

@interface REMTemplatesDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding>



@property (readonly, nonatomic) NSArray *templateStorages; // ivar: _templateStorages


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTemplateStorages:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif