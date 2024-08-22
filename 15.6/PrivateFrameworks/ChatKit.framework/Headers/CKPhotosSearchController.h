// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKPHOTOSSEARCHCONTROLLER_H
#define CKPHOTOSSEARCHCONTROLLER_H

@class NSString;
@protocol QLPreviewControllerDelegate, QLPreviewControllerConformingDelegate;


#import "CKMessageTypeSearchController.h"

@interface CKPhotosSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate, QLPreviewControllerConformingDelegate>



@property (nonatomic) NSUInteger contentMode; // ivar: _contentMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsMacSelection;
+(BOOL)supportsQuicklookForResult:(id)arg0 ;
+(Class)cellClass;
+(id)indexingString;
+(id)relativeDateFormatter;
+(id)reuseIdentifier;
+(id)sectionIdentifier;
+(id)sectionTitle;
-(BOOL)__im_ff_commSafetyUIEnabled;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(BOOL)wantsHeaderSection;
-(CGFloat)_internalInterGroupSpacing;
-(CGFloat)interGroupSpacing;
-(Class)headerOverrideClass;
-(NSUInteger)maxResultsForMode:(NSUInteger)arg0 ;
-(id)_activityItemProviderForResult:(id)arg0 ;
-(id)_additionalMenuElementsForResult:(id)arg0 ;
-(id)cellForSupplementryItemInCollectionView:(id)arg0 atIndexPath:(id)arg1 supplementryViewKind:(id)arg2 ;
-(id)chatGUIDForSearchableItem:(id)arg0 ;
-(id)detailsFilterQueriesForChatGUIDs:(id)arg0 ;
-(id)fetchAttributes;
-(id)filterQueries;
-(id)filterQueriesBase;
-(id)filterQueriesWithCommSafety;
-(id)initWithSectionIndex:(NSUInteger)arg0 ;
-(id)itemProviderForSearchResult:(id)arg0 ;
-(id)layoutGroupWithEnvironment:(id)arg0 ;
-(id)previewViewControllerForResult:(id)arg0 ;
-(id)queryAttributesForText:(id)arg0 ;
-(id)queryResultsForItems:(id)arg0 ;
-(id)sectionSubtitle;
-(struct NSDirectionalEdgeInsets )additionalGroupInsets;
-(void)_filterControlTapped:(id)arg0 ;
-(void)fractionalWidth:(*CGFloat)arg0 count:(*NSUInteger)arg1 forLayoutWidth:(NSUInteger)arg2 ;
-(void)saveAttachmentForResult:(id)arg0 ;
-(void)updateSupplementryViewIfNeeded:(id)arg0 atIndexPath:(id)arg1 ;


@end


#endif