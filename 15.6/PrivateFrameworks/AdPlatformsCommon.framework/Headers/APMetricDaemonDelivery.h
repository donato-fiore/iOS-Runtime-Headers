// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APMETRICDAEMONDELIVERY_H
#define APMETRICDAEMONDELIVERY_H

@class NSString;
@protocol APMetricDaemonDeliverer, APMetricNotificationRegisterOwner, APMetricReceiving, APMetricNotificationRegister><APMetricReceiving;


#import "APXPCActionRequester.h"

@interface APMetricDaemonDelivery : APXPCActionRequester <APMetricDaemonDeliverer, APMetricNotificationRegisterOwner, APMetricReceiving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<APMetricNotificationRegister><APMetricReceiving> *notificationRegistrar; // ivar: _notificationRegistrar
@property (readonly) Class superclass;


+(BOOL)canShareConnection;
+(id)daemonDelivery;
+(id)machService;
+(void)setDaemonDelivery:(id)arg0 ;
-(id)init;
-(id)remoteObjectInterface;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)extendCollectionClassesForRemoteInterface:(id)arg0 ;
-(void)receivedMetric:(id)arg0 ;


@end


#endif