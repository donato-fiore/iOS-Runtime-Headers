// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBZOOMVIEW_H
#define SBZOOMVIEW_H

@class UIView, UIStatusBar;



@interface SBZoomView : UIView

@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (weak, nonatomic) UIStatusBar *statusBar; // ivar: _statusBar


+(id)_chromeStatusBarImageForInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)_initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;


@end


#endif