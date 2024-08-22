// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSCORESPOTLIGHTINDEXER_H
#define PSCORESPOTLIGHTINDEXER_H

@class CSSearchQuery, NSMutableArray, NSDate, CSSearchableIndex, CSTopHitSearchQuery;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PSCoreSpotlightIndexer : NSObject

@property (retain, nonatomic) CSSearchQuery *hasItemsQuery; // ivar: _hasItemsQuery
@property (retain, nonatomic) NSMutableArray *indexFromControllerLog; // ivar: _indexFromControllerLog
@property (readonly, nonatomic) NSDate *lastIndexDate;
@property (readonly, nonatomic) BOOL needsIndex;
@property (retain, nonatomic) CSSearchableIndex *prefsSearchableIndex; // ivar: _prefsSearchableIndex
@property (retain, nonatomic) CSTopHitSearchQuery *searchQuery; // ivar: _searchQuery
@property (nonatomic) BOOL skipManifests; // ivar: _skipManifests
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *spotlightIndexQueue; // ivar: _spotlightIndexQueue


+(id)searchIndexIdentifier;
+(id)sharedInstance;
-(BOOL)controllerIsBlacklisted:(id)arg0 ;
-(id)_bundleForSpecifier:(id)arg0 parentBundle:(id)arg1 ;
-(id)_descriptionForSpecifierName:(id)arg0 withParentSpecifierNames:(id)arg1 ;
-(id)_keyValueDictionaryForURL:(id)arg0 ;
-(id)_rankingHintScoreForURL:(id)arg0 ;
-(id)_specifiersForSpecifier:(id)arg0 bundle:(id)arg1 parentBundle:(id)arg2 ;
-(id)_specifiersPlistPathForSpecifier:(id)arg0 bundle:(id)arg1 parentBundle:(id)arg2 ;
-(id)_urlForSpecifier:(id)arg0 identifier:(id)arg1 category:(id)arg2 childCategory:(*id)arg3 prefix:(id)arg4 path:(*id)arg5 baseURL:(id)arg6 shouldLinkToRow:(BOOL)arg7 ;
-(id)_urlsFromManifestForSpecifier:(id)arg0 bundle:(id)arg1 ;
-(id)blacklistedControllers;
-(id)csSearchableItemsFromSpecifiers:(id)arg0 bundle:(id)arg1 category:(id)arg2 pathURL:(id)arg3 withURLPrefix:(id)arg4 parentSpecifierNames:(id)arg5 ;
-(id)descriptionForCSSearchableItem:(id)arg0 ;
-(id)descriptionForCSSearchableItems:(id)arg0 ;
-(id)lastIndexBuild;
-(id)lastIndexLanguage;
-(id)manifestFromSpecifiers:(id)arg0 bundle:(id)arg1 category:(id)arg2 pathURL:(id)arg3 withURLPrefix:(id)arg4 parentSpecifierNames:(id)arg5 ;
-(id)manifestsFromDirectory:(id)arg0 ;
-(id)searchableFirstPartyItemClassIdentifier;
-(id)searchableItemAttributeSetClassIdenfitier;
-(id)searchableItemClassIdentifier;
-(id)searchableItemForSpecifier:(id)arg0 bundleID:(id)arg1 category:(id)arg2 keywords:(id)arg3 url:(id)arg4 description:(id)arg5 ;
-(id)searchableItemsFromManifest:(id)arg0 specifier:(id)arg1 bundle:(id)arg2 ;
-(id)searchableItemsFromManifestsForSpecifier:(id)arg0 bundle:(id)arg1 ;
-(id)searchableItemsFromSpecifiers:(id)arg0 bundle:(id)arg1 category:(id)arg2 pathURL:(id)arg3 withURLPrefix:(id)arg4 parentSpecifierNames:(id)arg5 ;
-(id)searchableThirdPartyItemClassIdentifier;
-(void)_deleteSpecifiers:(id)arg0 bundle:(id)arg1 category:(id)arg2 pathURL:(id)arg3 withURLPrefix:(id)arg4 completion:(id)arg5 ;
-(void)_indexChunkOfSearchableItems:(id)arg0 completionHandler:(id)arg1 ;
-(void)_indexSearchableItems:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteIndexWithCompletionBlock:(id)arg0 ;
-(void)deleteIndexWithDomainIdentifiers:(id)arg0 completionBlock:(id)arg1 ;
-(void)deleteSpecifiers:(id)arg0 bundle:(id)arg1 withURLPrefix:(id)arg2 waitForCompletion:(BOOL)arg3 completion:(id)arg4 ;
-(void)hasfirstPartyIndexItems:(id)arg0 ;
-(void)indexManifestBundlesAtURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)indexManifestBundlesAtURLs:(id)arg0 withCompletion:(id)arg1 ;
-(void)indexSpecifiers:(id)arg0 bundle:(id)arg1 withURLPrefix:(id)arg2 waitForCompletion:(BOOL)arg3 completion:(id)arg4 ;
-(void)indexThirdPartyAppsWithPrefix:(id)arg0 completion:(id)arg1 ;
-(void)performYukonManifestMigrationWithCompletion:(id)arg0 ;
-(void)reindexSpecifiersIfNeeded:(id)arg0 bundle:(id)arg1 withURLPrefix:(id)arg2 waitForCompletion:(BOOL)arg3 setHasIndexed:(BOOL)arg4 completion:(id)arg5 ;
-(void)setHasIndexed;
-(void)setLastIndexBuild:(id)arg0 ;
-(void)setLastIndexLanguage:(id)arg0 ;
// -(void)topHitSearchForString:(id)arg0 keyboardLanguage:(id)arg1 foundItemsHandler:(id)arg2 completionHandler:(unk)arg3  ;


@end


#endif