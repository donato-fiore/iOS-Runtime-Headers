// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCMEDIASTREAMGROUPCONFIG_H
#define VCMEDIASTREAMGROUPCONFIG_H

@class NSArray, NSString;
@protocol VCMediaCaptureController, VCMediaStreamGroupDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VCNetworkFeedbackController.h"
#import "VCSecurityKeyManager.h"

@interface VCMediaStreamGroupConfig : NSObject {
    unsigned int syncGroupID;
    *tagVCJBTargetEstimatorSynchronizer _jbTargetEstimatorSynchronizer;
}


@property (retain, nonatomic) NSObject<VCMediaCaptureController> *captureController; // ivar: _captureController
@property (nonatomic) int captureSource; // ivar: _captureSource
@property (retain, nonatomic) NSObject<VCMediaStreamGroupDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (nonatomic) NSUInteger idsParticipantID; // ivar: _idsParticipantID
@property (nonatomic) *tagVCJBTargetEstimatorSynchronizer jbTargetEstimatorSynchronizer;
@property (readonly, nonatomic) NSArray *mediaStreamInfoArray; // ivar: _mediaStreamInfoArray
@property (nonatomic) unsigned int mediaSubtype; // ivar: _mediaSubtype
@property (nonatomic) unsigned int mediaType; // ivar: _mediaType
@property (retain, nonatomic) VCNetworkFeedbackController *networkFeedbackController; // ivar: _networkFeedbackController
@property (retain, nonatomic) NSString *participantUUID; // ivar: _participantUUID
@property (retain, nonatomic) VCSecurityKeyManager *securityKeyManager; // ivar: _securityKeyManager
@property (retain, nonatomic) NSString *sessionUUID; // ivar: _sessionUUID
@property (nonatomic) unsigned int streamGroupID; // ivar: _streamGroupID
@property (nonatomic) NSInteger streamToken; // ivar: _streamToken
@property (nonatomic) unsigned int syncGroupID; // ivar: _syncGroupID


-(BOOL)addMediaStreamInfo:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif