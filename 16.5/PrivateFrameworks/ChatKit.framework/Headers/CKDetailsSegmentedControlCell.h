// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDETAILSSEGMENTEDCONTROLCELL_H
#define CKDETAILSSEGMENTEDCONTROLCELL_H

@class NSString, UISegmentedControl;
@protocol CKDetailsCell;


#import "CKDetailsCell.h"

@interface CKDetailsSegmentedControlCell : CKDetailsCell <CKDetailsCell>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UISegmentedControl *segmentedControl; // ivar: _segmentedControl
@property (readonly) Class superclass;


+(BOOL)shouldHighlight;
+(id)reuseIdentifier;
-(void)layoutSubviews;


@end


#endif