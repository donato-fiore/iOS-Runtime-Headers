// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BOOKMARKIMPORTER_H
#define BOOKMARKIMPORTER_H

@class WebBookmarkCollection, NSArray;

#import <Foundation/Foundation.h>


@interface BookmarkImporter : NSObject {
    WebBookmarkCollection *_collection;
    NSArray *_carrierBookmarkInfo;
    NSArray *_oldDeletedStaticBookmarks;
}




-(NSInteger)_currentDeviceClass;
-(id)_builtInBookmarkItemWithTemplate:(id)arg0 forLocale:(id)arg1 deviceClass:(NSInteger)arg2 ;
-(id)_builtinBookmarkWithInfo:(id)arg0 asCarrierBookmark:(BOOL)arg1 ;
-(id)_builtinFavoritesForLocale:(id)arg0 deviceClass:(NSInteger)arg1 ;
-(id)_carrierBundleBuiltinBookmarkInfo;
-(id)_googleChannelReplacementStringForDeviceClass:(NSInteger)arg0 ;
-(id)_lastImportedCarrierBookmarksInfo;
-(id)_myAccountBookmarkInfo;
-(id)_oldDeletedStaticBookmarks;
-(id)_uniqueYouTubeBookmarkFolderName;
-(id)initWithBookmarkCollection:(id)arg0 ;
-(id)test_builtinFavoritesForLocale:(id)arg0 deviceClass:(NSInteger)arg1 ;
-(void)_appendBookmarksFromSource:(id)arg0 toParent:(int)arg1 ;
-(void)_appendBuiltinBookmarkWithInfo:(id)arg0 toParent:(int)arg1 asCarrierBookmark:(BOOL)arg2 ;
-(void)_clearOldDeletedStaticBookmarks;
-(void)_getCarrierBundleBuiltinBookmarkInfoWithCompletion:(id)arg0 ;
-(void)_importCarrierBookmarksIfNecessary;
-(void)_importCarrierBookmarksIfNecessaryAsync;
-(void)_importFavoritesFolderBuiltinBookmarks;
-(void)_importRootFolderBuiltinBookmarks;
-(void)_setLastImportedCarrierBookmarksInfo:(id)arg0 ;
-(void)importBuiltinBookmarks;
-(void)migrateYouTubeBookmarks;


@end


#endif