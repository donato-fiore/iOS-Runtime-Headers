// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUMEDIASERVICEACCOUNTVIEW_H
#define HUMEDIASERVICEACCOUNTVIEW_H

@class UIView, UILabel, NSArray, NSString, UIImageView, HFItem;
@protocol HUCellProtocol, HUResizableCellDelegate;



@interface HUMediaServiceAccountView : UIView <HUCellProtocol>



@property (retain, nonatomic) UILabel *accountHandleLabel; // ivar: _accountHandleLabel
@property (retain, nonatomic) NSArray *currentConstraints; // ivar: _currentConstraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL iconImageLoadingInProgress; // ivar: _iconImageLoadingInProgress
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (retain, nonatomic) UILabel *serviceNameLabel; // ivar: _serviceNameLabel
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_loadServiceIconImage;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif