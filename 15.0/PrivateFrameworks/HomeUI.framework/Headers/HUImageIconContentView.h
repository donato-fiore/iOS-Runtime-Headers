// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUIMAGEICONCONTENTVIEW_H
#define HUIMAGEICONCONTENTVIEW_H

@class UIImageView;


#import "HUIconContentView.h"

@interface HUImageIconContentView : HUIconContentView

@property (nonatomic) NSInteger iconContentMode; // ivar: _iconContentMode
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) NSInteger originalImageRenderingMode; // ivar: _originalImageRenderingMode


-(NSInteger)renderingModeForSubview:(id)arg0 suggestedRenderingMode:(NSInteger)arg1 ;
-(id)imageForImageIconDescriptor:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateIconImage;
-(void)layoutSubviews;
-(void)setIconSize:(NSUInteger)arg0 ;
-(void)updateWithIconDescriptor:(id)arg0 displayStyle:(NSUInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif