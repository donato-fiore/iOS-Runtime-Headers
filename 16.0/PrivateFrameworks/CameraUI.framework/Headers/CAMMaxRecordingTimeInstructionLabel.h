// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMMAXRECORDINGTIMEINSTRUCTIONLABEL_H
#define CAMMAXRECORDINGTIMEINSTRUCTIONLABEL_H

@class NSDateComponentsFormatter;


#import "CAMInstructionLabel.h"

@interface CAMMaxRecordingTimeInstructionLabel : CAMInstructionLabel

@property (retain, nonatomic) NSDateComponentsFormatter *_dateComponentsFormatter; // ivar: __dateComponentsFormatter
@property (nonatomic) CGFloat remainingTimeInSeconds; // ivar: _remainingTimeInSeconds


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )_textInsets;
-(void)_updateText;


@end


#endif