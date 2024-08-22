// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTRANSCRIPTSTAMPBUTTONCELL_H
#define CKTRANSCRIPTSTAMPBUTTONCELL_H

@class UIButton;


#import "CKTranscriptStampCell.h"

@interface CKTranscriptStampButtonCell : CKTranscriptStampCell

@property (readonly, nonatomic) UIButton *stampButton;


+(id)createStampTextView;
+(id)reuseIdentifier;
-(id)attributedText;
-(void)setAttributedText:(id)arg0 ;


@end


#endif