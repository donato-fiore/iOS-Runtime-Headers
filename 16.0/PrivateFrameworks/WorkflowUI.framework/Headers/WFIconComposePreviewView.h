// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFICONCOMPOSEPREVIEWVIEW_H
#define WFICONCOMPOSEPREVIEWVIEW_H

@class WFWorkflowIconDrawer;


#import "WFIconView.h"

@interface WFIconComposePreviewView : WFIconView

@property (retain, nonatomic) WFWorkflowIconDrawer *iconDrawer; // ivar: _iconDrawer


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)redrawIcon;
-(void)setIcon:(id)arg0 ;


@end


#endif