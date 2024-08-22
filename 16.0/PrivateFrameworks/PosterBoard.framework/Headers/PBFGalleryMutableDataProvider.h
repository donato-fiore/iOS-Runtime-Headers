// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFGALLERYMUTABLEDATAPROVIDER_H
#define PBFGALLERYMUTABLEDATAPROVIDER_H



#import "PBFPosterGalleryDataProvider.h"

@interface PBFGalleryMutableDataProvider : PBFPosterGalleryDataProvider



-(BOOL)_isSectionIdentifierValid:(id)arg0 ;
-(BOOL)_isSectionTypeValid:(NSInteger)arg0 ;
-(BOOL)_isValidItem:(id)arg0 withinSectionIdentifier:(id)arg1 ;
-(void)addSectionWithIdentifier:(id)arg0 localizedTitle:(id)arg1 type:(NSInteger)arg2 items:(id)arg3 ;
-(void)addToSection:(id)arg0 item:(id)arg1 ;
-(void)configureForGallery:(id)arg0 ;
-(void)executeBulkUpdate:(id)arg0 ;
-(void)insertSectionWithIdentifier:(id)arg0 toIndex:(NSUInteger)arg1 localizedTitle:(id)arg2 localizedSubtitle:(id)arg3 type:(NSInteger)arg4 items:(id)arg5 ;
-(void)removeFromSection:(id)arg0 item:(id)arg1 ;
-(void)removeSectionWithIdentifier:(id)arg0 ;
-(void)setItems:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)sortItemsWithinSectionAtIdentifier:(id)arg0 comparator:(id)arg1 ;
-(void)sortSectionsWithComparator:(id)arg0 ;


@end


#endif