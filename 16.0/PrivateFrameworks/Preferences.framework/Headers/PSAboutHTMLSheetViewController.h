// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSABOUTHTMLSHEETVIEWCONTROLLER_H
#define PSABOUTHTMLSHEETVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol UIWebViewDelegate;



@interface PSAboutHTMLSheetViewController : UIViewController <UIWebViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)presentAboutSheetTitled:(id)arg0 HTMLContent:(id)arg1 fromViewController:(id)arg2 ;
-(BOOL)webView:(id)arg0 shouldStartLoadWithRequest:(id)arg1 navigationType:(NSInteger)arg2 ;
-(void)dealloc;
-(void)donePressed;
-(void)loadView;
-(void)setHTMLContent:(id)arg0 isFragment:(BOOL)arg1 ;
-(void)viewDidBecomeVisible;


@end


#endif