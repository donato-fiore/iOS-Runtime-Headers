// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSAUXILIARYREGISTRATIONREQUIREMENTS_H
#define PKPASSAUXILIARYREGISTRATIONREQUIREMENTS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKPassAuxiliaryRegistrationDecryptionCSRMetadata.h"
#import "PKPassAuxiliaryRegistrationSignatureCSRMetadata.h"

@interface PKPassAuxiliaryRegistrationRequirements : NSObject <NSSecureCoding>



@property (readonly, nonatomic) PKPassAuxiliaryRegistrationDecryptionCSRMetadata *deviceDecryptionCSRMetadata; // ivar: _deviceDecryptionCSRMetadata
@property (readonly, nonatomic) PKPassAuxiliaryRegistrationSignatureCSRMetadata *deviceSignatureCSRMetadata; // ivar: _deviceSignatureCSRMetadata


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif