// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACADAPTIVEBACKDROPVIEW_H
#define CACADAPTIVEBACKDROPVIEW_H

@class UIView, CAFilter;



@interface CACAdaptiveBackdropView : UIView

@property (retain, nonatomic) CAFilter *colorMatrix; // ivar: _colorMatrix
@property (retain, nonatomic) CAFilter *gaussianBlurFilter; // ivar: _gaussianBlurFilter
@property (retain, nonatomic) CAFilter *luminanceMapFilter; // ivar: _luminanceMapFilter


+(Class)layerClass;
+(id)contrastAdaptiveBackdropViewWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 isContrasted:(BOOL)arg1 ;


@end


#endif