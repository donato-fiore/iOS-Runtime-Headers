// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKLINKSEARCHCONTROLLER_H
#define CKLINKSEARCHCONTROLLER_H



#import "CKMessageTypeSearchController.h"

@interface CKLinkSearchController : CKMessageTypeSearchController



+(BOOL)handleSelectionForResult:(id)arg0 ;
+(Class)cellClass;
+(id)_activityItemProviderForResult:(id)arg0 ;
+(id)_additionalMenuElementsForResult:(id)arg0 ;
+(id)indexingString;
+(id)itemProviderForSearchResult:(id)arg0 ;
+(id)previewViewControllerForResult:(id)arg0 ;
+(id)reuseIdentifier;
+(id)sectionIdentifier;
+(id)sectionTitle;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(BOOL)handleSelectionForResult:(id)arg0 ;
-(BOOL)shouldStartMenuInteractionForResult:(id)arg0 ;
-(CGFloat)interGroupSpacing;
-(Class)_richLinkDatasourceClass;
-(id)_activityItemProviderForResult:(id)arg0 ;
-(id)_additionalMenuElementsForResult:(id)arg0 ;
-(id)cellForSupplementryItemInCollectionView:(id)arg0 atIndexPath:(id)arg1 supplementryViewKind:(id)arg2 ;
-(id)detailsFilterQueriesForChatGUIDs:(id)arg0 ;
-(id)fetchAttributes;
-(id)filterQueries;
-(id)itemProviderForSearchResult:(id)arg0 ;
-(id)layoutGroupWithEnvironment:(id)arg0 ;
-(id)previewViewControllerForResult:(id)arg0 ;
-(id)queryAttributesForText:(id)arg0 ;
-(id)queryResultsForItems:(id)arg0 ;
-(void)deleteAttachmentForResult:(id)arg0 ;
-(void)fractionalWidth:(*CGFloat)arg0 count:(*NSUInteger)arg1 forLayoutWidth:(NSUInteger)arg2 ;
-(void)postProcessAndUpdateResults:(id)arg0 ;
-(void)updateSupplementryViewIfNeeded:(id)arg0 atIndexPath:(id)arg1 ;


@end


#endif