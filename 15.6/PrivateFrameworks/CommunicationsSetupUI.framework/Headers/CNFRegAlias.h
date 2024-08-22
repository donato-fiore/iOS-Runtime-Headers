// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFREGALIAS_H
#define CNFREGALIAS_H

@class NSDate, IMAccount, NSString;

#import <Foundation/Foundation.h>


@interface CNFRegAlias : NSObject

@property (copy, nonatomic) NSDate *_expirationDate; // ivar: __expirationDate
@property (retain, nonatomic) IMAccount *account; // ivar: _account
@property (copy, nonatomic) NSString *alias; // ivar: _alias
@property (copy, nonatomic) NSString *deviceAliasIdentifier; // ivar: _deviceAliasIdentifier
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) NSInteger givenAliasType; // ivar: _givenAliasType
@property (readonly, retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isTemporary; // ivar: _isTemporary
@property (nonatomic, getter=isSelectedDeviceAlias) BOOL selectedDeviceAlias; // ivar: _selectedDeviceAlias
@property (readonly, nonatomic) NSInteger type;


-(BOOL)isDeviceAlias;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLocalPhoneNumberAlias;
-(BOOL)isPhoneNumberAliasOnPhoneNumberAccount;
-(BOOL)validate;
-(NSInteger)localizedCaseInsensitiveCompare:(id)arg0 ;
-(NSInteger)validationErrorReason;
-(NSInteger)validationStatus;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAccount:(id)arg0 alias:(id)arg1 ;
-(id)initWithAlias:(id)arg0 type:(NSInteger)arg1 selected:(BOOL)arg2 deviceAliasIdentifier:(id)arg3 ;


@end


#endif