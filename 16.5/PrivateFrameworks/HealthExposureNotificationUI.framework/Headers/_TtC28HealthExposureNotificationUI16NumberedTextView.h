// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI16NUMBEREDTEXTVIEW_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI16NUMBEREDTEXTVIEW_H

@class UIView, NSString;



@interface _TtC28HealthExposureNotificationUI16NumberedTextView : UIView {
    ? title;
    ? details;
}


@property (nonatomic, readonly) NSString *details;
@property (nonatomic, readonly) NSInteger number; // ivar: number
@property (nonatomic, readonly) NSString *title;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif