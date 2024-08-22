// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSCONTACTRECORD_H
#define DNDSCONTACTRECORD_H

@class NSString, NSSet;
@protocol NSCopying, NSMutableCopying, DNDSBackingStoreRecord;

#import <Foundation/Foundation.h>


@interface DNDSContactRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>



@property (readonly, copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *emailAddresses; // ivar: _emailAddresses
@property (readonly, copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (readonly, copy, nonatomic) NSString *middleName; // ivar: _middleName
@property (readonly, copy, nonatomic) NSString *nickName; // ivar: _nickName
@property (readonly, copy, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (readonly, copy, nonatomic) NSSet *phoneNumbers; // ivar: _phoneNumbers
@property (readonly) Class superclass;


+(id)migrateDictionaryRepresentation:(id)arg0 fromVersionNumber:(NSUInteger)arg1 toVersionNumber:(NSUInteger)arg2 ;
+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithContactIdentifier:(id)arg0 firstName:(id)arg1 middleName:(id)arg2 lastName:(id)arg3 nickName:(id)arg4 organizationName:(id)arg5 phoneNumbers:(id)arg6 emailAddresses:(id)arg7 ;
-(id)_initWithRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif