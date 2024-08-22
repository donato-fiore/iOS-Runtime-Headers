// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMEDIAENTITIESDATASOURCEFACTORY_H
#define VUIMEDIAENTITIESDATASOURCEFACTORY_H


#import <Foundation/Foundation.h>


@interface VUIMediaEntitiesDataSourceFactory : NSObject



+(id)_dataSourceForShelfType:(NSInteger)arg0 withLibrary:(id)arg1 withOwnerIdentifier:(id)arg2 ;
+(id)_fetchRequestForGenre:(id)arg0 ;
+(id)dataSourceForCategoryType:(NSInteger)arg0 ;
+(id)dataSourceForCategoryType:(NSInteger)arg0 withFamilyMember:(id)arg1 ;
+(id)dataSourceForCategoryType:(NSInteger)arg0 withLibrary:(id)arg1 ;
+(id)dataSourceForCategoryType:(NSInteger)arg0 withLibrary:(id)arg1 withOwnerIdentifier:(id)arg2 ;
+(id)dataSourceForFetchRequest:(id)arg0 withLibrary:(id)arg1 ;
+(id)dataSourceForGenre:(id)arg0 withFamilyMember:(id)arg1 ;
+(id)dataSourceForGenre:(id)arg0 withLibrary:(id)arg1 ;
+(id)dataSourceForShelf:(NSInteger)arg0 withFamilyMember:(id)arg1 ;
+(id)dataSourceForShelf:(NSInteger)arg0 withLibrary:(id)arg1 ;
+(id)episodesDataSourceForSeasonIdentifier:(id)arg0 showIdentifier:(id)arg1 withFamilyMember:(id)arg2 ;
+(id)episodesDataSourceForShowIdentifier:(id)arg0 withFamilyMember:(id)arg1 ;
+(id)seasonsDataSourceForSeasonIdentifier:(id)arg0 showIdentifier:(id)arg1 withFamilyMember:(id)arg2 ;
+(id)seasonsDataSourceForShowIdentifier:(id)arg0 withFamilyMember:(id)arg1 ;


@end


#endif