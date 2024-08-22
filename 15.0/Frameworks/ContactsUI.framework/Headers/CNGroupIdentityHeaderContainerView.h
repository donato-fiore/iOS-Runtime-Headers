// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNGROUPIDENTITYHEADERCONTAINERVIEW_H
#define CNGROUPIDENTITYHEADERCONTAINERVIEW_H

@class UIView;
@protocol CNGroupIdentityHeaderContainerViewwDelegate;



@interface CNGroupIdentityHeaderContainerView : UIView

@property (weak, nonatomic) NSObject<CNGroupIdentityHeaderContainerViewwDelegate> *delegate; // ivar: _delegate


-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;


@end


#endif