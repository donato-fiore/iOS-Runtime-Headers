// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUICONFIRMATIONDOCUMENTWRAPPERVIEWCONTROLLER_H
#define VUICONFIRMATIONDOCUMENTWRAPPERVIEWCONTROLLER_H

@class NSString;
@protocol UIGestureRecognizerDelegate;


#import "VUIBaseViewController.h"

@interface VUIConfirmationDocumentWrapperViewController : VUIBaseViewController <UIGestureRecognizerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(void)tapped;
-(void)vui_loadView;
-(void)vui_viewDidLayoutSubviews;


@end


#endif