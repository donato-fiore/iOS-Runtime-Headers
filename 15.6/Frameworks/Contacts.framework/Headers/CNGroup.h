// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNGROUP_H
#define CNGROUP_H

@class NSDate, NSString, NSData;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CNGroup.h"

@interface CNGroup : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

 {
    CNGroup *_snapshot;
}


@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy, nonatomic) NSString *externalIdentifier; // ivar: _externalIdentifier
@property (readonly, copy, nonatomic) NSString *externalModificationTag; // ivar: _externalModificationTag
@property (readonly, copy, nonatomic) NSData *externalRepresentation; // ivar: _externalRepresentation
@property (readonly, copy, nonatomic) NSString *externalURI;
@property (readonly, copy, nonatomic) NSString *externalUUID; // ivar: _externalUUID
@property (readonly, nonatomic) int iOSLegacyIdentifier; // ivar: _iOSLegacyIdentifier
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) CNGroup *snapshot;


+(BOOL)supportsSecureCoding;
+(id)localizedStringForKey:(id)arg0 ;
+(id)makeIdentifier;
+(id)makeIdentifierString;
+(id)predicateForGroupWithNameMatching:(id)arg0 ;
+(id)predicateForGroupsInContainerWithIdentifier:(id)arg0 ;
+(id)predicateForGroupsWithIdentifiers:(id)arg0 ;
+(id)predicateForGroupsWithNameMatching:(id)arg0 ;
+(id)predicateForSubgroupsInGroupWithIdentifier:(id)arg0 ;
+(id)predicateForiOSLegacyIdentifier:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGroup:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 creationDate:(id)arg2 modificationDate:(id)arg3 iOSLegacyIdentifier:(int)arg4 ;
-(id)initWithName:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif