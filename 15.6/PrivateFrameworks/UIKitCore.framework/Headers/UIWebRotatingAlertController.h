// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIWEBROTATINGALERTCONTROLLER_H
#define UIWEBROTATINGALERTCONTROLLER_H

@class UIRotatingAlertController;


#import "UIWebDocumentView.h"

@interface UIWebRotatingAlertController : UIRotatingAlertController {
    BOOL _wasDeferringCallbacks;
    UIWebDocumentView *_webBrowserView;
}




-(BOOL)presentSheet;
-(id)initWithUIWebDocumentView:(id)arg0 ;
-(void)_disableWebView;
-(void)_enableWebView;
-(void)dealloc;
-(void)doneWithSheet;


@end


#endif