// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSHARINGCARKEYINVITATION_H
#define PKSHARINGCARKEYINVITATION_H

@class NSString;


#import "PKSharingCarKeyMessage.h"
#import "PKPassShareActivationOptions.h"
#import "PKSharingMesageProprietaryData.h"

@interface PKSharingCarKeyInvitation : PKSharingCarKeyMessage

@property (readonly, nonatomic) PKPassShareActivationOptions *activationOptions; // ivar: _activationOptions
@property (readonly, nonatomic) NSString *brandIdentifier;
@property (readonly, nonatomic) NSString *partnerIdentifier;
@property (readonly, nonatomic) PKSharingMesageProprietaryData *proprietaryData; // ivar: _proprietaryData
@property (readonly, nonatomic) NSUInteger radioTechnology;
@property (readonly, nonatomic) NSString *readerIdentifier;
@property (readonly, nonatomic) NSString *vehicleIssuer;
@property (readonly, nonatomic) NSString *vehicleModel;


+(BOOL)supportsSecureCoding;
+(id)_activationOptionsFromDictionary:(id)arg0 ;
+(void)_mergeActivationOptions:(id)arg0 intoDictionary:(id)arg1 ;
-(BOOL)configureWithContent:(id)arg0 ;
-(id)initWithRawInvite:(id)arg0 shareIdentifier:(id)arg1 radioTechnology:(NSUInteger)arg2 vehicleModel:(id)arg3 vehicleIssuer:(id)arg4 readerIdentifier:(id)arg5 partnerIdentifier:(id)arg6 brandIdentifier:(id)arg7 carKeySharingDict:(id)arg8 proprietaryData:(id)arg9 activationOptions:(id)arg10 displayInformation:(id)arg11 ;


@end


#endif