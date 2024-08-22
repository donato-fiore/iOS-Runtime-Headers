// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKBUTTON_H
#define GKBUTTON_H

@class GKTextStyle, NSString;
@protocol GKTextStyleReplay;


#import "GKFocusableButton.h"
#import "GKButtonStyle.h"

@interface GKButton : GKFocusableButton <GKTextStyleReplay>

 {
    GKTextStyle *_baseStyle;
    GKButtonStyle *_appliedButtonStyle;
}


@property (retain, nonatomic) GKTextStyle *appliedStyle; // ivar: _appliedStyle
@property (retain, nonatomic) GKTextStyle *baseStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)applyButtonStyle:(id)arg0 ;
-(void)applyTextStyle:(id)arg0 ;
-(void)replayAndApplyStyleWithSystemContentChange:(BOOL)arg0 ;
-(void)setAttributedTitle:(id)arg0 forState:(NSUInteger)arg1 ;


@end


#endif