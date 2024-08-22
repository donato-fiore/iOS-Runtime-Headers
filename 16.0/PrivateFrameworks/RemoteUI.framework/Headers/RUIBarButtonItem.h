// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RUIBARBUTTONITEM_H
#define RUIBARBUTTONITEM_H

@class UIBarButtonItem, UIButton, UIImageView, NSString;


#import "RUIElement.h"

@interface RUIBarButtonItem : RUIElement {
    UIBarButtonItem *_barButtonItem;
    UIButton *_backButton;
    UIImageView *_imageView;
}


@property (copy, nonatomic) id *action; // ivar: _action
@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly, nonatomic) NSString *itemType;


-(id)_labelColor;
-(void)_buttonPressed:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setImageSize:(struct CGSize )arg0 ;
-(void)updateBackButtonColors;


@end


#endif