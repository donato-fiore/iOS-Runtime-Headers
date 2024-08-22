// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSHARINGPUSHPROVISIONINGINVITATION_H
#define PKSHARINGPUSHPROVISIONINGINVITATION_H

@class NSArray, NSString;


#import "PKSharingMessage.h"
#import "PKPassShareActivationOptions.h"
#import "PKSharingMesageProprietaryData.h"

@interface PKSharingPushProvisioningInvitation : PKSharingMessage

@property (readonly, nonatomic) PKPassShareActivationOptions *activationOptions; // ivar: _activationOptions
@property (readonly, nonatomic) NSArray *metadatas; // ivar: _metadatas
@property (readonly, nonatomic) PKSharingMesageProprietaryData *proprietaryData; // ivar: _proprietaryData
@property (readonly, nonatomic) NSString *provisioningCredentialHash;


+(BOOL)supportsSecureCoding;
-(BOOL)configureWithContent:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithDisplayInformation:(id)arg0 provisioningVouchersByOEM:(id)arg1 activationOptions:(id)arg2 proprietaryData:(id)arg3 ;


@end


#endif