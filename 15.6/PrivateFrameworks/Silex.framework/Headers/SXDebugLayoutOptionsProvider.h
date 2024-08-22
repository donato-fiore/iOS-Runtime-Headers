// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDEBUGLAYOUTOPTIONSPROVIDER_H
#define SXDEBUGLAYOUTOPTIONSPROVIDER_H

@class NSString, NSHashTable;
@protocol SXDebugLayoutOptionsProviding;

#import <Foundation/Foundation.h>


@interface SXDebugLayoutOptionsProvider : NSObject <SXDebugLayoutOptionsProviding>



@property (nonatomic) NSInteger bundleSubscriptionStatus; // ivar: _bundleSubscriptionStatus
@property (nonatomic) NSInteger channelSubscriptionStatus; // ivar: _channelSubscriptionStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger newsletterSubscriptionStatus; // ivar: _newsletterSubscriptionStatus
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic) NSInteger offerUpsellScenario; // ivar: _offerUpsellScenario
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger viewingLocation; // ivar: _viewingLocation


-(NSInteger)overrideBundleSubscriptionStatus:(NSInteger)arg0 ;
-(NSInteger)overrideChannelSubscriptionStatus:(NSInteger)arg0 ;
-(NSInteger)overrideNewsletterSubscriptionStatus:(NSUInteger)arg0 ;
-(NSInteger)overrideOfferUpsellScenario:(NSInteger)arg0 ;
-(NSUInteger)overrideViewingLocation:(NSUInteger)arg0 ;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)notifyObservers;
-(void)removeObserver:(id)arg0 ;


@end


#endif