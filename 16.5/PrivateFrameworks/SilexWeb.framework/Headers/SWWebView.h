// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWWEBVIEW_H
#define SWWEBVIEW_H

@class WKWebView, UIView;



@interface SWWebView : WKWebView

@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView


-(id)inputAccessoryView;
-(void)setInputAccessoryView:(id)arg0 ;


@end


#endif