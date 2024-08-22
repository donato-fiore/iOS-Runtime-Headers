// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPRTCREPORTINGSESSION_H
#define MPRTCREPORTINGSESSION_H

@class NSDictionary, NSString, RTCReporting, NSOperationQueue, NSMutableArray;

#import <Foundation/Foundation.h>


@interface MPRTCReportingSession : NSObject {
    os_unfair_lock_s _lock;
    NSDictionary *_additionalUserInfo;
    NSString *_clientName;
    int _clientType;
    NSInteger _clientVersion;
    BOOL _hasCompleteSessionSetup;
    BOOL _hasInitializedSession;
    id *_hierarchyToken;
    RTCReporting *_internalSession;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_pendingReportingEvents;
    NSString *_serviceIdentifier;
    unsigned int _sessionID;
    NSDictionary *_sessionUserInfo;
}


@property (copy, nonatomic) NSDictionary *additionalUserInfo;
@property (copy, nonatomic) NSString *clientName;
@property (nonatomic) int clientType;
@property (nonatomic) NSInteger clientVersion;
@property (readonly, nonatomic) BOOL hasCompleteSessionSetup;
@property (readonly, nonatomic) BOOL hasInitializedSession;
@property (retain, nonatomic) id *hierarchyToken;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) unsigned int sessionID;


+(id)newHierarchyTokenFromParentToken:(id)arg0 ;
+(void)_recordEvent:(id)arg0 withInternalSession:(id)arg1 ;
-(id)init;
-(void)completeSessionSetup;
-(void)finalizeSession;
-(void)initializeSession;
-(void)recordEvent:(id)arg0 ;


@end


#endif