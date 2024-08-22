// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCUIONBOARDINGSTACKEDNOTIFICATIONVIEW_H
#define FCUIONBOARDINGSTACKEDNOTIFICATIONVIEW_H

@class UIView, UIColor, NSString;



@interface FCUIOnboardingStackedNotificationView : UIView {
    UIColor *_backgroundColor;
    NSString *_assetImageName;
    UIView *_assetView;
    UIView *_line1TextView;
    UIView *_line2TextView;
}




-(id)initWithBackgroundColor:(id)arg0 assetImageName:(id)arg1 ;
-(void)_configureViewIfNecessary;
-(void)layoutSubviews;


@end


#endif