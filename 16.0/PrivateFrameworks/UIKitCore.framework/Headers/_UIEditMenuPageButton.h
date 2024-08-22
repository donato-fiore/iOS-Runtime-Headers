// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIEDITMENUPAGEBUTTON_H
#define _UIEDITMENUPAGEBUTTON_H

@class NSString;


#import "UIButton.h"
#import "_UIContextMenuSeparatorView.h"
#import "UIVisualEffectView.h"

@interface _UIEditMenuPageButton : UIButton {
    _UIContextMenuSeparatorView *_separatorView;
    UIVisualEffectView *_backgroundView;
    UIVisualEffectView *_selectedBackgroundView;
    NSDirectionalEdgeInsets _defaultInsets;
}


@property (nonatomic) UIEdgeInsets arrowEdgeInsets; // ivar: _arrowEdgeInsets
@property (retain, nonatomic) NSString *backgroundGroupName;
@property (readonly, nonatomic) NSInteger direction; // ivar: _direction


-(id)_imageNameForCurrentDirection;
-(id)backgroundView;
-(id)initWithDirection:(NSInteger)arg0 ;
-(id)selectedBackgroundView;
-(void)_configureButton;
-(void)layoutSubviews;


@end


#endif