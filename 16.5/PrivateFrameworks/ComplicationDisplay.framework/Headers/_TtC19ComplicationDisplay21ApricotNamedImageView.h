// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19COMPLICATIONDISPLAY21APRICOTNAMEDIMAGEVIEW_H
#define _TTC19COMPLICATIONDISPLAY21APRICOTNAMEDIMAGEVIEW_H

@class UIView, UIColor, CLKImageProvider;
@protocol CDComplicationImageView;



@interface _TtC19ComplicationDisplay21ApricotNamedImageView : UIView <CDComplicationImageView>

 {
    ? maxSize;
    ? hostingViewController;
    ? baseline;
    ? monochromeFraction;
}


@property (nonatomic, retain) UIColor *color; // ivar: color
@property (nonatomic, retain) CLKImageProvider *imageProvider; // ivar: imageProvider
@property (nonatomic, retain) UIColor *overrideColor; // ivar: overrideColor
@property (nonatomic) BOOL usesLegibility; // ivar: usesLegibility


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif