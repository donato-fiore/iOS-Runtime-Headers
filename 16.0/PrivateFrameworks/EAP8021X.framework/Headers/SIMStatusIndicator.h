// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIMSTATUSINDICATOR_H
#define SIMSTATUSINDICATOR_H

@class CoreTelephonyClient, NSString;
@protocol CoreTelephonyClientSubscriberDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SIMStatusIndicator : NSObject <CoreTelephonyClientSubscriberDelegate>



@property *void applicationContext; // ivar: _applicationContext
@property *unk callback; // ivar: _callback
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // ivar: _coreTelephonyClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)init;
-(void)createConnection;
-(void)simStatusDidChange:(id)arg0 status:(id)arg1 ;


@end


#endif