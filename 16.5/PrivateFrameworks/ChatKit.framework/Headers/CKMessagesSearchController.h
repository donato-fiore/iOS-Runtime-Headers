// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMESSAGESSEARCHCONTROLLER_H
#define CKMESSAGESSEARCHCONTROLLER_H

@class NSString;
@protocol CKMessageSearchResultCellDelegate;


#import "CKMessageTypeSearchController.h"

@interface CKMessagesSearchController : CKMessageTypeSearchController <CKMessageSearchResultCellDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsMenuInteraction;
+(BOOL)supportsQuicklookForResult:(id)arg0 ;
+(Class)cellClass;
+(id)reuseIdentifier;
+(id)sectionIdentifier;
+(id)sectionTitle;
-(BOOL)applyLayoutMarginsToLayoutGroup;
-(CGFloat)widthForDeterminingAvatarVisibility;
-(NSUInteger)maxResultsForMode:(NSUInteger)arg0 ;
-(id)cellForItemInCollectionView:(id)arg0 atIndex:(NSInteger)arg1 withIdentifier:(id)arg2 ;
-(id)customLayoutSectionForEnvironment:(id)arg0 ;
-(id)fetchAttributes;
-(id)queryAttributesForText:(id)arg0 ;
-(struct NSDirectionalEdgeInsets )additionalGroupInsets;
-(void)searchWithText:(id)arg0 mode:(NSUInteger)arg1 ;


@end


#endif