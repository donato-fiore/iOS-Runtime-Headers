// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHUISWIDGETHOSTVIEWCONTROLLERVIEW_H
#define CHUISWIDGETHOSTVIEWCONTROLLERVIEW_H

@class UIView;


#import "CHUISWidgetHostViewController.h"

@interface CHUISWidgetHostViewControllerView : UIView

@property (weak, nonatomic) CHUISWidgetHostViewController *parentController; // ivar: _parentController


-(BOOL)showsLargeContentViewer;
-(id)accessibilityHUDRepresentation;
-(struct CGSize )intrinsicContentSize;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif