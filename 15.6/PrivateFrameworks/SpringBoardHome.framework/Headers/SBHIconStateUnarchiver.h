// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHICONSTATEUNARCHIVER_H
#define SBHICONSTATEUNARCHIVER_H

@protocol SBHIconStateUnarchiverDelegate, SBHIconStateUnarchiverIconSource;

#import <Foundation/Foundation.h>

#import "SBHIconModel.h"

@interface SBHIconStateUnarchiver : NSObject

@property (readonly, nonatomic) id *archive; // ivar: _archive
@property (retain, nonatomic) NSObject<SBHIconStateUnarchiverDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) SBHIconModel *iconModel; // ivar: _iconModel
@property (retain, nonatomic) NSObject<SBHIconStateUnarchiverIconSource> *iconSource; // ivar: _iconSource
@property (readonly, nonatomic) BOOL postNewsWidgetMigration; // ivar: _postNewsWidgetMigration
@property (nonatomic) BOOL removesEmptyFolders; // ivar: _removesEmptyFolders


+(void)_getFolderDisplayName:(*id)arg0 defaultDisplayName:(*id)arg1 uniqueIdentifier:(*id)arg2 forRepresentation:(id)arg3 iconSource:(id)arg4 ;
-(BOOL)_canAddIconDataSource:(id)arg0 toIcon:(id)arg1 ;
-(BOOL)_listsAllowRotatedLayoutForFolderClass:(Class)arg0 ;
-(Class)_folderClassForFolderType:(id)arg0 context:(id)arg1 ;
-(NSInteger)_suggestionSourceFromRepresentation:(id)arg0 ;
-(NSUInteger)_allowedGridSizeClassesForDock;
-(NSUInteger)_allowedGridSizeClassesForFolderClass:(Class)arg0 ;
-(NSUInteger)_allowedGridSizeClassesForTodayList;
-(NSUInteger)_listRotatedLayoutClusterGridSizeClass;
-(NSUInteger)_maxIconCountForDock;
-(NSUInteger)_maxListCountForFolders;
-(id)_applicationIconFromRepresentation:(id)arg0 context:(id)arg1 ;
-(id)_customIconElementFromRepresentation:(id)arg0 context:(id)arg1 ;
-(id)_folderFromRepresentation:(id)arg0 withContext:(id)arg1 ;
-(id)_iconFromRepresentation:(id)arg0 withContext:(id)arg1 ;
-(id)_listFromRepresentation:(id)arg0 listGridSize:(struct SBHIconGridSize )arg1 listWithNonDefaultSizedIconsGridSize:(struct SBHIconGridSize )arg2 gridSizeClassSizes:(struct SBHIconGridSizeClassSizes )arg3 listRotatedLayoutClusterGridSizeClass:(NSUInteger)arg4 listAllowedGridSizeClasses:(NSUInteger)arg5 listAddOptions:(NSUInteger)arg6 identifier:(id)arg7 context:(id)arg8 overflow:(id)arg9 ;
-(id)_listWithIcons:(id)arg0 listGridSize:(struct SBHIconGridSize )arg1 listWithNonDefaultSizedIconsGridSize:(struct SBHIconGridSize )arg2 gridSizeClassSizes:(struct SBHIconGridSizeClassSizes )arg3 listRotatedLayoutClusterGridSizeClass:(NSUInteger)arg4 listAllowedGridSizeClasses:(NSUInteger)arg5 listAddOptions:(NSUInteger)arg6 identifier:(id)arg7 folder:(id)arg8 overflow:(id)arg9 ;
-(id)_newFolderIconForFolder:(id)arg0 ;
-(id)_nodeFromRepresentation:(id)arg0 context:(id)arg1 ;
-(id)_widgetIconFromRepresentation:(id)arg0 context:(id)arg1 ;
-(id)effectiveDelegate;
-(id)init;
-(id)initWithArchive:(id)arg0 ;
-(id)initWithArchive:(id)arg0 iconModel:(id)arg1 ;
-(struct SBHIconGridSize )_listGridSizeForFolderClass:(Class)arg0 ;
-(struct SBHIconGridSize )_listWithNonDefaultSizedIconsGridSizeForFolderClass:(Class)arg0 ;
-(struct SBHIconGridSizeClassSizes )_gridSizeClassSizes;
-(void)_getFolderDisplayName:(*id)arg0 defaultDisplayName:(*id)arg1 uniqueIdentifier:(*id)arg2 forRepresentation:(id)arg3 ;


@end


#endif