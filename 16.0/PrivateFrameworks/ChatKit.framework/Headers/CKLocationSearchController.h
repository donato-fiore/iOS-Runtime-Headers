// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKLOCATIONSEARCHCONTROLLER_H
#define CKLOCATIONSEARCHCONTROLLER_H

@class NSString;
@protocol QLPreviewControllerDelegate;


#import "CKMessageTypeSearchController.h"

@interface CKLocationSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)cellClass;
+(id)indexingString;
+(id)reuseIdentifier;
+(id)sectionIdentifier;
+(id)sectionTitle;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(BOOL)handleSelectionForResult:(id)arg0 ;
-(BOOL)shouldStartMenuInteractionForResult:(id)arg0 ;
-(CGFloat)interGroupSpacing;
-(id)_activityItemProviderForResult:(id)arg0 ;
-(id)_mapItemForResult:(id)arg0 ;
-(id)additionalMenuElementsForResult:(id)arg0 ;
-(id)cellForSupplementryItemInCollectionView:(id)arg0 atIndexPath:(id)arg1 supplementryViewKind:(id)arg2 ;
-(id)chatGUIDForSearchableItem:(id)arg0 ;
-(id)detailsFilterQueriesForChatGUIDs:(id)arg0 ;
-(id)fetchAttributes;
-(id)filterQueries;
-(id)itemProviderForSearchResult:(id)arg0 ;
-(id)layoutGroupWithEnvironment:(id)arg0 ;
-(id)previewViewControllerForResult:(id)arg0 ;
-(id)queryAttributesForText:(id)arg0 ;
-(id)urlForQueryResult:(id)arg0 ;
-(void)fractionalWidth:(*CGFloat)arg0 count:(*NSUInteger)arg1 forLayoutWidth:(NSUInteger)arg2 ;
-(void)updateSupplementryViewIfNeeded:(id)arg0 atIndexPath:(id)arg1 ;


@end


#endif