// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUILOADINGVIEWCONTROLLER_H
#define SKUILOADINGVIEWCONTROLLER_H

@class UIViewController, UIColor, NSString;


#import "SKUIClientContext.h"
#import "SKUILoadingView.h"
#import "SKUIColorScheme.h"

@interface SKUILoadingViewController : UIViewController

@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (retain, nonatomic) NSString *loadingText; // ivar: _loadingText
@property (retain, nonatomic) SKUILoadingView *loadingView; // ivar: _loadingView
@property (retain, nonatomic) SKUIColorScheme *spinnerColorScheme; // ivar: _spinnerColorScheme


-(id)initWithClientContext:(id)arg0 ;
-(void)_initializeLoadingView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif