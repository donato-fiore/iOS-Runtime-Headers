// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNACCOUNT_H
#define CNACCOUNT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNAccount : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *externalIdentifierString; // ivar: _externalIdentifierString
@property (readonly, nonatomic) int iOSLegacyIdentifier; // ivar: _iOSLegacyIdentifier
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier


+(BOOL)ios_requestAccountSyncWithOptions:(NSUInteger)arg0 ;
+(BOOL)requestAccountSyncWithDefaultOptions;
+(BOOL)requestAccountSyncWithOptions:(NSUInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)localAccount;
+(id)makeIdentifier;
+(id)makeIdentifierString;
+(id)os_log;
+(id)predicateForAccountForContainerWithIdentifier:(id)arg0 ;
+(id)predicateForAccountWithExternalIdentifier:(id)arg0 ;
+(id)predicateForAccountsWithIdentifiers:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExternalIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 externalIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 externalIdentifier:(id)arg1 iOSLegacyIdentifier:(int)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif