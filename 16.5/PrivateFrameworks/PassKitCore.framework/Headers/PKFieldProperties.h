// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKFIELDPROPERTIES_H
#define PKFIELDPROPERTIES_H

@class NSArray, NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKFieldProperties : NSObject <NSSecureCoding>



@property (nonatomic, getter=isECP2Field) BOOL ECP2Field; // ivar: _ECP2Field
@property (copy, nonatomic) NSArray *TCIs; // ivar: _TCIs
@property (readonly, nonatomic) NSInteger accessTerminalSubtype; // ivar: _accessTerminalSubtype
@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (nonatomic) BOOL authenticationRequired; // ivar: _authenticationRequired
@property (nonatomic) BOOL backgroundTransaction; // ivar: _backgroundTransaction
@property (nonatomic) NSInteger carKeyBrandCode; // ivar: _carKeyBrandCode
@property (copy, nonatomic) NSString *credentialIdentifier; // ivar: _credentialIdentifier
@property (copy, nonatomic) NSArray *merchantIdentifiers; // ivar: _merchantIdentifiers
@property (nonatomic) NSUInteger pairingRequested; // ivar: _pairingRequested
@property (copy, nonatomic) NSData *readerIdentifier; // ivar: _readerIdentifier
@property (nonatomic) BOOL secondaryPropertiesAcquired; // ivar: _secondaryPropertiesAcquired
@property (nonatomic) BOOL secondaryPropertiesRequired; // ivar: _secondaryPropertiesRequired
@property (readonly, nonatomic) BOOL shouldIgnore;
@property (readonly, nonatomic) NSUInteger technology; // ivar: _technology
@property (readonly, nonatomic) NSInteger terminalType; // ivar: _terminalType
@property (readonly, nonatomic) NSInteger valueAddedServiceMode; // ivar: _valueAddedServiceMode


+(BOOL)supportsSecureCoding;
+(id)fieldPropertiesForFieldNotification:(id)arg0 ;
+(id)fieldPropertiesForSTSFieldNotification:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTechnology:(NSUInteger)arg0 terminalType:(NSInteger)arg1 accessTerminalSubtype:(NSInteger)arg2 valueAddedServiceMode:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif