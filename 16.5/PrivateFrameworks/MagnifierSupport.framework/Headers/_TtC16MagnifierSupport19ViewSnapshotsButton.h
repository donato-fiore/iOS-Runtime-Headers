// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16MAGNIFIERSUPPORT19VIEWSNAPSHOTSBUTTON_H
#define _TTC16MAGNIFIERSUPPORT19VIEWSNAPSHOTSBUTTON_H

@class UIControl, UIImage, NSString;



@interface _TtC16MagnifierSupport19ViewSnapshotsButton : UIControl {
    ? label;
    ? icon;
    ? containerView;
    ? enabledColor;
    ? disabledColor;
    ? dimmedColor;
    ? isDimmed;
    ? contentSizeCategorySubscription;
    ? snapshotCount;
    ? rotationSubscription;
}


@property (nonatomic, retain) UIImage *largeContentImage;
@property (nonatomic, copy) NSString *largeContentTitle;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif