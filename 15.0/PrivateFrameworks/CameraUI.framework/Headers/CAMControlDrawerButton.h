// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMCONTROLDRAWERBUTTON_H
#define CAMCONTROLDRAWERBUTTON_H

@class UIControl, UIImageView, NSString;
@protocol CAMAccessibilityHUDItemProvider;


#import "CAMSlashMaskView.h"
#import "CAMSlashView.h"

@interface CAMControlDrawerButton : UIControl <CAMAccessibilityHUDItemProvider>



@property (readonly, nonatomic) UIImageView *_backgroundView; // ivar: __backgroundView
@property (readonly, nonatomic) UIImageView *_imageView; // ivar: __imageView
@property (readonly, nonatomic) CAMSlashMaskView *_slashMaskView; // ivar: __slashMaskView
@property (readonly, nonatomic) CAMSlashView *_slashView; // ivar: __slashView
@property (readonly, nonatomic) NSInteger controlType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isExpandable) BOOL expandable;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (readonly) Class superclass;


+(id)_backgroundImage;
+(struct CGSize )buttonSize;
-(BOOL)shouldScaleImageWhileHighlighted;
-(BOOL)shouldShowSlashForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseHierarchicalSymbol;
-(BOOL)shouldUseSlash;
-(id)_imageForImageName:(id)arg0 ;
-(id)hudItemForAccessibilityHUDManager:(id)arg0 ;
-(id)imageNameForAXHUD;
-(id)imageNameForCurrentState;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateSlashAnimated:(BOOL)arg0 ;
-(void)didChangeContentSize;
-(void)handleButtonReleased:(id)arg0 ;
-(void)layoutSubviews;
-(void)selectedByAccessibilityHUDManager:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateImage;
-(void)updateImageAnimated:(BOOL)arg0 ;


@end


#endif