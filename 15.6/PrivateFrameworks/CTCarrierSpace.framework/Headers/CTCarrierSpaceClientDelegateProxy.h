// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTCARRIERSPACECLIENTDELEGATEPROXY_H
#define CTCARRIERSPACECLIENTDELEGATEPROXY_H

@class NSString;
@protocol CTCarrierSpaceClientDelegateProxyInterface, CTCarrierSpaceClientDelegate;

#import <Foundation/Foundation.h>


@interface CTCarrierSpaceClientDelegateProxy : NSObject <CTCarrierSpaceClientDelegateProxyInterface>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CTCarrierSpaceClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)appsDidChange;
-(void)capabilitiesDidChange:(id)arg0 ;
-(void)dataPlanMetricsDidChange;
-(void)plansDidChange;
-(void)purchasedPlan:(id)arg0 didChangeStatus:(NSInteger)arg1 context:(id)arg2 ;
-(void)remoteObjectRespondsToSelector:(SEL)arg0 handler:(id)arg1 ;
-(void)usageDidChange;
-(void)userConsentFlowInfoDidChange;


@end


#endif