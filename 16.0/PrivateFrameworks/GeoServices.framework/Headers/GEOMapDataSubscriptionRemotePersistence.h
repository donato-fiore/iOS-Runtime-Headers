// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPDATASUBSCRIPTIONREMOTEPERSISTENCE_H
#define GEOMAPDATASUBSCRIPTIONREMOTEPERSISTENCE_H

@class NSString;
@protocol GEOMapDataSubscriptionPersistence;

#import <Foundation/Foundation.h>


@interface GEOMapDataSubscriptionRemotePersistence : NSObject <GEOMapDataSubscriptionPersistence>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)addSubscriptionWithIdentifier:(id)arg0 auditToken:(id)arg1 dataTypes:(NSUInteger)arg2 policy:(NSInteger)arg3 region:(id)arg4 expirationDate:(id)arg5 callbackQueue:(id)arg6 completionHandler:(id)arg7 ;
-(void)fetchSubscriptionsWithIdentifiers:(id)arg0 callbackQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeSubscriptionWithIdentifier:(id)arg0 callbackQueue:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif