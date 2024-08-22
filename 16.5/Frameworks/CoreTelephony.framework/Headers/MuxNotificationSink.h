// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUXNOTIFICATIONSINK_H
#define MUXNOTIFICATIONSINK_H

@class NSProxy, NSString;
@protocol CoreTelephonyClientDelegateProxyInterface, MuxNotificationSinkDelegate;



@interface MuxNotificationSink : NSProxy <CoreTelephonyClientDelegateProxyInterface>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MuxNotificationSinkDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)clientDidTriggerFault:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif