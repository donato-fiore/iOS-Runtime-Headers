// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTUIEDITINGSERVER_H
#define PTUIEDITINGSERVER_H

@class NSDictionary, NSArray, NSMutableDictionary, NSMapTable, NSString;
@protocol PTSettingsKeyPathObserver, _PTSettingsRestoreDefaultsObserver, PTChoiceRowDataSource, PTEditingServerDataSource, PTEditingServerDelegate;

#import <Foundation/Foundation.h>


@interface PTUIEditingServer : NSObject <PTSettingsKeyPathObserver, _PTSettingsRestoreDefaultsObserver, PTChoiceRowDataSource>

 {
    id<PTEditingServerDataSource> *_dataSource;
    id<PTEditingServerDelegate> *_delegate;
    NSDictionary *_domainInfoByID;
    NSDictionary *_testRecipeInfoByID;
    NSArray *_domainGroupNames;
    NSMutableDictionary *_domainIDsByGroupName;
    NSMutableDictionary *_rootSettingsByDomainID;
    NSMutableDictionary *_proxyDefinitionsByDomainID;
    NSMutableDictionary *_testRecipeIDsByDomainID;
    NSMapTable *_moduleControllerByDomainID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forRemoteEditing; // ivar: _forRemoteEditing
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)choiceRow:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsForChoiceRow:(id)arg0 ;
-(id)_loadRootSettingsOrProxyForDomainID:(id)arg0 ;
-(id)_recipeIDForRow:(NSInteger)arg0 inSection:(NSInteger)arg1 ;
-(id)_settingsDomainGroupModule:(id)arg0 ;
-(id)_settingsDomainRow:(id)arg0 ;
-(id)_settingsGroupRow:(id)arg0 ;
-(id)_settingsSection;
-(id)_testRecipeSection;
-(id)choiceRow:(id)arg0 shortTitleForRow:(NSInteger)arg1 inSection:(NSInteger)arg2 ;
-(id)choiceRow:(id)arg0 titleForRow:(NSInteger)arg1 inSection:(NSInteger)arg2 ;
-(id)choiceRow:(id)arg0 titleForSection:(NSInteger)arg1 ;
-(id)choiceRow:(id)arg0 valueForRow:(NSInteger)arg1 inSection:(NSInteger)arg2 ;
-(id)displayNameForDomainID:(id)arg0 ;
-(id)domainGroupNames;
-(id)domainIDForRootSettings:(id)arg0 ;
-(id)domainIDsInGroup:(id)arg0 ;
-(id)groupNameForDomainID:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 delegate:(id)arg1 forRemoteEditing:(BOOL)arg2 ;
-(id)rootSettingsForDomainID:(id)arg0 ;
-(id)settingsEditingModule;
-(id)testRecipeIDsForDomainID:(id)arg0 ;
-(id)testRecipeSelectionModule;
-(id)titleForTestRecipeID:(id)arg0 ;
-(void)_enumerateDomainsWithOneOrMoreTestRecipesUsingBlock:(id)arg0 ;
-(void)proxyDefinitionChanged:(id)arg0 ;
-(void)reloadDomains;
-(void)reloadTestRecipes;
-(void)settings:(id)arg0 changedValueForKeyPath:(id)arg1 ;
-(void)settingsDidRestoreDefaults:(id)arg0 ;
-(void)settingsWillRestoreDefaults:(id)arg0 ;


@end


#endif