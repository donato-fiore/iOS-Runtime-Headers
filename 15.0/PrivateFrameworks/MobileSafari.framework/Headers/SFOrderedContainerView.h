// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFORDEREDCONTAINERVIEW_H
#define SFORDEREDCONTAINERVIEW_H

@class UIView;
@protocol SFOrderedContainerViewDelegate;



@interface SFOrderedContainerView : UIView {
    BOOL _settingOrderedSubviews;
}


@property (weak, nonatomic) NSObject<SFOrderedContainerViewDelegate> *delegate; // ivar: _delegate


-(void)_sf_setOrderedSubviews:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)didAddSubview:(id)arg0 ;
-(void)updateOrderedSubviews:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif