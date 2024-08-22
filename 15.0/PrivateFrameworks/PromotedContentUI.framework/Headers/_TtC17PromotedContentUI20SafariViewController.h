// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC17PROMOTEDCONTENTUI20SAFARIVIEWCONTROLLER_H
#define _TTC17PROMOTEDCONTENTUI20SAFARIVIEWCONTROLLER_H

@class SFSafariViewController;



@interface _TtC17PromotedContentUI20SafariViewController : SFSafariViewController {
    ? notificationObserver;
    ? notificationCloseObserver;
    ? actionDelegate;
}


@property (nonatomic, readonly) NSInteger preferredStatusBarStyle;


-(id)initWithURL:(id)arg0 configuration:(id)arg1 ;
-(id)initWithURL:(id)arg0 entersReaderIfAvailable:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif