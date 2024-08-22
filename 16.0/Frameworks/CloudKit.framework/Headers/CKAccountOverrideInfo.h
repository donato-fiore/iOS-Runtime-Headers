// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKACCOUNTOVERRIDEINFO_H
#define CKACCOUNTOVERRIDEINFO_H

@class NSString, NSDictionary;
@protocol CKSQLiteItem, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKAccountOverrideInfo : NSObject <CKSQLiteItem, NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *accountID; // ivar: _accountID
@property (copy, nonatomic) NSDictionary *accountPropertyOverrides; // ivar: _accountPropertyOverrides
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *email; // ivar: _email
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *overridesByDataclass; // ivar: _overridesByDataclass
@property (readonly, nonatomic) NSString *password; // ivar: _password
@property (copy, nonatomic) NSString *secondEmail; // ivar: _secondEmail
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uniqueID;


+(BOOL)supportsSecureCoding;
+(id)anonymousAccount;
+(id)liveAccount;
-(BOOL)isEqual:(id)arg0 ;
-(id)CKPropertiesDescription;
-(id)_initWithEmail:(id)arg0 password:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccountID:(id)arg0 ;
-(id)initWithAltDSID:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEmail:(id)arg0 password:(id)arg1 ;
-(id)initWithSqliteRepresentation:(id)arg0 ;
-(id)sqliteRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif