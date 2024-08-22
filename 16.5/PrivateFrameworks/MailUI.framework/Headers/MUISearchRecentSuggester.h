// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUISEARCHRECENTSUGGESTER_H
#define MUISEARCHRECENTSUGGESTER_H

@class NSURL, NSArray, NSString, NSMutableSet;
@protocol EFLoggable, MUISearchSuggester, EFScheduler;

#import <Foundation/Foundation.h>


@interface MUISearchRecentSuggester : NSObject <EFLoggable, MUISearchSuggester>

 {
    os_unfair_lock_s _lock;
    NSURL *_storageURL;
    BOOL _needSave;
}


@property (readonly, nonatomic) NSArray *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<EFScheduler> *excludeFromBackupScheduler; // ivar: _excludeFromBackupScheduler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *logIdentifier;
@property (nonatomic) NSUInteger maxRecentCount; // ivar: _maxRecentCount
@property (retain, nonatomic) NSMutableSet *recentSearches; // ivar: _recentSearches
@property (readonly, nonatomic) BOOL shouldQueryForAsYouType;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *supportedCategories; // ivar: _supportedCategories


+(id)log;
+(id)suggesterWithPersistentDirectory:(id)arg0 ;
-(id)generateSuggestionsUsingPhraseManager:(id)arg0 handler:(id)arg1 ;
-(id)initWithPersistentDirectory:(id)arg0 ;
-(void)_excludeStorageURLFromBackup;
-(void)_removeOldSuggestions;
-(void)addSuggestion:(id)arg0 ;
-(void)dealloc;
-(void)deleteSuggestion:(id)arg0 ;
-(void)loadRecentSearches;
-(void)saveRecentSearches;


@end


#endif