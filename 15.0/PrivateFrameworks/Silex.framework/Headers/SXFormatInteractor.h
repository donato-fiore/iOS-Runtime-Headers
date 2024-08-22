// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXFORMATINTERACTOR_H
#define SXFORMATINTERACTOR_H

@class NSString;
@protocol SXLayoutCoordinatorDelegate, SXPresentationAttributesObserver, SXSubscriptionStatusObserving, SXDebugLayoutOptionsObserving, SXNewsletterSubscriptionStatusObserving, SXFormatInteractor, SXDebugLayoutOptionsProviding, SXFormatInteractorDelegate, SXLayoutCoordinator, SXLayoutOptionsFactory, SXNewsletterSubscriptionStatusProviding, SXPresentationAttributesProvider, SXPresentationEnvironment, SXSubscriptionStatusProviding;

#import <Foundation/Foundation.h>


@interface SXFormatInteractor : NSObject <SXLayoutCoordinatorDelegate, SXPresentationAttributesObserver, SXSubscriptionStatusObserving, SXDebugLayoutOptionsObserving, SXNewsletterSubscriptionStatusObserving, SXFormatInteractor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<SXDebugLayoutOptionsProviding> *debugLayoutOptionsProvider; // ivar: _debugLayoutOptionsProvider
@property (weak, nonatomic) NSObject<SXFormatInteractorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXLayoutCoordinator> *layoutCoordinator; // ivar: _layoutCoordinator
@property (readonly, nonatomic) NSObject<SXLayoutOptionsFactory> *layoutOptionsFactory; // ivar: _layoutOptionsFactory
@property (readonly, nonatomic) NSObject<SXNewsletterSubscriptionStatusProviding> *newsletterSubscriptionStatusProvider; // ivar: _newsletterSubscriptionStatusProvider
@property (readonly, nonatomic) NSObject<SXPresentationAttributesProvider> *presentationAttributesProvider; // ivar: _presentationAttributesProvider
@property (weak, nonatomic) NSObject<SXPresentationEnvironment> *presentationEnvironment; // ivar: _presentationEnvironment
@property (nonatomic) BOOL requestedContentHiding; // ivar: _requestedContentHiding
@property (readonly, nonatomic) NSObject<SXSubscriptionStatusProviding> *subscriptionStatusProvider; // ivar: _subscriptionStatusProvider
@property (readonly) Class superclass;


-(id)initWithLayoutCoordinator:(id)arg0 layoutOptionsFactory:(id)arg1 presentationAttributesProvider:(id)arg2 subscriptionStatusProvider:(id)arg3 debugLayoutOptionsProvider:(id)arg4 newsletterSubscriptionStatusProvider:(id)arg5 ;
-(void)bundleSubscriptionStatusDidChangeFromStatus:(NSInteger)arg0 ;
-(void)channelSubscriptionStatusDidChangeFromStatus:(NSInteger)arg0 ;
-(void)debugLayoutOptionsDidChange:(id)arg0 ;
-(void)layoutCoordinator:(id)arg0 cancelledLayoutWithOptions:(id)arg1 ;
-(void)layoutCoordinator:(id)arg0 didIntegrateBlueprint:(id)arg1 ;
-(void)layoutCoordinator:(id)arg0 willIntegrateBlueprint:(id)arg1 ;
-(void)layoutCoordinator:(id)arg0 willLayoutWithParameters:(id)arg1 ;
-(void)newsletterSubscriptionStatusDidChangeFromStatus:(NSUInteger)arg0 ;
-(void)presentationAttributesDidChangeFrom:(id)arg0 toAttributes:(id)arg1 ;
-(void)updateWithPresentationEnvironment:(id)arg0 ;


@end


#endif