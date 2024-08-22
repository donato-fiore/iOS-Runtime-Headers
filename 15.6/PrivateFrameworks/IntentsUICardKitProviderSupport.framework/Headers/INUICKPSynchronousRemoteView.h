// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INUICKPSYNCHRONOUSREMOTEVIEW_H
#define INUICKPSYNCHRONOUSREMOTEVIEW_H

@class UIView;
@protocol INUICKPSynchronousRemoteViewDelegate;



@interface INUICKPSynchronousRemoteView : UIView

@property (weak, nonatomic) NSObject<INUICKPSynchronousRemoteViewDelegate> *delegate; // ivar: _delegate


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif