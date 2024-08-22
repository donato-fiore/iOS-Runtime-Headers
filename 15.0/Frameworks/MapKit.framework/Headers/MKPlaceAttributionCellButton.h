// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACEATTRIBUTIONCELLBUTTON_H
#define MKPLACEATTRIBUTIONCELLBUTTON_H

@class UIButton;
@protocol MKPlaceAttributionCellButtonDelegate;



@interface MKPlaceAttributionCellButton : UIButton {
    BOOL _highlighted;
}


@property (weak, nonatomic) NSObject<MKPlaceAttributionCellButtonDelegate> *buttonDelegate; // ivar: _buttonDelegate


-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif