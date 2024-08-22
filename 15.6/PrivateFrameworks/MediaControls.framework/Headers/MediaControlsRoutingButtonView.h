// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MEDIACONTROLSROUTINGBUTTONVIEW_H
#define MEDIACONTROLSROUTINGBUTTONVIEW_H

@class MPButton, CCUICAPackageView;



@interface MediaControlsRoutingButtonView : MPButton

@property (nonatomic) NSInteger currentMode; // ivar: _currentMode
@property (nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (retain, nonatomic) CCUICAPackageView *packageView; // ivar: _packageView
@property (nonatomic, getter=isUserInterfaceStyleSwitchingEnabled) BOOL userInterfaceStyleSwitchingEnabled; // ivar: _userInterfaceStyleSwitchingEnabled


+(BOOL)_cursorInteractionEnabled;
-(id)_glyphResource;
-(id)cursorInteraction:(id)arg0 styleForRegion:(id)arg1 modifiers:(NSInteger)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateGlyphPackage;
-(void)_updateGlyphState;
-(void)layoutSubviews;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif