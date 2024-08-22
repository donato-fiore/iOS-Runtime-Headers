// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTRANSCRIPTLABELCELL_H
#define CKTRANSCRIPTLABELCELL_H

@class UILabel;


#import "CKTranscriptStampCell.h"

@interface CKTranscriptLabelCell : CKTranscriptStampCell

@property (readonly, nonatomic) UILabel *label;


+(id)createStampLabelView;
+(id)createStampTextView;
+(id)reuseIdentifier;
-(id)attributedText;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setAttributedText:(id)arg0 ;


@end


#endif