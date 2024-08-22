// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSBVOICEOVERSWIPEDETECTORVIEW_H
#define AXSBVOICEOVERSWIPEDETECTORVIEW_H

@class UIView, UILabel, UIImageView;
@protocol AXSBVoiceOverSwipeDetectorDelegate;



@interface AXSBVoiceOverSwipeDetectorView : UIView {
    UILabel *_titleLabel;
    UIImageView *_bgImageView;
    BOOL _swipeDetected;
}


@property (weak, nonatomic) NSObject<AXSBVoiceOverSwipeDetectorDelegate> *delegate; // ivar: _delegate


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_cancelVOSwipeActivation:(id)arg0 ;
-(void)_swipeDetected:(id)arg0 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif