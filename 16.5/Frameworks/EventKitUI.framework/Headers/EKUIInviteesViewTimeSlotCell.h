// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIINVITEESVIEWTIMESLOTCELL_H
#define EKUIINVITEESVIEWTIMESLOTCELL_H

@class UITableViewCell, UIView, NSDictionary, UILabel, NSLayoutConstraint, NSArray, UIImageView, NSMutableDictionary, NSDate, UIColor, UITextView, UIButton, UITapGestureRecognizer, NSTimeZone;



@interface EKUIInviteesViewTimeSlotCell : UITableViewCell

@property (nonatomic) CGRect andMoreBoundingRect; // ivar: _andMoreBoundingRect
@property (retain, nonatomic) UIView *andMoreDebugOverlay; // ivar: _andMoreDebugOverlay
@property (retain, nonatomic) NSDictionary *andMoreStringCache; // ivar: _andMoreStringCache
@property (retain, nonatomic) UILabel *bottomTimeLabel; // ivar: _bottomTimeLabel
@property (retain, nonatomic) NSLayoutConstraint *bottomTimeLabelHeightConstraint; // ivar: _bottomTimeLabelHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *bottomTimeLabelToTopTimeLabelConstraint; // ivar: _bottomTimeLabelToTopTimeLabelConstraint
@property (retain, nonatomic) NSArray *busyParticipants; // ivar: _busyParticipants
@property (nonatomic) BOOL checked; // ivar: _checked
@property (retain, nonatomic) UIImageView *checkmarkImageView; // ivar: _checkmarkImageView
@property (retain, nonatomic) NSMutableDictionary *colorToBusyImageAttributedString; // ivar: _colorToBusyImageAttributedString
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) UILabel *labelForTextSizeTesting; // ivar: _labelForTextSizeTesting
@property (readonly, nonatomic) UIColor *participantsTextColor;
@property (retain, nonatomic) UITextView *participantsTextView; // ivar: _participantsTextView
@property (retain, nonatomic) NSLayoutConstraint *participantsViewToBottomTimeLabelConstraint; // ivar: _participantsViewToBottomTimeLabelConstraint
@property (retain, nonatomic) NSLayoutConstraint *participantsViewToContentViewConstraint; // ivar: _participantsViewToContentViewConstraint
@property (retain, nonatomic) NSArray *persistentConstraints; // ivar: _persistentConstraints
@property (retain, nonatomic) NSArray *proposedBy; // ivar: _proposedBy
@property (retain, nonatomic) UILabel *proposedByLabel; // ivar: _proposedByLabel
@property (retain, nonatomic) NSLayoutConstraint *proposedByMaxHeightConstraint; // ivar: _proposedByMaxHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *proposedByMinHeightConstraint; // ivar: _proposedByMinHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *proposedTimeLabelToBottomTimeLabelConstraint; // ivar: _proposedTimeLabelToBottomTimeLabelConstraint
@property (nonatomic) BOOL searchInProgress; // ivar: _searchInProgress
@property (copy, nonatomic) id *showAllConflictedParticipantsTapped; // ivar: _showAllConflictedParticipantsTapped
@property (nonatomic) BOOL showAllParticipants; // ivar: _showAllParticipants
@property (retain, nonatomic) UIButton *showPreviewButton; // ivar: _showPreviewButton
@property (copy, nonatomic) id *showPreviewOfEventAtTime; // ivar: _showPreviewOfEventAtTime
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) UITapGestureRecognizer *tappedMoreRecognizer; // ivar: _tappedMoreRecognizer
@property (retain, nonatomic) UITextView *textViewForTextSizeTesting; // ivar: _textViewForTextSizeTesting
@property (readonly, nonatomic) UIColor *timeTextColor;
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (retain, nonatomic) UILabel *timeZoneTimeLabel; // ivar: _timeZoneTimeLabel
@property (retain, nonatomic) NSLayoutConstraint *timeZoneTimeLabelHeightConstraint; // ivar: _timeZoneTimeLabelHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *timeZoneTimeLabelToBottomTimeLabelConstraint; // ivar: _timeZoneTimeLabelToBottomTimeLabelConstraint
@property (retain, nonatomic) UILabel *topTimeLabel; // ivar: _topTimeLabel
@property (retain, nonatomic) NSLayoutConstraint *topTimeLabelHeightConstraint; // ivar: _topTimeLabelHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *topTimeLabelToTopContentViewConstraint; // ivar: _topTimeLabelToTopContentViewConstraint
@property (nonatomic) BOOL updateFontBasedConstraints; // ivar: _updateFontBasedConstraints
@property (nonatomic) BOOL updateParticipantsText; // ivar: _updateParticipantsText
@property (nonatomic) BOOL updateTimeText; // ivar: _updateTimeText


+(BOOL)_layoutManagerReportsExcessLines:(id)arg0 ;
+(CGFloat)_leftBuffer;
+(CGFloat)_rightBuffer;
+(id)_andMoreLeftSpacing;
+(id)_generateAndMoreStringWithCount:(NSUInteger)arg0 attributes:(id)arg1 ;
+(id)_generateParticipantTextView;
+(id)_interParticipantSpacing;
+(id)_nonBreakingSpace;
+(id)_replaceSpacesWithNonBreakingSpaces:(id)arg0 ;
+(id)_timeLabelFont;
+(void)_setRequiredHuggingAndCompression:(id)arg0 ;
-(BOOL)_everyoneCanAttend;
-(BOOL)_shouldDisplayTimeZone;
-(BOOL)_textWillFit:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(CGFloat)_preferredMaxLayoutWidth;
-(id)_busyImageAttributedStringForColor:(id)arg0 ;
-(id)_generateStringForAllParticipants:(id)arg0 ;
-(id)_generateStringForSomeParticipantsAndStampMoreBoundingRect:(id)arg0 ;
-(id)_textForParticipant:(id)arg0 color:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_andMoreTapped:(id)arg0 ;
-(void)_resetFonts;
-(void)_resetParticipantsTextIfNeeded;
-(void)_resetPreferredMaxLayoutWidths;
-(void)_resetTimeTextIfNeeded;
-(void)_showPreviewButtonTapped:(id)arg0 ;
-(void)dealloc;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)updateConstraints;
-(void)updateWithStartDate:(id)arg0 endDate:(id)arg1 timeZone:(id)arg2 busyParticipants:(id)arg3 showAllParticipants:(BOOL)arg4 checked:(BOOL)arg5 ;


@end


#endif