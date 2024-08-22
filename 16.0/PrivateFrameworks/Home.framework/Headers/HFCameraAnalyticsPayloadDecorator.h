// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFCAMERAANALYTICSPAYLOADDECORATOR_H
#define HFCAMERAANALYTICSPAYLOADDECORATOR_H

@class NSMutableDictionary, NSString;
@protocol HFHomeManagerObserver;

#import <Foundation/Foundation.h>


@interface HFCameraAnalyticsPayloadDecorator : NSObject <HFHomeManagerObserver>



@property (retain, nonatomic) NSMutableDictionary *additionalPayload; // ivar: _additionalPayload
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedDecorator;
-(id)decoratePayload:(id)arg0 ;
-(id)init;
-(void)_initialiseAdditionalPayload;
-(void)_initialiseAdditionalPayloadForNewHome;
-(void)_updateHomeInformation:(id)arg0 ;
-(void)homeKitDispatcher:(id)arg0 manager:(id)arg1 didChangeHome:(id)arg2 ;
-(void)homeManagerDidFinishInitialDatabaseLoad:(id)arg0 ;


@end


#endif