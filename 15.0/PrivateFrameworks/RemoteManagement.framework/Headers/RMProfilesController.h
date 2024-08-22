// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMPROFILESCONTROLLER_H
#define RMPROFILESCONTROLLER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "RMProfilesAdapter.h"

@interface RMProfilesController : NSObject

@property (copy, nonatomic) NSString *profileIdentifierPrefix; // ivar: _profileIdentifierPrefix
@property (retain, nonatomic) RMProfilesAdapter *profilesAdapter; // ivar: _profilesAdapter


-(id)_overrideProfileIdentifierInProfileData:(id)arg0 profileIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithProfileIdentifierPrefix:(id)arg0 ;
-(id)initWithProfilesAdapter:(id)arg0 profileIdentifierPrefix:(id)arg1 ;
-(id)installedProfileIdentifiers;
-(id)profileIdentifierForConfiguration:(id)arg0 ;
-(id)profileIdentifierForDeclaration:(id)arg0 store:(id)arg1 ;
-(id)profileNameForConfiguration:(id)arg0 ;
-(id)profileNameForProfileIdentifier:(id)arg0 ;
-(void)_installProfileAtPath:(id)arg0 identifier:(id)arg1 store:(id)arg2 completionHandler:(id)arg3 ;
-(void)_installProfileData:(id)arg0 profileIdentifier:(id)arg1 store:(id)arg2 completionHandler:(id)arg3 ;
-(void)downloadAndInstallProfileConfiguration:(id)arg0 fromURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)downloadAndInstallProfileDeclaration:(id)arg0 store:(id)arg1 fromURL:(id)arg2 completionHandler:(id)arg3 ;
-(void)uninstallProfileWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif