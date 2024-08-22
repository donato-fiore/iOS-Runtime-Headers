// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDARCADESERVICE_H
#define ASDARCADESERVICE_H

@class NSString;
@protocol ASDServiceProvider;

#import <Foundation/Foundation.h>

#import "ASDServiceBroker.h"

@interface ASDArcadeService : NSObject <ASDServiceProvider>

 {
    ASDServiceBroker *_serviceBroker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultService;
+(id)interface;
-(id)_initWithServiceBroker:(id)arg0 ;
-(id)init;
-(void)addBadgeIDs:(id)arg0 replyHandler:(id)arg1 ;
-(void)addHardwareOfferIDs:(id)arg0 replyHandler:(id)arg1 ;
-(void)allBadgeIDsWithReplyHandler:(id)arg0 ;
-(void)allBadgeMetricsWithReplyHandler:(id)arg0 ;
-(void)allHardwareOfferMetricsWithReplyHandler:(id)arg0 ;
-(void)allHardwareOffersIDsWithReplyHandler:(id)arg0 ;
-(void)badgeCountWithReplyHandler:(id)arg0 ;
-(void)hardwareOfferCountWithReplyHandler:(id)arg0 ;
-(void)removeAllBadgeIDsWithReplyHandler:(id)arg0 ;
-(void)removeAllHardwareOfferIDsWithReplyHandler:(id)arg0 ;
-(void)removeBadgeIDs:(id)arg0 replyHandler:(id)arg1 ;
-(void)removeHardwareOfferIDs:(id)arg0 replyHandler:(id)arg1 ;
-(void)removeHardwareOfferMetricsForOfferIDs:(id)arg0 replyHandler:(id)arg1 ;
-(void)removeMetricsForBadgeIDs:(id)arg0 replyHandler:(id)arg1 ;


@end


#endif