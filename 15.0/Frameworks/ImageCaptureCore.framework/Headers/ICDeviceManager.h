// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDEVICEMANAGER_H
#define ICDEVICEMANAGER_H

@class NSMutableArray, NSDictionary, NSMutableDictionary, NSString, NSOperationQueue, NSXPCConnection;
@protocol ICDeviceManagerProtocol;

#import <Foundation/Foundation.h>


@interface ICDeviceManager : NSObject <ICDeviceManagerProtocol>

 {
    NSMutableArray *_deviceHandles;
    NSMutableArray *_disabledHandles;
    os_unfair_lock_s _deviceHandlesLock;
    NSDictionary *_deviceMatchingInfo;
    NSMutableDictionary *_devices;
    os_unfair_lock_s _deviceOperationQueueLock;
    BOOL _deviceOperationQueueSuspended;
    BOOL _managerIsRunning;
    os_unfair_lock_s _deviceConnectionLock;
}


@property (nonatomic) BOOL controlAuthorizedStatus; // ivar: _controlAuthorizedStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSOperationQueue *deviceOperations; // ivar: _deviceOperationQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSXPCConnection *managerConnection; // ivar: _managerConnection
@property (readonly) Class superclass;


-(BOOL)controlAuthorized;
-(BOOL)openRemoteDeviceManager;
-(NSInteger)closeDevice:(id)arg0 contextInfo:(*void)arg1 ;
-(NSInteger)closeSession:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(NSInteger)deleteFile:(id)arg0 fromDevice:(id)arg1 completion:(id)arg2 ;
-(NSInteger)downloadFile:(id)arg0 fromDevice:(id)arg1 withOptions:(id)arg2 completion:(id)arg3 ;
-(NSInteger)eject:(id)arg0 ;
-(NSInteger)getFileData:(id)arg0 fromDevice:(id)arg1 withOptions:(id)arg2 completion:(id)arg3 ;
-(NSInteger)getFileMetadata:(id)arg0 fromDevice:(id)arg1 withOptions:(id)arg2 completion:(id)arg3 ;
-(NSInteger)getFileThumbnail:(id)arg0 fromDevice:(id)arg1 withOptions:(id)arg2 completion:(id)arg3 ;
-(NSInteger)openDevice:(id)arg0 contextInfo:(*void)arg1 ;
-(NSInteger)openSession:(id)arg0 withOptions:(id)arg1 completion:(id)arg2 ;
-(NSInteger)registerDevice:(id)arg0 forImageCaptureEventNotifications:(id)arg1 ;
-(NSInteger)sendDevice:(id)arg0 ptpCommand:(id)arg1 andPayload:(id)arg2 completion:(id)arg3 ;
-(NSInteger)syncClock:(id)arg0 completion:(id)arg1 ;
-(NSInteger)unregisterDevice:(id)arg0 forImageCaptureEventNotifications:(id)arg1 ;
-(id)deviceForConnection:(id)arg0 ;
-(id)deviceForUUID:(id)arg0 ;
-(id)deviceManagerConnection;
-(id)init;
-(id)remoteManager;
-(void)addInitiatedOperation:(id)arg0 ;
-(void)addInteractiveOperation:(id)arg0 ;
-(void)addSelectorToInterface:(id)arg0 selectorString:(id)arg1 origin:(BOOL)arg2 ;
-(void)closeDeviceHandle:(id)arg0 ;
-(void)closeDeviceImp:(id)arg0 ;
-(void)closeSessionImp:(id)arg0 ;
-(void)dealloc;
-(void)deleteFileImp:(id)arg0 ;
-(void)downloadFileImp:(id)arg0 ;
-(void)ejectImp:(id)arg0 ;
-(void)enumerateContent;
-(void)extracted:(id)arg0 ;
-(void)getDeviceList;
-(void)getFileDataImp:(id)arg0 ;
-(void)getFileMetadataImp:(id)arg0 ;
-(void)getFileThumbnailImp:(id)arg0 ;
-(void)notifyAddedDevice:(id)arg0 ;
-(void)notifyRemovedDevice:(id)arg0 ;
-(void)openDeviceHandle:(id)arg0 ;
-(void)openDeviceImp:(id)arg0 ;
-(void)openSessionImp:(id)arg0 ;
-(void)postCommandCompletionNotification:(id)arg0 ;
-(void)postNotification:(id)arg0 ;
-(void)registerDevice:(id)arg0 forImageCaptureEventNotificationsImp:(id)arg1 ;
-(void)restartRunning;
-(void)resumeOperations;
-(void)sendDevicePTPCommandImp:(id)arg0 ;
-(void)startDeviceWithHandle:(id)arg0 ;
-(void)startRunning;
-(void)stopRunning;
-(void)suspendOperations;
-(void)syncClockImp:(id)arg0 ;
-(void)unregisterDevice:(id)arg0 forImageCaptureEventNotificationsImp:(id)arg1 ;


@end


#endif