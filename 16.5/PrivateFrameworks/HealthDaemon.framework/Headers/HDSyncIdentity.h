// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSYNCIDENTITY_H
#define HDSYNCIDENTITY_H

@class NSUUID, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDSyncIdentity : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *databaseIdentifier; // ivar: _databaseIdentifier
@property (readonly, copy, nonatomic) NSUUID *hardwareIdentifier; // ivar: _hardwareIdentifier
@property (readonly, copy, nonatomic) NSString *instanceDiscriminator; // ivar: _instanceDiscriminator


+(BOOL)supportsSecureCoding;
+(id)legacySyncIdentity;
+(id)syncIdentityWithCodable:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)codableSyncIdentity;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHardwareIdentifier:(id)arg0 databaseIdentifier:(id)arg1 instanceDiscriminator:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif