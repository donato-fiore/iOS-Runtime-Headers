// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKDEVICETOKEN_H
#define FBKDEVICETOKEN_H


#import <Foundation/Foundation.h>


@interface FBKDeviceToken : NSObject



+(id)_basicParameterWithoutLabel;
+(id)_basicParametersForWriting;
+(id)_queryForParticipantID:(id)arg0 isForWriting:(BOOL)arg1 ;
+(id)fetchDeviceTokenForParticipantID:(id)arg0 ;
+(void)clearAllDeviceTokens;
+(void)clearDeviceTokenForParticipantID:(id)arg0 ;
+(void)setDeviceToken:(id)arg0 forParticipantID:(id)arg1 ;


@end


#endif