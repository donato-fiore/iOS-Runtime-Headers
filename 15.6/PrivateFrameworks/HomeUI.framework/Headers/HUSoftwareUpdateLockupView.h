// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSOFTWAREUPDATELOCKUPVIEW_H
#define HUSOFTWAREUPDATELOCKUPVIEW_H

@class HFItem, NSSet, NSLayoutConstraint, UILabel;


#import "HULockupView.h"
#import "HUInformationalServiceGridViewController.h"

@interface HUSoftwareUpdateLockupView : HULockupView {
    HFItem *_item;
}


@property (retain, nonatomic) NSSet *affectedAccessories; // ivar: _affectedAccessories
@property (nonatomic) BOOL isObservingPreferredContentSize; // ivar: _isObservingPreferredContentSize
@property (retain, nonatomic) NSLayoutConstraint *serviceGridHeightConstraint; // ivar: _serviceGridHeightConstraint
@property (retain, nonatomic) HUInformationalServiceGridViewController *serviceGridViewController; // ivar: _serviceGridViewController
@property (retain, nonatomic) UILabel *tertiaryDetailLabel; // ivar: _tertiaryDetailLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initializeIconViewWithSize:(NSUInteger)arg0 ;
-(id)item;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setItem:(id)arg0 ;
-(void)updateDescriptionExpandableTextView:(id)arg0 animate:(BOOL)arg1 ;
-(void)updateIconView:(id)arg0 animate:(BOOL)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif