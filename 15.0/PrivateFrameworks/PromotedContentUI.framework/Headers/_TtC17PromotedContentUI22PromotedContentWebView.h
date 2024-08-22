// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC17PROMOTEDCONTENTUI22PROMOTEDCONTENTWEBVIEW_H
#define _TTC17PROMOTEDCONTENTUI22PROMOTEDCONTENTWEBVIEW_H

@class WKWebView;



@interface _TtC17PromotedContentUI22PromotedContentWebView : WKWebView {
    ? _processDelegate;
    ? webProcessProxy;
    ? remoteObjectInterface;
    ? browserContextControllerDidLoad;
    ? unfairLock;
}


@property (nonatomic) CGRect frame;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 ;
-(void)didMoveToSuperview;


@end


#endif