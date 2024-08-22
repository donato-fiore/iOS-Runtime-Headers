// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIBACKDROPCONTENTVIEWCONTROLLER_H
#define SKUIBACKDROPCONTENTVIEWCONTROLLER_H

@class UIViewController;



@interface SKUIBackdropContentViewController : UIViewController

@property (nonatomic) NSInteger backdropViewPrivateStyle; // ivar: _backdropViewPrivateStyle
@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController


-(id)initWithContentViewController:(id)arg0 ;
-(void)loadView;


@end


#endif