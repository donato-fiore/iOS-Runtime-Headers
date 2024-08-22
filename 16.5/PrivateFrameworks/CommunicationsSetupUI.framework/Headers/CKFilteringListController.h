// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKFILTERINGLISTCONTROLLER_H
#define CKFILTERINGLISTCONTROLLER_H

@class PSListController, NSString, NSArray, NSDictionary, PSSpecifier, NSMutableArray;


#import "CKNSExtension.h"

@interface CKFilteringListController : PSListController

@property (nonatomic) BOOL addCheckmark; // ivar: _addCheckmark
@property (retain, nonatomic) id *beginMappingID; // ivar: _beginMappingID
@property (retain, nonatomic) CKNSExtension *ckExtension; // ivar: _ckExtension
@property (retain, nonatomic) NSString *currentExtensionID; // ivar: _currentExtensionID
@property (retain, nonatomic) NSArray *extensionIDArray; // ivar: _extensionIDArray
@property (retain, nonatomic) NSDictionary *extensionNameMapping; // ivar: _extensionNameMapping
@property (retain, nonatomic) PSSpecifier *selectedSpecifier; // ivar: _selectedSpecifier
@property (nonatomic) BOOL showingParentViewController; // ivar: _showingParentViewController
@property (nonatomic) NSInteger spamFilterState; // ivar: _spamFilterState
@property (retain, nonatomic) NSMutableArray *specifierListArray; // ivar: _specifierListArray


-(BOOL)verifyCurrentExtensionIDValidity;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(id)_syncManager;
-(id)getDefaultExtension;
-(id)getExtensionNameAndWarning:(id)arg0 ;
-(id)getSpamSpecifiers;
-(id)init;
-(id)isConversationListFilteringEnabled:(id)arg0 ;
-(id)isSpamFilteringEnabled:(id)arg0 ;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(unsigned char)enableSpamForExtensionID:(id)arg0 withName:(id)arg1 ;
-(void)_updateSMSFilteringParams;
-(void)appendAboutWiFiCallingFooterToGroupSpecifier:(id)arg0 ;
-(void)applicationDidResume;
-(void)applicationWillSuspend;
-(void)dealloc;
-(void)disableSpamFiltering;
-(void)enableSpamFiltering:(id)arg0 ;
-(void)endMatchingExtensions;
-(void)findSpamExtensions;
-(void)grayOutSMSFilteringIfNecessary:(id)arg0 ;
-(void)setConversationListFilteringEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setIsSpamFilteringDefaultEnabled;
-(void)shouldShowPrivacyAccessWarning:(id)arg0 ;
-(void)showPrivacyLegalVC;
-(void)tappedNoFilterCell:(id)arg0 ;
-(void)tappedSpamAppCell:(id)arg0 ;
-(void)userChangedSpamFilteringSettings;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif