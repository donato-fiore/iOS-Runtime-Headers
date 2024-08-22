// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPDFOLLOWUPFACTORY_H
#define CDPDFOLLOWUPFACTORY_H


#import <Foundation/Foundation.h>


@interface CDPDFollowUpFactory : NSObject



+(id)contextToIdentifierMap;
-(BOOL)_isBiometricAuthEnrolled;
-(BOOL)_isBiometricCapable;
-(BOOL)_isManateeAvailable;
-(BOOL)_supportsFaceID;
-(NSUInteger)secretType;
-(id)_baseFollowUpItemWithContext:(id)arg0 ;
-(id)_confirmExistingSecretFollowUpAction;
-(id)_followUpActionForRecoveryKeyRepair;
-(id)_followUpActionForRepair;
-(id)_followUpForConfirmExistingSecretWithContext:(id)arg0 ;
-(id)_followUpForOfflineSecretChangeWithContext:(id)arg0 ;
-(id)_followUpForRecoveryKeyRepairWithContext:(id)arg0 ;
-(id)_followUpForRepairWithContext:(id)arg0 ;
-(id)_followUpForSecureTermsWithContext:(id)arg0 ;
-(id)_followUpForSettingUpBiometricsWithContext:(id)arg0 ;
-(id)_localizedStringForKey:(id)arg0 ;
-(id)_offlineSecretChangeFollowUpAction;
-(id)_secureTermsFollowUpAction;
-(id)followUpItemWithContext:(id)arg0 ;
-(id)identifierForContext:(id)arg0 ;


@end


#endif