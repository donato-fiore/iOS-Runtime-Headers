// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKNOCONTENTVIEW_H
#define GKNOCONTENTVIEW_H

@class UIView, NSString, UIActivityIndicatorView, UIStackView;


#import "GKUIContentUnavailableView.h"

@interface GKNoContentView : UIView

@property (copy, nonatomic) id *buttonAction; // ivar: _buttonAction
@property (copy, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) GKUIContentUnavailableView *contentUnavailableView; // ivar: _contentUnavailableView
@property (nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicatorView; // ivar: _loadingIndicatorView
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (copy, nonatomic) NSString *title;


-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif