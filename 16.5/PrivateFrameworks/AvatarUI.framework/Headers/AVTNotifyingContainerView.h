// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTNOTIFYINGCONTAINERVIEW_H
#define AVTNOTIFYINGCONTAINERVIEW_H

@class UIView;
@protocol AVTNotifyingContainerViewDelegate;



@interface AVTNotifyingContainerView : UIView

@property (weak, nonatomic) NSObject<AVTNotifyingContainerViewDelegate> *delegate; // ivar: _delegate


-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif