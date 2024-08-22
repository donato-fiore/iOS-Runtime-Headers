// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KCSHARINGGROUPFETCHREQUEST_H
#define KCSHARINGGROUPFETCHREQUEST_H

@class NSPredicate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KCSharingGroupFetchRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSPredicate *predicate; // ivar: _predicate


+(BOOL)supportsSecureCoding;
+(id)all;
+(id)groupName:(id)arg0 ;
+(id)pending;
+(id)predicateMatchingGroupsWithInviteStatus:(NSInteger)arg0 ;
+(id)predicateMatchingGroupsWithName:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif