// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANANNOUNCEREACHABILITY_H
#define ANANNOUNCEREACHABILITY_H

@class NSXPCConnection, NSString;
@protocol ANAnnounceReachabilityServiceInterfaceDelegate, ANAnnounceReachabilityDelegate, OS_os_log;

#import <Foundation/Foundation.h>


@interface ANAnnounceReachability : NSObject <ANAnnounceReachabilityServiceInterfaceDelegate>



@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ANAnnounceReachabilityDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly) Class superclass;


+(id)stringForAnnounceReachabilityLevel:(NSUInteger)arg0 ;
-(NSUInteger)announceReachabilityForHomeName:(id)arg0 ;
-(NSUInteger)announceReachabilityForHomeUUID:(id)arg0 ;
-(NSUInteger)announceReachabilityForRoomName:(id)arg0 inHomeName:(id)arg1 ;
-(NSUInteger)announceReachabilityForRoomUUID:(id)arg0 inHomeUUID:(id)arg1 ;
-(id)init;
-(void)_start;
-(void)dealloc;
-(void)invalidate;
-(void)reachabilityLevel:(NSUInteger)arg0 didChangeForHomeName:(id)arg1 ;
-(void)reachabilityLevel:(NSUInteger)arg0 didChangeForHomeUUID:(id)arg1 ;
-(void)reachabilityLevel:(NSUInteger)arg0 didChangeForRoomName:(id)arg1 inHomeName:(id)arg2 ;
-(void)reachabilityLevel:(NSUInteger)arg0 didChangeForRoomUUID:(id)arg1 inHomeUUID:(id)arg2 ;


@end


#endif