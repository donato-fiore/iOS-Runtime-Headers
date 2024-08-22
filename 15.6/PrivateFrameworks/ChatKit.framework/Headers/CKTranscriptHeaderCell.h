// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTRANSCRIPTHEADERCELL_H
#define CKTRANSCRIPTHEADERCELL_H

@class UIView;


#import "CKTranscriptCell.h"

@interface CKTranscriptHeaderCell : CKTranscriptCell

@property (retain, nonatomic) UIView *loadingIndicator; // ivar: _loadingIndicator


+(CGFloat)defaultCellHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviewsForAlignmentContents;
-(void)startAnimatingActivityIndicator;


@end


#endif