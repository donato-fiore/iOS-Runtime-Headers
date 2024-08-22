// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPUQUERYDATASOURCE_H
#define MPUQUERYDATASOURCE_H

@class NSArray, NSMutableSet, MPMediaItemCollection, MPMediaQuerySectionInfo, MPMediaQuery;


#import "MPUDataSource.h"

@interface MPUQueryDataSource : MPUDataSource {
    NSArray *_entities;
    NSMutableSet *_additionalUniqueItemPropertiesToFetch;
    BOOL _hasValidEmpty;
    BOOL _hasValidRepresentativeCollection;
    BOOL _invalidateWhenEnteringForeground;
    BOOL _isEmpty;
    MPMediaItemCollection *_representativeCollection;
    MPMediaQuerySectionInfo *_sectionInfo;
}


@property (nonatomic) BOOL ignoringInvalidationDueToBackgroundApplicationState; // ivar: _ignoringInvalidationDueToBackgroundApplicationState
@property (readonly, nonatomic) MPMediaQuery *query; // ivar: _query


-(BOOL)_deleteHidesFromCloudForIndex:(NSUInteger)arg0 hidesAll:(*BOOL)arg1 ;
-(BOOL)canEditEntityAtIndex:(NSUInteger)arg0 ;
-(BOOL)canSelectEntityAtIndex:(NSUInteger)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)showsEntityCountFooter;
-(BOOL)showsIndexBar;
-(NSInteger)editingTypeForEntityAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)count;
-(NSUInteger)hash;
-(NSUInteger)indexOfSectionForSectionTitleAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)_representativeCollection;
-(id)_sectionInfo;
-(id)entities;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntityType:(NSInteger)arg0 ;
-(id)initWithQuery:(id)arg0 entityType:(NSInteger)arg1 ;
-(id)localizedSectionIndexTitles;
-(id)localizedSectionTitleAtIndex:(NSUInteger)arg0 ;
-(id)queryForEntityAtIndex:(NSUInteger)arg0 ;
-(id)queryForEntityAtIndexPath:(id)arg0 ;
-(struct _NSRange )rangeOfSectionAtIndex:(NSUInteger)arg0 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_defaultMediaLibraryDidChangeNotification:(id)arg0 ;
-(void)_invalidateCalculatedEntities;
-(void)_invalidateForDisplayValuesChangeIfNeeded;
-(void)_invalidateIfNeeded;
-(void)_isCloudEnabledDidChangeNotification:(id)arg0 ;
-(void)_mediaLibraryDidChangeNotification:(id)arg0 ;
-(void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg0 ;
-(void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg0 ;
-(void)addAdditionalMediaEntityPropertiesToFetch:(id)arg0 ;
-(void)dealloc;
-(void)deleteEntityAtIndex:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeAdditionalMediaEntityPropertiesToFetch:(id)arg0 ;


@end


#endif