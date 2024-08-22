// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKLAYOUTCONTAINERVIEW_H
#define EKLAYOUTCONTAINERVIEW_H

@class UIView;
@protocol EKLayoutContainerViewDelegate;



@interface EKLayoutContainerView : UIView

@property (weak, nonatomic) NSObject<EKLayoutContainerViewDelegate> *delegate; // ivar: _delegate


-(void)layoutSubviews;


@end


#endif