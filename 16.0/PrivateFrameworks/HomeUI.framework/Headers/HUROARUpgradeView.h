// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUROARUPGRADEVIEW_H
#define HUROARUPGRADEVIEW_H

@class UIView, UIButton, NSMutableArray, NSString, UIImageView, HMHome, UILabel;
@protocol HFHomeManagerObserver;



@interface HUROARUpgradeView : UIView <HFHomeManagerObserver>



@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (retain, nonatomic) NSMutableArray *constraints; // ivar: _constraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIImageView *deviceImageView; // ivar: _deviceImageView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) UILabel *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *title; // ivar: _title
@property (nonatomic) NSUInteger upgradeViewReason; // ivar: _upgradeViewReason


-(id)initWithUpgradeViewReason:(NSUInteger)arg0 home:(id)arg1 ;
-(void)_didSwitchToHome:(id)arg0 ;
-(void)homeKitDispatcher:(id)arg0 manager:(id)arg1 didChangeHome:(id)arg2 ;
-(void)layoutSubviews;


@end


#endif