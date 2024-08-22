// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFWORKFLOWWIZARDNAMEICONBUTTON_H
#define WFWORKFLOWWIZARDNAMEICONBUTTON_H

@class UIImageView, NSData, WFWorkflowIcon;


#import "WFIconButton.h"

@interface WFWorkflowWizardNameIconButton : WFIconButton

@property (weak, nonatomic) UIImageView *backgroundImageView; // ivar: _backgroundImageView
@property (readonly, nonatomic) NSData *customImageData; // ivar: _customImageData
@property (readonly, nonatomic) WFWorkflowIcon *icon; // ivar: _icon


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;
-(void)redrawIcon;


@end


#endif