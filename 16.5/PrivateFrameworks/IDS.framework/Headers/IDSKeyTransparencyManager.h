// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSKEYTRANSPARENCYMANAGER_H
#define IDSKEYTRANSPARENCYMANAGER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface IDSKeyTransparencyManager : NSObject

@property (retain, nonatomic) NSDictionary *applicationToVerificationInfoProviders; // ivar: _applicationToVerificationInfoProviders


-(id)init;
-(id)verificationInfoProviderForApplication:(id)arg0 ;
-(id)verificationInfoProviderIdForApplication:(id)arg0 ;
-(void)fetchKTRegistrationStatusWithCompletion:(id)arg0 ;
-(void)getKeyTransparencyOptInEligiblityForApplication:(id)arg0 withCompletion:(id)arg1 ;
-(void)peerVerificationFinishedWithResults:(id)arg0 ;
-(void)registrationDataNeedsUpdate;
-(void)sendOptInUpdateForApplications:(id)arg0 withCompletion:(id)arg1 ;
-(void)sendOptInUpdateForApplicationsOptInState:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif