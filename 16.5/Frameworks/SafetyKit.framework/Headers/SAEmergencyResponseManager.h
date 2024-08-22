// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAEMERGENCYRESPONSEMANAGER_H
#define SAEMERGENCYRESPONSEMANAGER_H

@protocol SAEmergencyResponseClientProtocol, SAEmergencyResponseDelegate;

#import <Foundation/Foundation.h>

#import "SAClient.h"

@interface SAEmergencyResponseManager : NSObject <SAEmergencyResponseClientProtocol>



@property (readonly, nonatomic) SAClient *client;
@property (weak, nonatomic) NSObject<SAEmergencyResponseDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)dialVoiceCallToPhoneNumber:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateVoiceCallStatus:(NSInteger)arg0 ;


@end


#endif