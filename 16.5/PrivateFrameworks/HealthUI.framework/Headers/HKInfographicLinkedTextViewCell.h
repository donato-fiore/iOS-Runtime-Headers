// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINFOGRAPHICLINKEDTEXTVIEWCELL_H
#define HKINFOGRAPHICLINKEDTEXTVIEWCELL_H



#import "HKInfographicTextViewCell.h"

@interface HKInfographicLinkedTextViewCell : HKInfographicTextViewCell

@property (copy, nonatomic) id *didTapLinkedText; // ivar: _didTapLinkedText


-(id)_descriptionTextColor;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)didTapDescriptionLabel;


@end


#endif