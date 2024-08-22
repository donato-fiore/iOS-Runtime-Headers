// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKPASSSEARCHCONTROLLER_H
#define CKPASSSEARCHCONTROLLER_H

@class NSString;
@protocol QLPreviewControllerDelegate;


#import "CKMessageTypeSearchController.h"

@interface CKPassSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)previewControllerPresentsModally;
+(BOOL)supportsQuicklookForResult:(id)arg0 ;
+(Class)cellClass;
+(NSUInteger)recencyRankedTargetResultCount;
+(id)indexingString;
+(id)reuseIdentifier;
+(id)sectionIdentifier;
+(id)sectionTitle;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(CGFloat)interGroupSpacing;
-(id)_activityItemProviderForResult:(id)arg0 ;
-(id)cellForSupplementryItemInCollectionView:(id)arg0 atIndexPath:(id)arg1 supplementryViewKind:(id)arg2 ;
-(id)chatGUIDForSearchableItem:(id)arg0 ;
-(id)detailsFilterQueriesForChatGUIDs:(id)arg0 ;
-(id)fetchAttributes;
-(id)filterQueries;
-(id)layoutGroupWithEnvironment:(id)arg0 ;
-(id)previewViewControllerForResult:(id)arg0 ;
-(id)queryAttributesForText:(id)arg0 ;
-(void)updateSupplementryViewIfNeeded:(id)arg0 atIndexPath:(id)arg1 ;


@end


#endif