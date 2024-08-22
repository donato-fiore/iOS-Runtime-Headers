// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTRANSCRIPTREPORTSPAMCELL_H
#define CKTRANSCRIPTREPORTSPAMCELL_H

@class NSAttributedString, UILabel, UIButton;


#import "CKTranscriptLabelCell.h"

@interface CKTranscriptReportSpamCell : CKTranscriptLabelCell

@property (copy, nonatomic) NSAttributedString *attributedButtonText;
@property (readonly, nonatomic) UILabel *internalPhishingWarningLabel; // ivar: _internalPhishingWarningLabel
@property (retain, nonatomic) UIButton *reportSpamButton; // ivar: _reportSpamButton
@property (nonatomic) BOOL showReportSMSSpam; // ivar: _showReportSMSSpam


+(id)internalPhishingWarning;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addFilter:(id)arg0 ;
-(void)clearFilters;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)prepareForReuse;


@end


#endif