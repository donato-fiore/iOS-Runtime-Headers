// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKATTACHMENTSSEARCHCONTROLLER_H
#define CKATTACHMENTSSEARCHCONTROLLER_H

@class NSString;
@protocol QLPreviewControllerDelegate, QLPreviewControllerConformingDelegate;


#import "CKMessageTypeSearchController.h"

@interface CKAttachmentsSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate, QLPreviewControllerConformingDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsMacSelection;
+(BOOL)supportsQuicklookForResult:(id)arg0 ;
+(Class)cellClass;
+(id)indexingString;
+(id)reuseIdentifier;
+(id)sectionIdentifier;
+(id)sectionTitle;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(BOOL)handleSelectionForResult:(id)arg0 ;
-(CGFloat)interGroupSpacing;
-(NSUInteger)maxResultsForMode:(NSUInteger)arg0 ;
-(id)_activityItemProviderForResult:(id)arg0 ;
-(id)cellForItemInCollectionView:(id)arg0 atIndex:(NSInteger)arg1 withIdentifier:(id)arg2 ;
-(id)cellForSupplementryItemInCollectionView:(id)arg0 atIndexPath:(id)arg1 supplementryViewKind:(id)arg2 ;
-(id)chatGUIDForSearchableItem:(id)arg0 ;
-(id)detailsFilterQueriesForChatGUIDs:(id)arg0 ;
-(id)fetchAttributes;
-(id)filterQueries;
-(id)layoutGroupWithEnvironment:(id)arg0 ;
-(id)previewViewControllerForResult:(id)arg0 ;
-(id)queryAttributesForText:(id)arg0 ;
-(void)fractionalWidth:(*CGFloat)arg0 count:(*NSUInteger)arg1 forLayoutWidth:(NSUInteger)arg2 ;


@end


#endif