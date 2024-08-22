// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSHAREDACCOUNTCLOUDSTORE_H
#define PKSHAREDACCOUNTCLOUDSTORE_H

@class NSString, NSDate, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKSharedAccountCloudStore : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic, getter=isDirty) BOOL dirty; // ivar: _dirty
@property (copy, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (copy, nonatomic) NSArray *sharedAccountCloudStoreZones; // ivar: _sharedAccountCloudStoreZones


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSharedAccountCloudStore:(id)arg0 ;
-(NSUInteger)hash;
-(id)allPossibleZonesForAccountUser:(id)arg0 access:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithArray:(id)arg0 lastUpdated:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)primaryZoneForAccountUser:(id)arg0 access:(NSUInteger)arg1 ;
-(id)sharedAccountCloudStoreZonesWithAccess:(NSUInteger)arg0 ;
-(id)sharedAccountCloudStoreZonesWithAccess:(NSUInteger)arg0 forAccountUser:(id)arg1 ;
-(id)sharedAccountZoneWithName:(id)arg0 access:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif