// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSAUXILIARYREGISTRATIONREQUIREMENTS_H
#define PKPASSAUXILIARYREGISTRATIONREQUIREMENTS_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPassAuxiliaryRegistrationRequirements : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *allRequirements;
@property (readonly, nonatomic) NSArray *deviceDecryptionRequirements; // ivar: _deviceDecryptionRequirements
@property (readonly, nonatomic) NSArray *deviceSignatureRequirements; // ivar: _deviceSignatureRequirements


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPassAuxiliaryRegistrationRequirements:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif