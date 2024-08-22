// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8VIDEOSUI36CONFIRMATIONDIALOGTEMPLATECONTROLLER_H
#define _TTC8VIDEOSUI36CONFIRMATIONDIALOGTEMPLATECONTROLLER_H

@class TtC8VideosUI17VUIViewController;



@interface _TtC8VideosUI36ConfirmationDialogTemplateController : TtC8VideosUI17VUIViewController {
    ? isTimerSet;
    ? dismissTimer;
    ? layout;
    ? label;
    ? badgeView;
    ? $__lazy_storage_$_backdropView;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)vui_viewDidAppear:(BOOL)arg0 ;
-(void)vui_viewDidDisappear:(BOOL)arg0 ;
-(void)vui_viewDidLayoutSubviews;
-(void)vui_viewWillAppear:(BOOL)arg0 ;


@end


#endif