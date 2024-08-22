// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKUNREADCOUNTLABELCELL_H
#define CKUNREADCOUNTLABELCELL_H

@class UIView;


#import "CKTranscriptMultilineLabelCell.h"

@interface CKUnreadCountLabelCell : CKTranscriptMultilineLabelCell

@property (retain, nonatomic) UIView *leftSeparator; // ivar: _leftSeparator
@property (retain, nonatomic) UIView *rightSeparator; // ivar: _rightSeparator


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviewsForContents;


@end


#endif