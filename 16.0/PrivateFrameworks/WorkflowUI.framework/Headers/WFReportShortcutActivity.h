// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFREPORTSHORTCUTACTIVITY_H
#define WFREPORTSHORTCUTACTIVITY_H

@class UIActivity, UIActivityViewController, NSString, UIViewController;



@interface WFReportShortcutActivity : UIActivity {
    ? item;
    ? completion;
    ? reportSubmitted;
    ? $__lazy_storage_$_reportShortcutHostingViewController;
}


@property (nonatomic, readonly) BOOL _isDisabled;
@property (nonatomic, weak) UIActivityViewController *activityControler; // ivar: activityControler
@property (nonatomic, readonly) NSString *activityTitle;
@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) UIViewController *activityViewController;


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)init;
-(id)initWithWorkflow:(id)arg0 completion:(id)arg1 ;


@end


#endif