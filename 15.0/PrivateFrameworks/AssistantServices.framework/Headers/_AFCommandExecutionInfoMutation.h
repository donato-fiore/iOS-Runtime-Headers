// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AFCOMMANDEXECUTIONINFOMUTATION_H
#define _AFCOMMANDEXECUTIONINFOMUTATION_H

@class NSString, NSUUID, NSArray, NSDictionary;
@protocol AFCommandExecutionInfoMutating;

#import <Foundation/Foundation.h>

#import "AFCommandExecutionInfo.h"
#import "AFPeerInfo.h"
#import "AFHomeInfo.h"
#import "AFEndpointInfo.h"
#import "AFInstanceInfo.h"
#import "AFSpeechInfo.h"
#import "AFRequestHandlingContext.h"

@interface _AFCommandExecutionInfoMutation : NSObject <AFCommandExecutionInfoMutating>

 {
    AFCommandExecutionInfo *_baseModel;
    NSString *_executionID;
    NSString *_requestID;
    NSUUID *_turnId;
    AFPeerInfo *_originPeerInfo;
    AFHomeInfo *_currentHomeInfo;
    AFEndpointInfo *_endpointInfo;
    AFInstanceInfo *_instanceInfo;
    AFSpeechInfo *_speechInfo;
    AFRequestHandlingContext *_requestHandlingContextSnapshot;
    NSArray *_deviceRestrictions;
    NSDictionary *_userInfo;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setCurrentHomeInfo:(id)arg0 ;
-(void)setDeviceRestrictions:(id)arg0 ;
-(void)setEndpointInfo:(id)arg0 ;
-(void)setExecutionID:(id)arg0 ;
-(void)setInstanceInfo:(id)arg0 ;
-(void)setOriginPeerInfo:(id)arg0 ;
-(void)setRequestHandlingContextSnapshot:(id)arg0 ;
-(void)setRequestID:(id)arg0 ;
-(void)setSpeechInfo:(id)arg0 ;
-(void)setTurnId:(id)arg0 ;
-(void)setUserInfo:(id)arg0 ;


@end


#endif