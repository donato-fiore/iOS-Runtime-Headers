// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACTIVESIRISESSIONINFO_H
#define HMDACTIVESIRISESSIONINFO_H

@class NSString;
@protocol HMFLogging, HMDDataStreamBulkSendSession, HMDActiveSiriSessionInfoDelegate;

#import <Foundation/Foundation.h>


@interface HMDActiveSiriSessionInfo : NSObject <HMFLogging>



@property (retain, nonatomic) NSObject<HMDDataStreamBulkSendSession> *bulkSendSession; // ivar: _bulkSendSession
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMDActiveSiriSessionInfoDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didBulkSendSessionComplete; // ivar: _didBulkSendSessionComplete
@property (nonatomic) BOOL didBulkSendSessionFail; // ivar: _didBulkSendSessionFail
@property (nonatomic) BOOL didSiriSessionStart; // ivar: _didSiriSessionStart
@property (nonatomic) BOOL didSiriSessionStop; // ivar: _didSiriSessionStop
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)_handleFrame:(id)arg0 ;
-(BOOL)_maybeHandleFrame:(id)arg0 error:(id)arg1 ;
-(BOOL)isBulkSendActive;
-(BOOL)isSiriSessionActive;
-(id)initWithIdentifier:(id)arg0 delegate:(id)arg1 ;
-(void)_bulkSendDidComplete;
-(void)_bulkSendDidFail;
-(void)_doReadAudioFrames;
-(void)invalidate;
-(void)markSiriPluginReady;
-(void)markSiriPluginStopped;
-(void)readFirstFrame;
-(void)setActiveBulkSendSession:(id)arg0 ;


@end


#endif