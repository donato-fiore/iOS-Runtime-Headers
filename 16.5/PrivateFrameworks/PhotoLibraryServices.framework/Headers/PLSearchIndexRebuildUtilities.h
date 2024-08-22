// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSEARCHINDEXREBUILDUTILITIES_H
#define PLSEARCHINDEXREBUILDUTILITIES_H


#import <Foundation/Foundation.h>


@interface PLSearchIndexRebuildUtilities : NSObject



+(BOOL)_deviceLocaleDidChange:(id)arg0 ;
+(BOOL)_featureFlagsDidChange:(id)arg0 ;
+(BOOL)_resetSearchIndexRebuildStateForEntityName:(id)arg0 photoLibrary:(id)arg1 ;
+(BOOL)_sceneTaxonomySHAsDidChange:(id)arg0 searchIndexInfo:(id)arg1 ;
+(BOOL)_searchIndexVersionDidChange:(id)arg0 ;
+(BOOL)_spotlightDidRequestRebuild:(id)arg0 ;
+(BOOL)setSearchIndexNeedsRebuildForPhotoLibrary:(id)arg0 ;
+(NSUInteger)searchIndexRebuildReasonsForPhotoLibrary:(id)arg0 sceneTaxonomyDigests:(id)arg1 ;
+(NSUInteger)searchIndexRebuildTypeFromRebuildReasons:(NSUInteger)arg0 ;
+(id)_searchIndexRebuildStateKeyPathForEntityName:(id)arg0 ;
+(void)setSearchIndexRebuildCompleteForManagedObjects:(id)arg0 entityName:(id)arg1 ;


@end


#endif