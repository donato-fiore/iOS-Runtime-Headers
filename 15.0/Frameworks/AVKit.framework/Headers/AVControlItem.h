// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCONTROLITEM_H
#define AVCONTROLITEM_H

@class UIFont, UIImage, UIColor, NSString, UIView;

#import <Foundation/Foundation.h>

#import "AVButton.h"

@interface AVControlItem : NSObject {
    AVButton *_button;
    UIFont *_titleFont;
}


@property (copy, nonatomic) id *action; // ivar: _action
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) UIView *view;


-(id)initWithTitle:(id)arg0 type:(NSInteger)arg1 ;
-(void)_buttonTouchUpInside:(id)arg0 ;
-(void)_updateButton;
-(void)_updateTintColor;
-(void)setAccessibilityAttributedHint:(id)arg0 ;
-(void)setAccessibilityAttributedLabel:(id)arg0 ;
-(void)setAccessibilityHint:(id)arg0 ;
-(void)setAccessibilityLabel:(id)arg0 ;


@end


#endif