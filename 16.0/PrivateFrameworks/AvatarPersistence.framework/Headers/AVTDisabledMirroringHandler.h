// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTDISABLEDMIRRORINGHANDLER_H
#define AVTDISABLEDMIRRORINGHANDLER_H

@protocol AVTCoreDataCloudKitMirroringHandler, AVTCoreDataCloudKitMirroringHandlerDelegate;

#import <Foundation/Foundation.h>


@interface AVTDisabledMirroringHandler : NSObject <AVTCoreDataCloudKitMirroringHandler>



@property (weak, nonatomic) NSObject<AVTCoreDataCloudKitMirroringHandlerDelegate> *delegate;


-(void)exportChangesWithManagedObjectContext:(id)arg0 discretionary:(BOOL)arg1 workQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)importChangesWithManagedObjectContext:(id)arg0 discretionary:(BOOL)arg1 workQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)resetZoneWithManagedObjectContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)scheduleExportChangesWithManagedObjectContext:(id)arg0 discretionary:(BOOL)arg1 workQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)scheduleImportChangesWithManagedObjectContext:(id)arg0 workQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)startObservingResetSyncWithNotificationCenter:(id)arg0 ;


@end


#endif