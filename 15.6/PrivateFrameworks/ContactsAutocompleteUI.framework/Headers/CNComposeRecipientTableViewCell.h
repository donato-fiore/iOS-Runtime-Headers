// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCOMPOSERECIPIENTTABLEVIEWCELL_H
#define CNCOMPOSERECIPIENTTABLEVIEWCELL_H

@class NSArray, CNAvatarViewController, NSString, NSUUID;
@protocol NUIContainerViewDelegate, CNComposeRecipientTableViewCellDelegate;


#import "CNComposeTableViewCell.h"
#import "CNComposeRecipientActionButton.h"

@interface CNComposeRecipientTableViewCell : CNComposeTableViewCell <NUIContainerViewDelegate>



@property (retain, nonatomic) CNComposeRecipientActionButton *actionButton; // ivar: _actionButton
@property (nonatomic) NSUInteger actionType; // ivar: _actionType
@property (retain, nonatomic) NSArray *activeConstraints; // ivar: _activeConstraints
@property (readonly, nonatomic) CNAvatarViewController *avatarViewController; // ivar: _avatarViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<CNComposeRecipientTableViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSUUID *displaySessionUUID; // ivar: _displaySessionUUID
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldHighlightCompleteMatches; // ivar: _shouldHighlightCompleteMatches
@property (readonly) Class superclass;


+(BOOL)avatarsAreHidden;
+(CGFloat)additionalSeparatorInset;
+(id)_attributedStringForGroupMembersOfRecipient:(id)arg0 matchedStrings:(id)arg1 constrainedToWidth:(CGFloat)arg2 font:(id)arg3 ;
+(id)_attributedStringForListOfGroupMemberNames:(id)arg0 numberTruncated:(NSUInteger)arg1 ;
+(id)_attributedTitleForRecipient:(id)arg0 matchedStrings:(id)arg1 constrainedToWidth:(CGFloat)arg2 font:(id)arg3 ;
+(id)attributedStringWithBoldedRangesForMatchedStrings:(id)arg0 inString:(id)arg1 font:(id)arg2 boldAllMatches:(BOOL)arg3 ;
+(id)identifier;
-(BOOL)canCollapseRecipient;
-(BOOL)canExpandRecipient;
-(BOOL)supportsAvatarView;
-(CGFloat)trailingButtonWidth;
-(id)assembleContactAvatarsForRecipient:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)applyActionButtonTouchInsets;
-(void)assignContactAvatarsToController:(id)arg0 ;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg0 ;
-(void)labelsChangedWidth:(CGFloat)arg0 ;
-(void)prepareForReuse;
-(void)setRecipient:(id)arg0 ;
-(void)setupAvatarViewControllerWithSettings:(id)arg0 ;
-(void)updateButtonColor;
-(void)updateLabelsContrainedToWidth:(CGFloat)arg0 ;


@end


#endif