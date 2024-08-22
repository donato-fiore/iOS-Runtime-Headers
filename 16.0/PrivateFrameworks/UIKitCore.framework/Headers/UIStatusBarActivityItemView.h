// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISTATUSBARACTIVITYITEMVIEW_H
#define UISTATUSBARACTIVITYITEMVIEW_H



#import "UIStatusBarItemView.h"
#import "UIActivityIndicatorView.h"

@interface UIStatusBarActivityItemView : UIStatusBarItemView {
    UIActivityIndicatorView *_activityIndicator;
    UIActivityIndicatorView *_accessibilityHUDIndicator;
    BOOL _slowActivity;
    BOOL _syncActivity;
}




-(BOOL)updateForNewData:(id)arg0 actions:(int)arg1 ;
-(CGFloat)shadowPadding;
-(CGFloat)updateContentsAndWidth;
-(NSInteger)_activityIndicatorStyle;
-(id)accessibilityHUDRepresentation;
-(void)_startAnimating;
-(void)_stopAnimating;
-(void)setVisible:(BOOL)arg0 ;


@end


#endif