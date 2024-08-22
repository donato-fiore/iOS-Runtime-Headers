// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSSHAREACTIVATIONOPTIONS_H
#define PKPASSSHAREACTIVATIONOPTIONS_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKPassShareActivationOption.h"

@interface PKPassShareActivationOptions : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *activationCode;
@property (readonly, nonatomic) NSArray *identifiers;
@property (readonly, nonatomic) NSString *localizationKeyPostfix;
@property (readonly, nonatomic) NSArray *options; // ivar: _options
@property (readonly, nonatomic) PKPassShareActivationOption *primaryOption;


+(BOOL)supportsSecureCoding;
+(id)optionsFromRemoteOptions:(id)arg0 localOptions:(id)arg1 ;
-(BOOL)containsOptionOfType:(NSUInteger)arg0 ;
-(BOOL)containsPinCode;
-(BOOL)containsVehicalEnteredPin;
-(BOOL)containsVehicleEnteredPin;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPassShareActivationOptions:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCarKeyIdentifiers:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDefaultIdentifierForType:(NSUInteger)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(id)optionOfType:(NSUInteger)arg0 ;
-(id)optionOfTypes:(id)arg0 ;
-(id)optionsExcludingIdentifier:(id)arg0 type:(NSUInteger)arg1 ;
-(id)optionsOfType:(NSUInteger)arg0 ;
-(id)optionsOfTypes:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif