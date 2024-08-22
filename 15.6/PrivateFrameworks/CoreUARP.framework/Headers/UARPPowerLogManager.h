// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UARPPOWERLOGMANAGER_H
#define UARPPOWERLOGMANAGER_H

@class NSMutableSet;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface UARPPowerLogManager : NSObject {
    NSMutableSet *_accessories;
    NSMutableSet *_pendingReachableEvents;
    NSObject<OS_os_log> *_log;
}


@property unsigned int stagingWindowPeriodSeconds; // ivar: _stagingWindowPeriodSeconds


-(BOOL)accessoryIDSupportsPowerLogging:(id)arg0 ;
-(id)createPowerLogAccessoryForAccessoryID:(id)arg0 ;
-(id)init;
-(id)pendingReachabilityEventForAccessoryID:(id)arg0 ;
-(id)powerLogAccessoryForAccessoryID:(id)arg0 ;
-(id)powerLogAccessoryForUUID:(id)arg0 ;
-(void)addAccessoryID:(id)arg0 ;
-(void)postPendingReachabilityEvent:(id)arg0 ;
-(void)removeAccessoryID:(id)arg0 ;
-(void)setAccessoryIDReachable:(id)arg0 ;
-(void)setAccessoryIDUnreachable:(id)arg0 ;
-(void)setActiveFirmwareVersionForAccessoryID:(id)arg0 activeFirmwareVersion:(id)arg1 ;
-(void)setAssetOfferedForAccessoryID:(id)arg0 offeredFirmwareVersion:(id)arg1 activeFirmwareVersion:(id)arg2 ;
-(void)setStagedFirmwareVersionForAccessoryID:(id)arg0 stagedFirmwareVersion:(id)arg1 ;
-(void)setStagingCompleteForAccessoryID:(id)arg0 stagedFirmwareVersion:(id)arg1 activeFirmareVersion:(id)arg2 status:(NSUInteger)arg3 ;
-(void)updateStagingProgressForAccessoryID:(id)arg0 requestedOffset:(unsigned int)arg1 requestedLength:(unsigned int)arg2 ;


@end


#endif