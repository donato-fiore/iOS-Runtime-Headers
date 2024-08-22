// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NOTESBARBACKGROUNDVIEW_H
#define NOTESBARBACKGROUNDVIEW_H

@class UIView, UIVisualEffectView, UIColor;



@interface NotesBarBackgroundView : UIView

@property (retain, nonatomic) UIVisualEffectView *blurView; // ivar: _blurView
@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) BOOL hasBlur; // ivar: _hasBlur


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setOverrideUserInterfaceStyle:(NSInteger)arg0 ;
-(void)commonInit;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateColor;


@end


#endif