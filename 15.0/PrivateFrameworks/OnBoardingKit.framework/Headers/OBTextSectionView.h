// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OBTEXTSECTIONVIEW_H
#define OBTEXTSECTIONVIEW_H

@class UIStackView, UILabel;



@interface OBTextSectionView : UIStackView

@property (retain, nonatomic) UILabel *contentLabel; // ivar: _contentLabel
@property (retain, nonatomic) UILabel *headerLabel; // ivar: _headerLabel


-(id)_contentFont;
-(id)_headerFont;
-(id)initWithHeader:(id)arg0 content:(id)arg1 ;
-(void)addAccessoryButton:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif