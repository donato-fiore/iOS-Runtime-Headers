// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLOATYFOLDERBACKGROUNDCLIPVIEW_H
#define SBFLOATYFOLDERBACKGROUNDCLIPVIEW_H

@class UIView;


#import "SBFolderBackgroundView.h"

@interface SBFloatyFolderBackgroundClipView : UIView

@property (nonatomic) NSUInteger backgroundEffect;
@property (readonly, nonatomic) SBFolderBackgroundView *backgroundView; // ivar: _backgroundView
@property (nonatomic) CGFloat cornerRadius;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif