// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MULOADINGVIEW_H
#define MULOADINGVIEW_H

@class UIView, UIActivityIndicatorView, NSString;
@protocol MKActivityObserving;



@interface MULoadingView : UIView <MKActivityObserving>

 {
    UIActivityIndicatorView *_loadingIndicator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_layout;
-(void)beginAnimatingActivityIndicator;
-(void)dealloc;
-(void)endAnimatingActivityIndicatorWithError:(id)arg0 ;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif