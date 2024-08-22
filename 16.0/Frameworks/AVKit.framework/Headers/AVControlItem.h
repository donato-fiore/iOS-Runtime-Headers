// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCONTROLITEM_H
#define AVCONTROLITEM_H

@class UIFont, NSString, UIImage, UIColor, UIView;
@protocol AVControlItemDelegate;

#import <Foundation/Foundation.h>

#import "AVButton.h"

@interface AVControlItem : NSObject {
    AVButton *_button;
    UIFont *_titleFont;
    BOOL _isSecondGenerationControl;
}


@property (copy, nonatomic) id *action; // ivar: _action
@property (weak, nonatomic) NSObject<AVControlItemDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) UIView *view;


-(id)_formattedTitleString;
-(id)initWithTitle:(id)arg0 type:(NSInteger)arg1 ;
-(void)_buttonTouchUpInside:(id)arg0 ;
-(void)_notifyDelegateOfChangesIfNeeded;
-(void)_updateButton;
-(void)_updateTintColor;
-(void)setAccessibilityAttributedHint:(id)arg0 ;
-(void)setAccessibilityAttributedLabel:(id)arg0 ;
-(void)setAccessibilityHint:(id)arg0 ;
-(void)setAccessibilityLabel:(id)arg0 ;


@end


#endif