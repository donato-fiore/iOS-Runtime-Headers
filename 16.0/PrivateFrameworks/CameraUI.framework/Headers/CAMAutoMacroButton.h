// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMAUTOMACROBUTTON_H
#define CAMAUTOMACROBUTTON_H

@class UIButton, UIImageView;


#import "CAMSlashMaskView.h"
#import "CAMSlashView.h"

@interface CAMAutoMacroButton : UIButton

@property (readonly, nonatomic) UIImageView *_backgroundView; // ivar: __backgroundView
@property (readonly, nonatomic) UIImageView *_imageView; // ivar: __imageView
@property (readonly, nonatomic) CAMSlashMaskView *_slashMaskView; // ivar: __slashMaskView
@property (readonly, nonatomic) CAMSlashView *_slashView; // ivar: __slashView
@property (nonatomic) BOOL active; // ivar: _active
@property (nonatomic) NSInteger orientation; // ivar: _orientation


-(id)_createCircleImageForContentSize:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateBackgroundImage;
-(void)_updateImage;
-(void)_updateSlashAnimated:(BOOL)arg0 ;
-(void)_updateTintColors;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif