// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSTARTPAGEFOOTERCELL_H
#define SFSTARTPAGEFOOTERCELL_H

@class UICollectionViewCell, UIButton, UIAction;



@interface SFStartPageFooterCell : UICollectionViewCell {
    UIButton *_button;
}


@property (retain, nonatomic) UIAction *action; // ivar: _action


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)primaryActionTriggered:(id)arg0 ;


@end


#endif