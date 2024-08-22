// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKAUDIOGRAMHEADER_H
#define _HKAUDIOGRAMHEADER_H

@class UIStackView, UILabel;



@interface _HKAudiogramHeader : UIStackView

@property (readonly, nonatomic) UILabel *headerDateView; // ivar: _headerDateView
@property (readonly, nonatomic) UILabel *headerTitleView; // ivar: _headerTitleView
@property (readonly, nonatomic) UILabel *headerValueView; // ivar: _headerValueView


-(id)_dateLabel;
-(id)_titleLabel;
-(id)_valueLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif