// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRITTSOSPREYCHANNEL_H
#define SIRITTSOSPREYCHANNEL_H

@class OspreyChannel;

#import <Foundation/Foundation.h>


@interface SiriTTSOspreyChannel : NSObject

@property (retain, nonatomic) OspreyChannel *grpcChannel; // ivar: _grpcChannel


-(id)initWithURL:(id)arg0 configuration:(id)arg1 ;
-(void)initializeDeviceAuthenticationSessionWithCompletion:(id)arg0 ;
-(void)preconnect;
// -(void)streamTTS:(id)arg0 beginHandler:(id)arg1 chunkHandler:(unk)arg2 completion:(id)arg3  ;


@end


#endif