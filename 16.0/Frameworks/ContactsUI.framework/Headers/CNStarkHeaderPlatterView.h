// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNSTARKHEADERPLATTERVIEW_H
#define CNSTARKHEADERPLATTERVIEW_H

@class UIView, UIImageView, UIImage, UILabel, NSString;



@interface CNStarkHeaderPlatterView : UIView

@property (retain, nonatomic) UIImageView *accessory; // ivar: _accessory
@property (retain, nonatomic) UIImage *accessoryImage; // ivar: _accessoryImage
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (copy, nonatomic) NSString *labelText; // ivar: _labelText


-(BOOL)canBecomeFocused;
-(id)initWithLabelText:(id)arg0 accessoryImage:(id)arg1 ;
-(void)_updateForFocusedState:(BOOL)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;


@end


#endif