// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHEXPERIENCEUI40SUMMARYSHARINGCONTACTSELECTIONSPLASHVIEW_H
#define _TTC18HEALTHEXPERIENCEUI40SUMMARYSHARINGCONTACTSELECTIONSPLASHVIEW_H

@class UIView;
@protocol UITextViewDelegate;



@interface _TtC18HealthExperienceUI40SummarySharingContactSelectionSplashView : UIView <UITextViewDelegate>

 {
    ? openContactsHandler;
    ? imageView;
    ? textView;
}




-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif