// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUFEEDSTACKCELL_H
#define PUFEEDSTACKCELL_H



#import "PUFeedCell.h"
#import "PUStackView.h"

@interface PUFeedStackCell : PUFeedCell

@property (nonatomic) UIOffset stackOffset; // ivar: _stackOffset
@property (retain, nonatomic) PUStackView *stackView; // ivar: _stackView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif