// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI12ICONTEXTVIEW_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI12ICONTEXTVIEW_H

@class UIView, UIColor;



@interface _TtC28HealthExposureNotificationUI12IconTextView : UIView {
    ? icon;
    ? details;
    ? highlightedText;
    ? delegate;
    ? textStack;
    ? iconView;
}


@property (nonatomic, readonly) CGSize intrinsicContentSize;
@property (nonatomic, retain) UIColor *tintColor;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didTapText:(id)arg0 ;


@end


#endif