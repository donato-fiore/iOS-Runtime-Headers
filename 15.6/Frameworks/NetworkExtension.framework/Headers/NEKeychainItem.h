// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEKEYCHAINITEM_H
#define NEKEYCHAINITEM_H

@class NSString, NSData;
@protocol NEPrettyDescription, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NEKeychainItem.h"

@interface NEKeychainItem : NSObject <NEPrettyDescription, NSCopying, NSSecureCoding>

 {
    NSString *_password;
    NSString *_identifier;
    NSData *_persistentReference;
}


@property (copy) NSString *accessGroup; // ivar: _accessGroup
@property NSInteger domain; // ivar: _domain
@property (copy) NSString *identifier;
@property (readonly) BOOL legacy; // ivar: _legacy
@property (copy) NEKeychainItem *oldItem; // ivar: _oldItem
@property (copy) NSString *password;
@property (copy) NSData *persistentReference;


+(BOOL)supportsSecureCoding;
-(BOOL)addOrUpdateWithConfiguration:(id)arg0 passwordType:(NSInteger)arg1 accountName:(id)arg2 identifierSuffix:(id)arg3 ;
-(BOOL)copyDataFromKeychainItem:(*void)arg0 outPassword:(*id)arg1 outIdentifier:(*id)arg2 outPersistentReference:(*id)arg3 ;
-(id)copyKindForPasswordType:(NSInteger)arg0 ;
-(id)copyPassword;
-(id)copyQueryWithReturnTypes:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 domain:(NSInteger)arg1 ;
-(id)initWithIdentifier:(id)arg0 domain:(NSInteger)arg1 accessGroup:(id)arg2 ;
-(id)initWithLegacyIdentifier:(id)arg0 domain:(NSInteger)arg1 ;
-(id)initWithLegacyIdentifier:(id)arg0 domain:(NSInteger)arg1 accessGroup:(id)arg2 ;
-(id)initWithPassword:(id)arg0 domain:(NSInteger)arg1 ;
-(id)initWithPassword:(id)arg0 domain:(NSInteger)arg1 accessGroup:(id)arg2 ;
-(id)initWithPersistentReference:(id)arg0 domain:(NSInteger)arg1 ;
-(id)initWithPersistentReference:(id)arg0 domain:(NSInteger)arg1 accessGroup:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)migrateFromPreferences:(struct __SCPreferences *)arg0 ;
-(void)remove;
-(void)syncUsingConfiguration:(id)arg0 accountName:(id)arg1 passwordType:(NSInteger)arg2 identifierSuffix:(id)arg3 ;


@end


#endif