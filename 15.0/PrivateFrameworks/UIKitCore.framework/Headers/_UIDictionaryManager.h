// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDICTIONARYMANAGER_H
#define _UIDICTIONARYMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _UIDictionaryManager : NSObject

@property (readonly) NSArray *availableDefinitionDictionaries; // ivar: _availableDefinitionDictionaries


+(id)assetManager;
-(BOOL)_hasDefinitionForTerm:(id)arg0 ;
-(BOOL)_isTTYEnabled;
-(id)_allAvailableDefinitionDictionaries;
-(id)_availableDictionaryAssets;
-(id)_definitionValuesForTerm:(id)arg0 ;
-(id)_dictionaryAssetType;
-(id)init;
-(void)_downloadDictionaryAssetCatalog:(id)arg0 ;


@end


#endif