// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMPROFILESCONTROLLER_H
#define RMPROFILESCONTROLLER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "RMProfilesAdapter.h"

@interface RMProfilesController : NSObject

@property (copy, nonatomic) NSString *profileIdentifierPrefix; // ivar: _profileIdentifierPrefix
@property (retain, nonatomic) RMProfilesAdapter *profilesAdapter; // ivar: _profilesAdapter


-(id)configurationByDeclarationKeyForConfigurations:(id)arg0 ;
-(id)declarationKeyForStore:(id)arg0 declaration:(id)arg1 ;
-(id)initWithProfileIdentifierPrefix:(id)arg0 ;
-(id)initWithProfilesAdapter:(id)arg0 profileIdentifierPrefix:(id)arg1 ;
-(id)installedProfileIdentifierByDeclarationKey;
-(id)installedProfileIdentifiers;
-(id)profileIdentifierForConfiguration:(id)arg0 ;
-(id)profileIdentifierForDeclaration:(id)arg0 store:(id)arg1 ;
-(id)profileNameForProfileIdentifier:(id)arg0 ;
-(void)_installProfileAtPath:(id)arg0 store:(id)arg1 declaration:(id)arg2 completionHandler:(id)arg3 ;
-(void)_installProfileData:(id)arg0 store:(id)arg1 declaration:(id)arg2 completionHandler:(id)arg3 ;
-(void)downloadAndInstallProfileConfiguration:(id)arg0 fromURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)downloadAndInstallProfileDeclaration:(id)arg0 store:(id)arg1 fromURL:(id)arg2 completionHandler:(id)arg3 ;
-(void)synchronizeWithDeclarationKeys:(id)arg0 returningNewDeclarationKeys:(*id)arg1 returningChangeDeclarationKeys:(*id)arg2 returningRemoveProfileIdentifiers:(*id)arg3 ;
-(void)uninstallProfileWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif