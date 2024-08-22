// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRUIHINTSUSERINTENTBUTTONVIEW_H
#define TVRUIHINTSUSERINTENTBUTTONVIEW_H

@class UIView;
@protocol TVRUIHintsStyleProvider;


#import "TVRUIHintsGlyphView.h"

@interface TVRUIHintsUserIntentButtonView : UIView

@property (retain, nonatomic) UIView *buttonOutline; // ivar: _buttonOutline
@property (retain, nonatomic) TVRUIHintsGlyphView *glyphView; // ivar: _glyphView
@property (nonatomic) NSUInteger presentation; // ivar: _presentation
@property (retain, nonatomic) NSObject<TVRUIHintsStyleProvider> *styleProvider; // ivar: _styleProvider


-(id)initWithPresentation:(NSUInteger)arg0 styleProvider:(id)arg1 buttonEdge:(unsigned int)arg2 ;
-(void)_setupConstraintsForButtonEdge:(unsigned int)arg0 ;


@end


#endif