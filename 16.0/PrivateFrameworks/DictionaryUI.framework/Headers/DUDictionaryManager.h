// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DUDICTIONARYMANAGER_H
#define DUDICTIONARYMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface DUDictionaryManager : NSObject {
    BOOL _initiallyEmptyAssets;
}


@property (readonly) NSArray *availableDefinitionDictionaries; // ivar: _availableDefinitionDictionaries


+(id)assetManager;
-(BOOL)_hasDefinitionForTerm:(id)arg0 ;
-(NSInteger)_compareOrderOfDictionary:(id)arg0 withDictionary:(id)arg1 ;
-(id)_allAvailableDefinitionDictionaries;
-(id)_availableDictionaryAssets;
-(id)_definitionValuesForTerm:(id)arg0 ;
-(id)_dictionaryAssetType;
-(id)init;
-(void)_downloadDictionaryAssetCatalogWithTimeout:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_migrateInstalledStateForNewDictionaries:(id)arg0 ;


@end


#endif