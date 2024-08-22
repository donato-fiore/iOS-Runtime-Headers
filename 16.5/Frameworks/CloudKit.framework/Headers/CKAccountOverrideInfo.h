// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKACCOUNTOVERRIDEINFO_H
#define CKACCOUNTOVERRIDEINFO_H

@class NSString, NSDictionary;
@protocol CKSQLiteItem, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKAccountOverrideInfo : NSObject <CKSQLiteItem, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *accountID; // ivar: _accountID
@property (readonly, copy, nonatomic) NSDictionary *accountPropertyOverrides; // ivar: _accountPropertyOverrides
@property (readonly, copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *email; // ivar: _email
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *overridesByDataclass; // ivar: _overridesByDataclass
@property (readonly, copy, nonatomic) NSString *password; // ivar: _password
@property (readonly, copy, nonatomic) NSString *recoveryKey; // ivar: _recoveryKey
@property (readonly, copy, nonatomic) NSString *secondEmail; // ivar: _secondEmail
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uniqueID;


+(BOOL)supportsSecureCoding;
+(id)anonymousAccount;
+(id)liveAccount;
-(BOOL)isEqual:(id)arg0 ;
-(id)CKPropertiesDescription;
-(id)_initWithEmail:(id)arg0 password:(id)arg1 recoveryKey:(id)arg2 ;
-(id)_initWithEmail:(id)arg0 password:(id)arg1 recoveryKey:(id)arg2 secondEmail:(id)arg3 accountID:(id)arg4 altDSID:(id)arg5 accountPropertyOverrides:(id)arg6 overridesByDataclass:(id)arg7 ;
-(id)copyWithAccountPropertyOverrides:(id)arg0 overridesByDataclass:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccountID:(id)arg0 ;
-(id)initWithAltDSID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEmail:(id)arg0 password:(id)arg1 ;
-(id)initWithEmail:(id)arg0 password:(id)arg1 recoveryKey:(id)arg2 ;
-(id)initWithEmail:(id)arg0 password:(id)arg1 recoveryKey:(id)arg2 secondEmail:(id)arg3 accountPropertyOverrides:(id)arg4 overridesByDataclass:(id)arg5 ;
-(id)initWithSqliteRepresentation:(id)arg0 ;
-(id)sqliteRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif