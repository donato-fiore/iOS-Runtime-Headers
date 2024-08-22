// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MOBILESAFARIWINDOW_H
#define MOBILESAFARIWINDOW_H

@class UIWindow;
@protocol MobileSafariWindowDelegate;



@interface MobileSafariWindow : UIWindow {
    BOOL _safariWindowDelegateRespondsToStatusBarChangedFromHeightToHeight;
    BOOL _safariWindowDelegateRespondsToDidEndAllTouchesAtPoint;
    BOOL _shouldBecomeKeyWindowAfterSnapshot;
}


@property (weak, nonatomic) NSObject<MobileSafariWindowDelegate> *safariWindowDelegate; // ivar: _safariWindowDelegate


-(id)initWithWindowScene:(id)arg0 ;
-(void)_didCompleteSystemSnapshot;
-(void)_willBeginSystemSnapshot;
-(void)handleStatusBarChangeFromHeight:(CGFloat)arg0 toHeight:(CGFloat)arg1 ;
-(void)sendEvent:(id)arg0 ;


@end


#endif