// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RKBUNDLEDATAPROVIDER_H
#define RKBUNDLEDATAPROVIDER_H

@class NSURL, NSBundle, NSMutableDictionary;
@protocol RKDisplayStringsProvider, RKPolarityDataProvider;

#import <Foundation/Foundation.h>

#import "RKAssets.h"

@interface RKBundleDataProvider : NSObject <RKDisplayStringsProvider, RKPolarityDataProvider>



@property (readonly) NSURL *assetPlistURL; // ivar: _assetPlistURL
@property (readonly) RKAssets *assets; // ivar: _assets
@property (readonly) NSBundle *bundle; // ivar: _bundle
@property (readonly) NSMutableDictionary *displayStringsByPlatformByLanguage; // ivar: _displayStringsByPlatformByLanguage
@property (retain) NSMutableDictionary *localizationsByLanguageID; // ivar: _localizationsByLanguageID
@property (readonly) NSMutableDictionary *polarityMapsByLanguageID; // ivar: _polarityMapsByLanguageID


-(id)displayStringsForPlatform:(id)arg0 languageID:(id)arg1 ;
-(id)init;
-(id)initWithAssetPlist:(id)arg0 ;
-(id)initWithBundle:(id)arg0 ;
-(id)stringsFromTable:(id)arg0 forLanguageIdentifier:(id)arg1 ;


@end


#endif