// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFPERSONCOLLECTIONVIEWCELL_H
#define SFPERSONCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView, NSLayoutConstraint, UIColor, UIImpactFeedbackGenerator, UILabel, NSArray, UINotificationFeedbackGenerator, SFAirDropNode, NSProgress, UISelectionFeedbackGenerator, NSString;
@protocol SFPersonCollectionViewCellDelegate;


#import "SFCircleProgressView.h"
#import "SFPersonImageView.h"

@interface SFPersonCollectionViewCell : UICollectionViewCell

@property (nonatomic) CGFloat activitySheetWidth; // ivar: _activitySheetWidth
@property (retain, nonatomic) UIView *badgedContactView; // ivar: _badgedContactView
@property (nonatomic) NSInteger cellState; // ivar: _cellState
@property (retain, nonatomic) NSLayoutConstraint *cellWidthConstraint; // ivar: _cellWidthConstraint
@property (retain, nonatomic) NSLayoutConstraint *chickletToTitleSpacingConstraint; // ivar: _chickletToTitleSpacingConstraint
@property (retain, nonatomic) SFCircleProgressView *circleProgressView; // ivar: _circleProgressView
@property (nonatomic) BOOL darkStyleOnLegacyApp; // ivar: _darkStyleOnLegacyApp
@property (weak, nonatomic) NSObject<SFPersonCollectionViewCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIColor *fadedSecondLabelColor; // ivar: _fadedSecondLabelColor
@property (retain, nonatomic) SFPersonImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactHaptic; // ivar: _impactHaptic
@property (retain, nonatomic) UILabel *labelForPositioning; // ivar: _labelForPositioning
@property (retain, nonatomic) NSArray *largeTextConstraints; // ivar: _largeTextConstraints
@property (retain, nonatomic) NSLayoutConstraint *largeTextNameCenterYConstraint; // ivar: _largeTextNameCenterYConstraint
@property (retain, nonatomic) NSLayoutConstraint *nameFirstBaselineConstraint; // ivar: _nameFirstBaselineConstraint
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) UINotificationFeedbackGenerator *notificationHaptic; // ivar: _notificationHaptic
@property (retain, nonatomic) SFAirDropNode *person; // ivar: _person
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (retain, nonatomic) NSArray *progressKeyPaths; // ivar: _progressKeyPaths
@property (retain, nonatomic) id *progressToken; // ivar: _progressToken
@property (retain, nonatomic) NSArray *regularConstraints; // ivar: _regularConstraints
@property (retain, nonatomic) UILabel *secondLabel; // ivar: _secondLabel
@property (retain, nonatomic) NSLayoutConstraint *secondLabelFBConstraint; // ivar: _secondLabelFBConstraint
@property (retain, nonatomic) NSArray *secondLabelVisibleConstraintsArray; // ivar: _secondLabelVisibleConstraintsArray
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionHaptic; // ivar: _selectionHaptic
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (nonatomic) BOOL stateBeingRestored; // ivar: _stateBeingRestored


+(struct CGSize )_cachedPreferredItemSizeForString:(id)arg0 viewWidth:(CGFloat)arg1 sizeCategory:(id)arg2 ;
+(struct CGSize )_cachedPreferredItemSizeForViewWidth:(CGFloat)arg0 sizeCategory:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )calculatedContentSizeForSheetWidth:(CGFloat)arg0 sizeCategory:(id)arg1 ;
-(void)_updateForCurrentSizeCategory;
-(void)addObserverOfValuesForKeyPaths:(id)arg0 ofObject:(id)arg1 ;
-(void)deactivateHaptics;
-(void)dealloc;
-(void)fireHapticsForState:(NSInteger)arg0 ;
-(void)handleKVOUpdateForPerson:(id)arg0 keyPath:(id)arg1 ;
-(void)handleKVOUpdateForProgress:(id)arg0 keyPath:(id)arg1 ;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)prepareForReuse;
-(void)prepareHaptics;
-(void)prepareHapticsPreWarm:(BOOL)arg0 ;
-(void)removeObserverOfValuesForKeyPaths:(id)arg0 ofObject:(id)arg1 ;
-(void)resetTransferState;
-(void)restoreCellStateFromFinalTransferState:(NSInteger)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setupConstraints;
-(void)setupConstraintsYukon;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)triggerKVOForKeyPaths:(id)arg0 ofObject:(id)arg1 ;
-(void)updateNameLabel;
-(void)updatePersonIconView;
-(void)userDidCancel;
-(void)userDidSelect;


@end


#endif