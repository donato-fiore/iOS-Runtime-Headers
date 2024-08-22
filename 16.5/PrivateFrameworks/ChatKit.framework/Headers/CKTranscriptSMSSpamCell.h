// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTRANSCRIPTSMSSPAMCELL_H
#define CKTRANSCRIPTSMSSPAMCELL_H

@class NSAttributedString;


#import "CKTranscriptLabelCell.h"

@interface CKTranscriptSMSSpamCell : CKTranscriptLabelCell

@property (copy, nonatomic) NSAttributedString *attributedButtonText; // ivar: _attributedButtonText


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addFilter:(id)arg0 ;
-(void)clearFilters;
-(void)configureForChatItem:(id)arg0 context:(id)arg1 ;
-(void)layoutSubviewsForAlignmentContents;


@end


#endif