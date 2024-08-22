// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKHIGHLIGHTSSEARCHCONTROLLER_H
#define CKHIGHLIGHTSSEARCHCONTROLLER_H

@class NSString;
@protocol QLPreviewControllerDelegate, QLPreviewControllerConformingDelegate;


#import "CKMessageTypeSearchController.h"

@interface CKHighlightsSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate, QLPreviewControllerConformingDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsQuicklookForResult:(id)arg0 ;
+(id)indexingString;
+(id)itemTypeForResult:(id)arg0 ;
+(id)sectionIdentifier;
+(id)sectionTitle;
+(id)supportedCellClasses;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(BOOL)handleSelectionForResult:(id)arg0 ;
-(BOOL)shouldStartMenuInteractionForResult:(id)arg0 ;
-(CGFloat)interGroupSpacing;
-(id)_activityItemProviderForResult:(id)arg0 ;
-(id)_additionalMenuElementsForResult:(id)arg0 ;
-(id)cellForItemInCollectionView:(id)arg0 atIndex:(NSInteger)arg1 withIdentifier:(id)arg2 ;
-(id)cellForSupplementryItemInCollectionView:(id)arg0 atIndexPath:(id)arg1 supplementryViewKind:(id)arg2 ;
-(id)createFoundItemsHandler:(SEL)arg0 ;
-(id)detailsFilterQueriesForChatGUIDs:(id)arg0 ;
-(id)fetchAttributes;
-(id)filterQueries;
-(id)itemProviderForSearchResult:(id)arg0 ;
-(id)layoutGroupWithEnvironment:(id)arg0 ;
-(id)previewViewControllerForResult:(id)arg0 ;
-(id)queryAttributesForText:(id)arg0 ;
-(id)reuseIdentifierForIndex:(NSInteger)arg0 ;
-(void)deleteAttachmentForResult:(id)arg0 ;
-(void)fractionalWidth:(*CGFloat)arg0 count:(*NSUInteger)arg1 forLayoutWidth:(NSUInteger)arg2 ;
-(void)updateSupplementryViewIfNeeded:(id)arg0 atIndexPath:(id)arg1 ;


@end


#endif