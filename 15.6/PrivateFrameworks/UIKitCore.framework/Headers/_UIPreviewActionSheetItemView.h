// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPREVIEWACTIONSHEETITEMVIEW_H
#define _UIPREVIEWACTIONSHEETITEMVIEW_H



#import "UIView.h"
#import "UIPreviewAction.h"
#import "UIImageView.h"
#import "UILabel.h"

@interface _UIPreviewActionSheetItemView : UIView

@property (copy, nonatomic) UIPreviewAction *action; // ivar: _action
@property (weak, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (weak, nonatomic) UILabel *label; // ivar: _label
@property (nonatomic) BOOL selected; // ivar: _selected


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 action:(id)arg1 ;
-(void)_contentSizeChanged:(id)arg0 ;
-(void)_updateConstraints;
-(void)_updateImageFromAction;
-(void)_updateLabelFont;
-(void)_updateTitleFromAction;
-(void)dealloc;


@end


#endif