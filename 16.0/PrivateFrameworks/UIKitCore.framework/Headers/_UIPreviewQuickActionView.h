// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPREVIEWQUICKACTIONVIEW_H
#define _UIPREVIEWQUICKACTIONVIEW_H



#import "UIView.h"
#import "UIImageView.h"
#import "UILabel.h"
#import "UIPreviewAction.h"

@interface _UIPreviewQuickActionView : UIView

@property (weak, nonatomic) UIImageView *backgroundViewImage; // ivar: _backgroundViewImage
@property (weak, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (weak, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) UIPreviewAction *quickAction; // ivar: _quickAction
@property (nonatomic) BOOL selected; // ivar: _selected


-(id)centerYAnchor;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateCircleBackgroundImage;
-(void)layoutSubviews;
-(void)updateFromQuickAction;


@end


#endif