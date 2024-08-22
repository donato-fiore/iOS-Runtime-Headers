// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ZHUGESUPPORTCONFIGHELPER_H
#define ZHUGESUPPORTCONFIGHELPER_H

@class NSDictionary, NSMutableDictionary, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "ZhuGeSupportCache.h"

@interface ZhuGeSupportConfigHelper : NSObject

@property (readonly) NSDictionary *aliasesMap; // ivar: _aliasesMap
@property (readonly) NSMutableDictionary *allAliasesMap; // ivar: _allAliasesMap
@property (readonly) NSMutableArray *allFlexibleList; // ivar: _allFlexibleList
@property (readonly) NSMutableDictionary *allKeysConfig; // ivar: _allKeysConfig
@property (readonly) NSDictionary *extraAliasesMap; // ivar: _extraAliasesMap
@property (readonly) NSArray *extraFlexibleList; // ivar: _extraFlexibleList
@property (readonly) NSDictionary *extraKeysConfig; // ivar: _extraKeysConfig
@property (readonly) NSArray *flexibleList; // ivar: _flexibleList
@property (readonly) NSDictionary *keysConfig; // ivar: _keysConfig
@property (retain) ZhuGeSupportCache *propertiesCache; // ivar: _propertiesCache


-(id)extractPivotalConfWithError:(*id)arg0 ;
-(id)getConfigOfKey:(id)arg0 withError:(*id)arg1 ;
-(id)getConfiguredObfuscatedKey:(id)arg0 withError:(*id)arg1 ;
-(id)getPrimarykeyOfKey:(id)arg0 withError:(*id)arg1 ;
-(id)getPropertiesOfKey:(id)arg0 withError:(*id)arg1 ;
-(id)getSubkeyOfKey:(id)arg0 withError:(*id)arg1 ;
-(id)initWithRawConfig:(id)arg0 AndExtraRawConfig:(id)arg1 ;
-(id)isKeyAlias:(id)arg0 withError:(*id)arg1 ;
-(id)pickFlexibleFromUnionizedConfig:(id)arg0 withError:(*id)arg1 ;
-(id)propertiesByKey:(id)arg0 andSuperKeyRange:(struct _NSRange )arg1 withError:(*id)arg2 ;
-(id)propertiesOfKey:(id)arg0 withError:(*id)arg1 ;
-(id)sortAliasFromUnionizedConfig:(id)arg0 withError:(*id)arg1 ;
-(id)unionizeRawConfig:(id)arg0 withError:(*id)arg1 ;


@end


#endif