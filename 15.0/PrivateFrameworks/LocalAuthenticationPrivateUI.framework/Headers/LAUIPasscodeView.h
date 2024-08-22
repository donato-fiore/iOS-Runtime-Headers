// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LAUIPASSCODEVIEW_H
#define LAUIPASSCODEVIEW_H

@class UIViewController, LAContext, UIViewController<LAUIPasscodeService>;
@protocol LAUIDelegate;



@interface LAUIPasscodeView : UIViewController <LAUIDelegate>

 {
    LAContext *_context;
    id<LAUIDelegate> *_originalDelegate;
    UIViewController<LAUIPasscodeService> *_remoteVC;
    BOOL _shouldPresentUI;
    BOOL _shouldBecomeFirstResponder;
}




-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)_appDidBecomeActive:(id)arg0 ;
-(void)_appDidBecomeInactive:(id)arg0 ;
-(void)_prepareRemoteView;
-(void)_presentRemoteView;
-(void)dealloc;
-(void)event:(NSInteger)arg0 params:(id)arg1 reply:(id)arg2 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif