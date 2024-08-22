// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSBLURVIEW_H
#define SSBLURVIEW_H

@class UIView;



@interface SSBlurView : UIView

@property (nonatomic) CGFloat blurRadius;
@property (nonatomic) CGFloat scale;


+(Class)layerClass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)_backdropLayer;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif