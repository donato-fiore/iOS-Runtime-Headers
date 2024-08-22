// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKOBSERVABLEVIEW_H
#define SKOBSERVABLEVIEW_H

@class UIView;
@protocol SKObservableViewDelegate;



@interface SKObservableView : UIView

@property (weak, nonatomic) NSObject<SKObservableViewDelegate> *delegate; // ivar: _delegate


-(void)setAlpha:(CGFloat)arg0 ;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif