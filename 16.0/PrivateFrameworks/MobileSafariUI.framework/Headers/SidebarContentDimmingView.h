// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIDEBARCONTENTDIMMINGVIEW_H
#define SIDEBARCONTENTDIMMINGVIEW_H

@class UIView, UITapGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate, SidebarContentDimmingViewDelegate;



@interface SidebarContentDimmingView : UIView <UIGestureRecognizerDelegate>

 {
    UITapGestureRecognizer *_dismissRecognizer;
    UIView *_dimmingView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SidebarContentDimmingViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *passthroughView; // ivar: _passthroughView
@property (readonly) Class superclass;


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 dimmedContentFrame:(struct CGRect )arg1 ;
-(void)_dismissRecognized:(id)arg0 ;
-(void)setDimmedContentFrame:(struct CGRect )arg0 ;
-(void)setTransparent:(BOOL)arg0 ;


@end


#endif