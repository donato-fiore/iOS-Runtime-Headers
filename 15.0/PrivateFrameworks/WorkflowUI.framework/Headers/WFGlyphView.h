// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFGLYPHVIEW_H
#define WFGLYPHVIEW_H

@class UIColor, WFWorkflowIconDrawer;


#import "WFIconView.h"

@interface WFGlyphView : WFIconView

@property (nonatomic) unsigned short glyphCharacter;
@property (retain, nonatomic) UIColor *glyphColor;
@property (nonatomic) UIEdgeInsets glyphInsets; // ivar: _glyphInsets
@property (readonly, nonatomic) WFWorkflowIconDrawer *iconDrawer; // ivar: _iconDrawer
@property (nonatomic) BOOL outline;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)redrawIcon;


@end


#endif