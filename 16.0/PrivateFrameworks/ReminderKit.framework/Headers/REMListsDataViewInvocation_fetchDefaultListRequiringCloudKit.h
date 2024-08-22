// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMLISTSDATAVIEWINVOCATION_FETCHDEFAULTLISTREQUIRINGCLOUDKIT_H
#define REMLISTSDATAVIEWINVOCATION_FETCHDEFAULTLISTREQUIRINGCLOUDKIT_H

@protocol NSSecureCoding;


#import "REMStoreInvocation.h"
#import "REMObjectID.h"

@interface REMListsDataViewInvocation_fetchDefaultListRequiringCloudKit : REMStoreInvocation <NSSecureCoding>



@property (readonly, nonatomic) REMObjectID *accountObjectID; // ivar: _accountObjectID
@property (nonatomic) BOOL debug_useInMemoryPreferredDefaultListStorage; // ivar: _debug_useInMemoryPreferredDefaultListStorage


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccountObjectID:(id)arg0 debugUseInMemoryPreferredDefaultListStorage:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif