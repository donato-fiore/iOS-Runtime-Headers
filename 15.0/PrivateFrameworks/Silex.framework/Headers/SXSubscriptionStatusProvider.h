// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXSUBSCRIPTIONSTATUSPROVIDER_H
#define SXSUBSCRIPTIONSTATUSPROVIDER_H

@class NSString;
@protocol SXSubscriptionStatusProviding;

#import <Foundation/Foundation.h>


@interface SXSubscriptionStatusProvider : NSObject <SXSubscriptionStatusProviding>



@property (readonly, nonatomic) NSInteger bundleSubscriptionStatus; // ivar: _bundleSubscriptionStatus
@property (readonly, nonatomic) NSInteger channelSubscriptionStatus; // ivar: _channelSubscriptionStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithBundleSubscriptionStatus:(NSInteger)arg0 channelSubscriptionStatus:(NSInteger)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif