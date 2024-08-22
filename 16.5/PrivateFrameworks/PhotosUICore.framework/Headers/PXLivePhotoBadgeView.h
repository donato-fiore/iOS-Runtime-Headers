// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXLIVEPHOTOBADGEVIEW_H
#define PXLIVEPHOTOBADGEVIEW_H

@class UIView;
@protocol PXLivePhotoBadgeViewDelegate;



@interface PXLivePhotoBadgeView : UIView {
    ? _delegateRespondsTo;
    CGSize _size;
}


@property (weak, nonatomic) NSObject<PXLivePhotoBadgeViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGRect trackedRect; // ivar: _trackedRect


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setUpContent;
-(void)layoutSubviews;
-(void)setWantsPlayback:(BOOL)arg0 ;


@end


#endif