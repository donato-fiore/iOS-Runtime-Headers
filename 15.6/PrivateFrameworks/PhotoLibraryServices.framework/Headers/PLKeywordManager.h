// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLKEYWORDMANAGER_H
#define PLKEYWORDMANAGER_H

@class PLPhotoLibraryPathManager, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLKeywordManager : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSMutableDictionary *_keywordCache;
}




+(id)_keywordsForAsset:(id)arg0 ;
+(id)keywordsForAsset:(id)arg0 ;
+(id)keywordsForAssetWithUUID:(id)arg0 managedObjectContext:(id)arg1 ;
+(id)keywordsForAssets:(id)arg0 ;
-(BOOL)_setKeyword:(id)arg0 forAssets:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)_setKeywords:(id)arg0 forAsset:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)setKeyword:(id)arg0 forAssets:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)setKeywords:(id)arg0 forAsset:(id)arg1 ;
-(BOOL)setKeywords:(id)arg0 forAssetUUID:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)_inq_keywordObjectsForKeywords:(id)arg0 managedObjectContext:(id)arg1 ;
-(id)initWithPathManager:(id)arg0 ;
-(void)_inq_loadKeywordsUsingContextIfNecessaryInManagedObjectContext:(id)arg0 ;
-(void)_invalidateKeywordCache;


@end


#endif