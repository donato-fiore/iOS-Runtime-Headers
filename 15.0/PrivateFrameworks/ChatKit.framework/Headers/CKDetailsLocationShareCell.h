// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDETAILSLOCATIONSHARECELL_H
#define CKDETAILSLOCATIONSHARECELL_H

@class UIMenu, UILabel;


#import "CKTranscriptDetailsResizableCell.h"
#import "CKStandardButton.h"

@interface CKDetailsLocationShareCell : CKTranscriptDetailsResizableCell

@property (retain, nonatomic) CKStandardButton *button; // ivar: _button
@property (copy, nonatomic) UIMenu *menu; // ivar: _menu
@property (nonatomic) CGFloat offerTimeRemaining; // ivar: _offerTimeRemaining
@property (nonatomic) BOOL showOfferTimeRemaining; // ivar: _showOfferTimeRemaining
@property (retain, nonatomic) UILabel *timeRemainingLabel; // ivar: _timeRemainingLabel


+(id)identifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)timeStringForTimeInterval:(CGFloat)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif