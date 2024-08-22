// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UARESUMABLEACTIVITIESCONTROLMANAGER_H
#define UARESUMABLEACTIVITIESCONTROLMANAGER_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface UAResumableActivitiesControlManager : NSObject {
    int _pid;
}


@property (retain) NSXPCConnection *connection; // ivar: connection
@property id *delegate; // ivar: _delegate
@property int recordingPath; // ivar: _recordingPath
@property (readonly) int serverPID;


+(id)resumableActivitiesControlManager;
-(BOOL)getAdvertisedBytes:(id)arg0 completionHandler:(id)arg1 ;
-(id)advertisedItemUUID;
-(id)allUUIDsOfType:(NSUInteger)arg0 ;
-(id)currentAdvertisedItemUUID;
-(id)debuggingInfo;
-(id)defaults:(BOOL)arg0 ;
-(id)dynamicUserActivities;
-(id)enabledUUIDs;
-(id)getSysdiagnoseStringsIncludingPrivateData:(BOOL)arg0 ;
-(id)init;
-(id)matchingUUIDForString:(id)arg0 ;
-(id)recentActions:(BOOL)arg0 ;
-(id)simulatorStatus;
-(id)status;
-(id)status:(id)arg0 options:(id)arg1 ;
-(void)callDidSaveDelegate:(id)arg0 ;
-(void)callWillSaveDelegate:(id)arg0 ;
-(void)callWillSaveDelegate:(id)arg0 completionHandler:(id)arg1 ;
-(void)connectToRemote:(id)arg0 port:(NSInteger)arg1 ;
-(void)fetchMoreAppSuggestions;
-(void)injectBTLEItem:(id)arg0 type:(NSUInteger)arg1 identifier:(id)arg2 title:(id)arg3 activityPayload:(id)arg4 webPageURL:(id)arg5 remoteModel:(id)arg6 duration:(CGFloat)arg7 payloadDelay:(CGFloat)arg8 ;
-(void)peerDevices:(id)arg0 completionHandler:(id)arg1 ;
-(void)rendevous:(id)arg0 domain:(id)arg1 active:(BOOL)arg2 ;
-(void)replayCommands:(id)arg0 completionHandler:(id)arg1 ;
-(void)restartServer;
-(void)setDebugOption:(id)arg0 value:(id)arg1 ;
-(void)setDefault:(id)arg0 value:(id)arg1 ;
-(void)setLocalReflect:(BOOL)arg0 ;
-(void)synchronize;
-(void)terminateServer;


@end


#endif