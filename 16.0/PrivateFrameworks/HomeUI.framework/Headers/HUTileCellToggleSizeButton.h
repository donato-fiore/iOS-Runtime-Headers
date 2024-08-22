// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTILECELLTOGGLESIZEBUTTON_H
#define HUTILECELLTOGGLESIZEBUTTON_H

@class UIButton, UIImageSymbolConfiguration;



@interface HUTileCellToggleSizeButton : UIButton {
    ? arrowImageView;
}


@property (nonatomic) BOOL isExpanding; // ivar: isExpanding
@property (nonatomic, retain) UIImageSymbolConfiguration *symbolConfiguration; // ivar: symbolConfiguration


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif