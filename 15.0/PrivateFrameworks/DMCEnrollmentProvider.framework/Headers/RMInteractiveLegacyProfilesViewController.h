// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMINTERACTIVELEGACYPROFILESVIEWCONTROLLER_H
#define RMINTERACTIVELEGACYPROFILESVIEWCONTROLLER_H

@class PSListController;


#import "RMDeclarationInfo.h"
#import "RMLegacyProfilesSpecifierProvider.h"

@interface RMInteractiveLegacyProfilesViewController : PSListController

@property (retain, nonatomic) RMDeclarationInfo *declarationInfo; // ivar: _declarationInfo
@property (retain, nonatomic) RMLegacyProfilesSpecifierProvider *legacyProfilesProvider; // ivar: _legacyProfilesProvider


-(id)_isActivatedProfile:(id)arg0 ;
-(id)_specifiersForProfile;
-(id)specifiers;
-(void)_activateProfile:(id)arg0 specifier:(id)arg1 ;
-(void)_presentAlertForError:(id)arg0 isActivating:(BOOL)arg1 ;
-(void)_processUserInfoDictionary;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif