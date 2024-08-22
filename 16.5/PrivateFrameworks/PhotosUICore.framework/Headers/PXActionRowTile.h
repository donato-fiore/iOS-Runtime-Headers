// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXACTIONROWTILE_H
#define PXACTIONROWTILE_H

@class UIView, UIButton, NSString;
@protocol PXUIViewBasicTile, PXReusableObject, PXUIWidgetFooterViewDelegate, PXActionRowTileDelegate;


#import "PXUIWidgetFooterView.h"

@interface PXActionRowTile : UIView <PXUIViewBasicTile, PXReusableObject, PXUIWidgetFooterViewDelegate>



@property (readonly, nonatomic) UIButton *_button; // ivar: __button
@property (readonly, nonatomic) PXUIWidgetFooterView *_footer; // ivar: __footer
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXActionRowTileDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger idiom; // ivar: _idiom
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) UIView *view;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setupButton;
-(void)_setupDecoratedButton;
-(void)_updateButtonTitle;
-(void)becomeReusable;
-(void)didApplyGeometry:(struct PXTileGeometry )arg0 withUserData:(id)arg1 ;
-(void)handleButtonTap:(id)arg0 forEvent:(id)arg1 ;
-(void)prepareForReuse;
-(void)tintColorDidChange;
-(void)widgetFooterView:(id)arg0 didSelectDisclosure:(id)arg1 ;


@end


#endif