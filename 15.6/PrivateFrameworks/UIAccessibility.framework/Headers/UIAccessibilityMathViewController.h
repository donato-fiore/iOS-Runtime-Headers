// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIACCESSIBILITYMATHVIEWCONTROLLER_H
#define UIACCESSIBILITYMATHVIEWCONTROLLER_H

@class UIViewController, SCRCMathExpression, NSString, NSDictionary;
@protocol WKNavigationDelegate;


#import "UIAccessibilityMathWebView.h"

@interface UIAccessibilityMathViewController : UIViewController <WKNavigationDelegate>

 {
    SCRCMathExpression *_mathExpression;
    UIAccessibilityMathWebView *_webView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *mathDictionary; // ivar: _mathDictionary
@property (readonly) Class superclass;


-(id)_htmlString;
-(id)initWithMathDictionary:(id)arg0 ;
-(void)_doneButtonTapped;
-(void)_styleBarButtonItem:(id)arg0 ;
-(void)loadView;
-(void)viewDidLoad;


@end


#endif