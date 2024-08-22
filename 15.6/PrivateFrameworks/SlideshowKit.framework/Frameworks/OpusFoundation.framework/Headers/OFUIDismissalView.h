// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OFUIDISMISSALVIEW_H
#define OFUIDISMISSALVIEW_H

@class UIView;
@protocol OFUIDismissalViewDelegate;



@interface OFUIDismissalView : UIView {
    BOOL _inPassthroughHitTest;
}


@property (nonatomic) NSObject<OFUIDismissalViewDelegate> *dismissalViewDelegate; // ivar: _dismissalViewDelegate


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(void)dealloc;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif