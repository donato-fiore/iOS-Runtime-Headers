// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSTEXTVIEW_H
#define PSTEXTVIEW_H

@class UITextContentView;


#import "PSTextViewTableCell.h"

@interface PSTextView : UITextContentView {
    PSTextViewTableCell *_cell;
}




-(void)setCell:(id)arg0 ;


@end


#endif