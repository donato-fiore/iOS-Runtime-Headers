// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFPROFILE_H
#define DMFPROFILE_H

@class NSString, NSArray, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DMFProfile : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL hasRemovalPasscode; // ivar: _hasRemovalPasscode
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isEncrypted; // ivar: _isEncrypted
@property (readonly, nonatomic) BOOL isLocked; // ivar: _isLocked
@property (readonly, nonatomic) BOOL isManaged; // ivar: _isManaged
@property (readonly, copy, nonatomic) NSString *organization; // ivar: _organization
@property (readonly, copy, nonatomic) NSArray *payloads; // ivar: _payloads
@property (readonly, copy, nonatomic) NSString *profileDescription; // ivar: _profileDescription
@property (readonly, nonatomic) NSInteger profileVersion; // ivar: _profileVersion
@property (readonly, copy, nonatomic) NSDictionary *restrictions; // ivar: _restrictions
@property (readonly, copy, nonatomic) NSArray *signerCertificates; // ivar: _signerCertificates
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 type:(NSUInteger)arg1 identifier:(id)arg2 profileVersion:(NSInteger)arg3 displayName:(id)arg4 organization:(id)arg5 profileDescription:(id)arg6 isManaged:(BOOL)arg7 isLocked:(BOOL)arg8 hasRemovalPasscode:(BOOL)arg9 isEncrypted:(BOOL)arg10 signerCertificates:(id)arg11 payloads:(id)arg12 restrictions:(id)arg13 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif