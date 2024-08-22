// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCONVERSATIONLISTEMBEDDEDCOLLECTIONVIEWCELL_H
#define CKCONVERSATIONLISTEMBEDDEDCOLLECTIONVIEWCELL_H

@class UICollectionViewListCell, UITableViewCell;
@protocol CKConversationListEmbeddedCollectionViewCellDelegate;



@interface CKConversationListEmbeddedCollectionViewCell : UICollectionViewListCell

@property (nonatomic) NSUInteger editingMode; // ivar: _editingMode
@property (weak, nonatomic) NSObject<CKConversationListEmbeddedCollectionViewCellDelegate> *embeddedCellDelegate; // ivar: _embeddedCellDelegate
@property (retain, nonatomic) UITableViewCell *embeddedTableViewCell; // ivar: _embeddedTableViewCell
@property (nonatomic) BOOL shouldUseSidebarBackgroundConfiguration; // ivar: _shouldUseSidebarBackgroundConfiguration


+(Class)_contentViewClass;
-(BOOL)__im_ff_uiConsistencyEnabled;
-(NSUInteger)_viewConfigurationState;
-(id)configurationState;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)insertCellAccessoryConfiguration;
-(id)leadingEditingAccessoryConfigurationsForEditingMode:(NSUInteger)arg0 ;
-(id)multiselectCellAccessoryConfiguration;
-(id)pinButton;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(id)trailingEditingAccessoryConfigurationsForEditingMode:(NSUInteger)arg0 ;
-(void)_updateViewConfigurationsWithState:(NSUInteger)arg0 ;
-(void)forwardStateToEmbeddedCell:(NSUInteger)arg0 ;
-(void)pinButtonTapped:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif