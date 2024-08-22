// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQLINKINAPPACTION_H
#define ICQLINKINAPPACTION_H

@class NSString, ICQLink, ICQOffer;
@protocol ICQUpgradeFlowManagerDelegate, NSSecureCoding;


#import "ICQInAppAction.h"
#import "ICQUpgradeFlowManager.h"

@interface ICQLinkInAppAction : ICQInAppAction <ICQUpgradeFlowManagerDelegate, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ICQUpgradeFlowManager *flowManager; // ivar: _flowManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ICQLink *link; // ivar: _link
@property (retain, nonatomic) ICQOffer *offer; // ivar: _offer
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)_linkURLWithContext:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLink:(id)arg0 ;
-(id)initWithLink:(id)arg0 inOffer:(id)arg1 ;
-(void)_launchFlowManagerWithContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)performActionWithContext:(id)arg0 ;
-(void)upgradeFlowManagerDidCancel:(id)arg0 ;
-(void)upgradeFlowManagerDidComplete:(id)arg0 ;


@end


#endif