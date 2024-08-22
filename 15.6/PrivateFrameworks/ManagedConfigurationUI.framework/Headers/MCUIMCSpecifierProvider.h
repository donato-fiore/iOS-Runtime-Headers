// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCUIMCSPECIFIERPROVIDER_H
#define MCUIMCSPECIFIERPROVIDER_H



#import "MCUISpecifierProvider.h"

@interface MCUIMCSpecifierProvider : MCUISpecifierProvider



-(BOOL)_showProfileDetailPageForUserEnrollmentProfile:(id)arg0 ;
-(id)_specifierForAppSigner:(id)arg0 ;
-(id)_specifierForBlockedApp:(id)arg0 ;
-(id)specifiers;
-(void)_loadAppSignerFromSpecifier:(id)arg0 ;
-(void)_presentModalNavController:(id)arg0 ;
-(void)_presentViewController:(id)arg0 ;
-(void)_selectInstalledPhoneProfileIdentifier:(id)arg0 ;
-(void)_selectUninstalledPhoneProfileIdentifier:(id)arg0 ;
-(void)loadProfileFromSpecifier:(id)arg0 ;


@end


#endif