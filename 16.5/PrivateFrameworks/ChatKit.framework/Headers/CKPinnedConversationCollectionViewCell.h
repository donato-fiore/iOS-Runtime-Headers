// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKPINNEDCONVERSATIONCOLLECTIONVIEWCELL_H
#define CKPINNEDCONVERSATIONCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSArray;
@protocol CKPinnedConversationCollectionViewCellDelegate;


#import "CKConversationListAccessoryView.h"
#import "CKPinnedConversationView.h"

@interface CKPinnedConversationCollectionViewCell : UICollectionViewCell

@property (nonatomic) BOOL allowActivitySuppressionWhenSelected; // ivar: _allowActivitySuppressionWhenSelected
@property (retain, nonatomic) CKConversationListAccessoryView *checkboxAccessoryView; // ivar: _checkboxAccessoryView
@property (weak, nonatomic) NSObject<CKPinnedConversationCollectionViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger editingMode; // ivar: _editingMode
@property (nonatomic, setter=setJittering:) BOOL isJittering;
@property (nonatomic) BOOL isPreparingForReuse; // ivar: _isPreparingForReuse
@property (nonatomic, setter=setShowingCheckboxAccessory:) BOOL isShowingCheckboxAccessory; // ivar: _isShowingCheckboxAccessory
@property (nonatomic, setter=setShowingUnpinAccessory:) BOOL isShowingUnpinAccessory; // ivar: _isShowingUnpinAccessory
@property (retain, nonatomic) NSArray *linkInteractions; // ivar: _linkInteractions
@property (retain, nonatomic) CKPinnedConversationView *pinnedConversationView; // ivar: _pinnedConversationView
@property (nonatomic) BOOL showsBackgroundViewWhenSelected; // ivar: _showsBackgroundViewWhenSelected
@property (retain, nonatomic) CKConversationListAccessoryView *unpinAccessoryView; // ivar: _unpinAccessoryView


+(id)_jitterRotationAnimation;
+(id)_jitterXTranslationAnimation;
+(id)_jitterYTranslationAnimation;
+(id)checkmarkAccessoryView;
+(id)reuseIdentifier;
-(CGFloat)accessorySizeForLayoutStyle:(NSInteger)arg0 ;
-(id)configurationState;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )checkboxFrame;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_createCheckboxAccessoryIfNecessary;
-(void)_createUnpinAccessoryIfNecessary;
-(void)_updateActivitySupressionForState:(id)arg0 ;
-(void)_updateGhostedAppearance;
-(void)_updateZPositionForState:(id)arg0 ;
-(void)configureLinkInteractionsFor:(id)arg0 ;
-(void)didMoveToSuperview;
-(void)dragStateDidChange:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)unpinButtonTapped:(id)arg0 ;
-(void)updateCheckboxAccessoryImageForCurrentLayoutStyle;
-(void)updateConfigurationUsingState:(id)arg0 ;
-(void)updateUnpinAccessoryImageForCurrentLayoutStyle;


@end


#endif