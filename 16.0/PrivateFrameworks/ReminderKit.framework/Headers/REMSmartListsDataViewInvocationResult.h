// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMSMARTLISTSDATAVIEWINVOCATIONRESULT_H
#define REMSMARTLISTSDATAVIEWINVOCATIONRESULT_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding;


#import "REMStoreInvocationResult.h"

@interface REMSmartListsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *accountStorages; // ivar: _accountStorages
@property (readonly, nonatomic) NSDictionary *parentListStorages; // ivar: _parentListStorages
@property (readonly, nonatomic) NSArray *smartListStorages; // ivar: _smartListStorages


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSmartListStorages:(id)arg0 ;
-(id)initWithSmartListStorages:(id)arg0 accountStorages:(id)arg1 parentListStorages:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif