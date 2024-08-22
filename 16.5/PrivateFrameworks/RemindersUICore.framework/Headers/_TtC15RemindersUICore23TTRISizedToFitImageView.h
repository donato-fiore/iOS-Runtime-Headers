// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15REMINDERSUICORE23TTRISIZEDTOFITIMAGEVIEW_H
#define _TTC15REMINDERSUICORE23TTRISIZEDTOFITIMAGEVIEW_H

@class UIImageView, UIImage;



@interface _TtC15RemindersUICore23TTRISizedToFitImageView : UIImageView {
    ? aspectRatioConstraint;
}


@property (nonatomic, retain) UIImage *image;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithImage:(id)arg0 ;
-(id)initWithImage:(id)arg0 highlightedImage:(id)arg1 ;


@end


#endif