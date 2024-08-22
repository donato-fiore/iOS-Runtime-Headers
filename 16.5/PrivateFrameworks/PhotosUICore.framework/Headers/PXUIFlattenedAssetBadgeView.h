// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXUIFLATTENEDASSETBADGEVIEW_H
#define PXUIFLATTENEDASSETBADGEVIEW_H

@class UIImage;


#import "PXUIAssetBadgeView.h"

@interface PXUIFlattenedAssetBadgeView : PXUIAssetBadgeView {
    UIImage *_backgroundImage;
}




-(BOOL)isOpaque;
-(void)_setBackgroundImage:(id)arg0 ;
-(void)addSubview:(id)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsLayout;


@end


#endif