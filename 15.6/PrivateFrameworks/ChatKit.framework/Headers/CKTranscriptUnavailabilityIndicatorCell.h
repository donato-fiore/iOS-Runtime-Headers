// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTRANSCRIPTUNAVAILABILITYINDICATORCELL_H
#define CKTRANSCRIPTUNAVAILABILITYINDICATORCELL_H

@class NSString, UILabel, NSAttributedString;
@protocol CKTranscriptCollectionViewCellProtocol, IMUnavailabilityIndicatorChatItemDelegate;


#import "CKTranscriptCell.h"

@interface CKTranscriptUnavailabilityIndicatorCell : CKTranscriptCell <CKTranscriptCollectionViewCellProtocol, IMUnavailabilityIndicatorChatItemDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displayingNotifyAnywayButton; // ivar: _displayingNotifyAnywayButton
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *unavailableTitleLabel; // ivar: _unavailableTitleLabel
@property (copy, nonatomic) NSAttributedString *unavailableTitleLabelAttributedTextWhenDisplayingNotifyAnywayButton; // ivar: _unavailableTitleLabelAttributedTextWhenDisplayingNotifyAnywayButton
@property (copy, nonatomic) NSAttributedString *unavailableTitleLabelAttributedTextWhenNotDisplayingNotifyAnywayButton; // ivar: _unavailableTitleLabelAttributedTextWhenNotDisplayingNotifyAnywayButton


+(id)reuseIdentifier;
-(BOOL)hidesCheckmark;
-(id)animationWithKeyPath:(id)arg0 beginTime:(CGFloat)arg1 duration:(CGFloat)arg2 fromValue:(id)arg3 toValue:(id)arg4 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_fadeInLabelAtStartTime:(CGFloat)arg0 completion:(id)arg1 ;
-(void)_updateUnavailableTitleLabelAttributedTextAnimated:(BOOL)arg0 ;
-(void)addFilter:(id)arg0 ;
-(void)clearFilters;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)displayNotifyAnywayButtonStateChanged:(id)arg0 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)performInsertion:(id)arg0 ;


@end


#endif