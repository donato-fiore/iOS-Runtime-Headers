// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKTRANSITFILTERCELL_H
#define MKTRANSITFILTERCELL_H

@class UICollectionViewCell, UILabel, NSString;



@interface MKTransitFilterCell : UICollectionViewCell {
    UILabel *_label;
}


@property (retain, nonatomic) NSString *titleText;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeDidChange;
-(void)_setupLabel;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif