// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTCOREDATACLOUDKITMIRRORINGHANDLER_H
#define AVTCOREDATACLOUDKITMIRRORINGHANDLER_H

@class NSNotificationCenter;
@protocol AVTCoreDataCloudKitMirroringHandler, AVTBlockScheduler, AVTCoreDataCloudKitMirroringHandlerDelegate, NSObject, AVTUILogger;

#import <Foundation/Foundation.h>


@interface AVTCoreDataCloudKitMirroringHandler : NSObject <AVTCoreDataCloudKitMirroringHandler>



@property (readonly, nonatomic) NSObject<AVTBlockScheduler> *blockScheduler; // ivar: _blockScheduler
@property (weak, nonatomic) NSObject<AVTCoreDataCloudKitMirroringHandlerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<NSObject> *didResetNotificationToken; // ivar: _didResetNotificationToken
@property (nonatomic) BOOL exportInFlight; // ivar: _exportInFlight
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (retain, nonatomic) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain, nonatomic) NSObject<NSObject> *willResetNotificationToken; // ivar: _willResetNotificationToken


-(id)initWithLogger:(id)arg0 blockScheduler:(id)arg1 ;
-(void)dealloc;
-(void)didResetSync:(id)arg0 ;
-(void)exportChangesWithManagedObjectContext:(id)arg0 discretionary:(BOOL)arg1 workQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)importChangesWithManagedObjectContext:(id)arg0 discretionary:(BOOL)arg1 workQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)resetZoneWithManagedObjectContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)scheduleExportChangesWithManagedObjectContext:(id)arg0 discretionary:(BOOL)arg1 workQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)startObservingResetSyncWithNotificationCenter:(id)arg0 ;
-(void)willResetSync:(id)arg0 ;


@end


#endif