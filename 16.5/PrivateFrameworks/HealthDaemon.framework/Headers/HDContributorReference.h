// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCONTRIBUTORREFERENCE_H
#define HDCONTRIBUTORREFERENCE_H

@class NSUUID, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HDContributorReference : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, nonatomic) NSInteger contributorType; // ivar: _contributorType
@property (readonly, copy, nonatomic) NSNumber *persistentID; // ivar: _persistentID


+(BOOL)supportsSecureCoding;
+(id)contributorReferenceForNoContributor;
+(id)contributorReferenceForOtherUserWithUUID:(id)arg0 ;
+(id)contributorReferenceForPersistentID:(id)arg0 ;
+(id)contributorReferenceForPrimaryUser;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif