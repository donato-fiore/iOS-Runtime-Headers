// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUACCESSORYSETTINGSDATAANALYTICSVIEWCONTROLLER_H
#define HUACCESSORYSETTINGSDATAANALYTICSVIEWCONTROLLER_H

@class NSString, UIView;
@protocol UITextViewDelegate;


#import "HUAccessorySettingsDetailsViewController.h"

@interface HUAccessorySettingsDataAnalyticsViewController : HUAccessorySettingsDetailsViewController <UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *linkFooterView; // ivar: _linkFooterView
@property (readonly) Class superclass;


-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)dismissPrivacyController;


@end


#endif