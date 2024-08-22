// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUTEXTVIEWCONTROLLER_H
#define HUTEXTVIEWCONTROLLER_H

@class UIViewController, UIView, NSString, NAFuture, UIBarButtonItem, NSAttributedString, UITextView;
@protocol HUPreloadableViewController;


#import "HUActivityLoadingView.h"

@interface HUTextViewController : UIViewController <HUPreloadableViewController>



@property (readonly, nonatomic) UIView *curtainView; // ivar: _curtainView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NAFuture *loadingFuture; // ivar: _loadingFuture
@property (readonly, nonatomic) HUActivityLoadingView *loadingView; // ivar: _loadingView
@property (readonly, nonatomic) UIBarButtonItem *shareButton; // ivar: _shareButton
@property (nonatomic) BOOL showProgressIndicatorView; // ivar: _showProgressIndicatorView
@property (nonatomic) BOOL showsShareButton; // ivar: _showsShareButton
@property (readonly) Class superclass;
@property (copy, nonatomic) NSAttributedString *textContent; // ivar: _textContent
@property (readonly, nonatomic) UITextView *textView; // ivar: _textView
@property (copy, nonatomic) NSString *titleText; // ivar: _titleText


-(id)hu_preloadContent;
-(id)initWithTextTitle:(id)arg0 ;
-(void)_fulfillProgressIndicatorState:(BOOL)arg0 ;
-(void)_shareLog:(id)arg0 ;
-(void)loadTextFromFuture:(id)arg0 textTitle:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif