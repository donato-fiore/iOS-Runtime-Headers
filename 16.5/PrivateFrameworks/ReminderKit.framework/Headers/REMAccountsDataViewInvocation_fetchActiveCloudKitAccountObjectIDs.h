// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMACCOUNTSDATAVIEWINVOCATION_FETCHACTIVECLOUDKITACCOUNTOBJECTIDS_H
#define REMACCOUNTSDATAVIEWINVOCATION_FETCHACTIVECLOUDKITACCOUNTOBJECTIDS_H

@protocol NSSecureCoding;


#import "REMStoreInvocation.h"

@interface REMAccountsDataViewInvocation_fetchActiveCloudKitAccountObjectIDs : REMStoreInvocation <NSSecureCoding>



@property (readonly, nonatomic) NSInteger fetchOption; // ivar: _fetchOption


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFetchOption:(NSInteger)arg0 ;
-(id)name;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif