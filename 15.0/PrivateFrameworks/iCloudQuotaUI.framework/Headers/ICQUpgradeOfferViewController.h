// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICQUPGRADEOFFERVIEWCONTROLLER_H
#define ICQUPGRADEOFFERVIEWCONTROLLER_H

@class _ICQUpgradeOfferPageSpecification;


#import "ICQViewController.h"

@interface ICQUpgradeOfferViewController : ICQViewController

@property (nonatomic, getter=isCancelEnabled) BOOL cancelEnabled;
@property (readonly, nonatomic) _ICQUpgradeOfferPageSpecification *upgradeOfferPageSpecification;


+(BOOL)supportsPageClassIdentifier:(id)arg0 ;
-(id)initWithPageSpecification:(id)arg0 ;
-(id)initWithUpgradeOfferPageSpecification:(id)arg0 ;
-(void)cancel:(id)arg0 ;
-(void)loadView;


@end


#endif