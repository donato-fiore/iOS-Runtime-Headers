// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMACCESSORYSETUPCOORDINATOR_H
#define HMACCESSORYSETUPCOORDINATOR_H

@class NSString, NSUUID;
@protocol HMFLogging, HMFMessageReceiver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_HMContext.h"

@interface HMAccessorySetupCoordinator : NSObject <HMFLogging, HMFMessageReceiver>

 {
    _HMContext *_context;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;


+(BOOL)isCHIPFeatureEnabled;
+(BOOL)isCHIPSetupPayloadURL:(id)arg0 ;
+(BOOL)isHAPSetupPayloadURL:(id)arg0 ;
+(BOOL)isSetupPayloadURL:(id)arg0 ;
+(BOOL)isSetupPayloadURLString:(id)arg0 ;
+(id)UUID;
+(id)communicationProtocolForSetupPayloadURLString:(id)arg0 ;
+(id)logCategory;
+(id)setupPayloadURLFromSetupPayloadURLString:(id)arg0 ;
+(void)setCHIPFeatureEnabled:(BOOL)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)cancelStagedCHIPAccessoryPairingWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)configure;
-(void)createCHIPSetupPayloadStringForStagedPairingWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)createSetupAccessoryPayloadWithCHIPDecimalStringRepresentation:(id)arg0 completionHandler:(id)arg1 ;
-(void)createSetupAccessoryPayloadWithCHIPSetupCode:(id)arg0 completionHandler:(id)arg1 ;
-(void)createSetupAccessoryPayloadWithSetupPayloadURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)createSetupAccessoryPayloadWithSetupPayloadURLString:(id)arg0 completionHandler:(id)arg1 ;
-(void)stageCHIPAccessoryPairingWithPayload:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif