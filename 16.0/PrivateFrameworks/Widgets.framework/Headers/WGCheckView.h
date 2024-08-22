// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WGCHECKVIEW_H
#define WGCHECKVIEW_H

@class UIView;



@interface WGCheckView : UIView

@property (nonatomic, getter=isChecked) BOOL checked;


+(Class)layerClass;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)_shapeLayer;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPath *)_newPathForBounds:(struct CGRect )arg0 ;
-(void)_invalidatePath;
-(void)layoutSubviews;


@end


#endif