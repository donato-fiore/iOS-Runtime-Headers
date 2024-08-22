// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONVERSATIONLISTEMBEDDEDCOLLECTIONVIEWCELL_H
#define CKCONVERSATIONLISTEMBEDDEDCOLLECTIONVIEWCELL_H

@class UICollectionViewListCell, NSString, UITableViewCell, NSArray;
@protocol CKConversationListCellLayoutConfigurable, CKConversationListEmbeddedCollectionViewCellDelegate;


#import "CKConversationListCellLayout.h"

@interface CKConversationListEmbeddedCollectionViewCell : UICollectionViewListCell <CKConversationListCellLayoutConfigurable>



@property (retain, nonatomic) CKConversationListCellLayout *cellLayout; // ivar: _cellLayout
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger editingMode; // ivar: _editingMode
@property (weak, nonatomic) NSObject<CKConversationListEmbeddedCollectionViewCellDelegate> *embeddedCellDelegate; // ivar: _embeddedCellDelegate
@property (retain, nonatomic) UITableViewCell *embeddedTableViewCell; // ivar: _embeddedTableViewCell
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *linkInteractions; // ivar: _linkInteractions
@property (nonatomic) BOOL shouldUseSidebarBackgroundConfiguration; // ivar: _shouldUseSidebarBackgroundConfiguration
@property (readonly) Class superclass;


+(Class)_contentViewClass;
-(id)configurationState;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)insertCellAccessoryConfiguration;
-(id)leadingEditingAccessoryConfigurationsForEditingMode:(NSUInteger)arg0 ;
-(id)multiselectCellAccessoryConfiguration;
-(id)pinButton;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(id)trailingEditingAccessoryConfigurationsForEditingMode:(NSUInteger)arg0 ;
-(void)configureLinkInteractionsFor:(id)arg0 ;
-(void)forwardStateToEmbeddedCell:(id)arg0 ;
-(void)pinButtonTapped:(id)arg0 ;
-(void)prepareForReuse;
-(void)updateConfigurationUsingState:(id)arg0 ;


@end


#endif