// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMESSAGESEARCHRESULTCELL_H
#define CKMESSAGESEARCHRESULTCELL_H

@class UICollectionViewCell, CALayer, NSString, UITableViewCell<CKConversationSearchCellProtocol>;
@protocol CKConversationSearchCellDelegate, CKSearchResultCell, CKConversationListCellLayoutConfigurable, CKMessageSearchResultCellDelegate;


#import "CKConversationListCellLayout.h"
#import "CKSpotlightQueryResult.h"

@interface CKMessageSearchResultCell : UICollectionViewCell <CKConversationSearchCellDelegate, CKSearchResultCell, CKConversationListCellLayoutConfigurable>



@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing; // ivar: _ck_editing
@property (readonly, nonatomic) CALayer *bottomHairline; // ivar: _bottomHairline
@property (retain, nonatomic) CKConversationListCellLayout *cellLayout; // ivar: _cellLayout
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKMessageSearchResultCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets marginInsets; // ivar: _marginInsets
@property (retain, nonatomic) CKSpotlightQueryResult *result; // ivar: _result
@property (readonly, copy, nonatomic) NSString *resultIdentifier;
@property (retain, nonatomic) UITableViewCell<CKConversationSearchCellProtocol> *searchCell; // ivar: _searchCell
@property (copy, nonatomic) NSString *searchText; // ivar: _searchText
@property (nonatomic) BOOL shouldInsetResults; // ivar: _shouldInsetResults
@property (readonly) Class superclass;
@property (readonly, nonatomic) CALayer *topHairline; // ivar: _topHairline


+(id)reuseIdentifier;
-(CGFloat)widthForDeterminingAvatarVisibility;
-(NSUInteger)_viewConfigurationState;
-(id)configurationState;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)_updateViewConfigurationsWithState:(NSUInteger)arg0 ;
-(void)configureWithQueryResult:(id)arg0 searchText:(id)arg1 mode:(NSUInteger)arg2 ;
-(void)forwardStateToEmbeddedCell:(NSUInteger)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)refreshForSearchTextIfNeeded:(id)arg0 ;


@end


#endif