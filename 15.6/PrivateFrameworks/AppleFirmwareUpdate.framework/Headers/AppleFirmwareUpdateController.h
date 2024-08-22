// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APPLEFIRMWAREUPDATECONTROLLER_H
#define APPLEFIRMWAREUPDATECONTROLLER_H

@class NSMutableArray, NSNumber, NSString, NSArray;
@protocol OS_os_log, AppleFirmwareUpdateControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AppleFirmwareUpdateController : NSObject {
    NSObject<OS_os_log> *_log;
    *IONotificationPort _iokitNotifyPort;
    NSMutableArray *_pendingCriticalEarlyBootEntriesInternal;
    id<AppleFirmwareUpdateControllerDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSNumber *_registryEntryID;
    NSString *_fwAssetDirectory;
}


@property (retain, nonatomic) NSArray *fdrClasses; // ivar: _fdrClasses
@property (retain, nonatomic) NSString *fwAssetFile; // ivar: _fwAssetFile
@property (retain, nonatomic) NSString *fwAssetSignatureType; // ivar: _fwAssetSignatureType
@property (retain, nonatomic) NSNumber *fwAssetSize; // ivar: _fwAssetSize
@property (retain, nonatomic) NSNumber *fwAssetVersion; // ivar: _fwAssetVersion
@property (retain, nonatomic) NSNumber *img4Tag; // ivar: _img4Tag


-(BOOL)createFWAssetInfo;
-(BOOL)createFWAssetInfoInternal;
-(BOOL)getEarlyBootList:(id)arg0 ;
-(BOOL)getEarlyBootListInternal:(id)arg0 ;
-(BOOL)isFWDownloadNeeded:(id)arg0 ;
-(BOOL)registerForPendingEarlyBootAccessories;
-(BOOL)registerForPendingEarlyBootAccessoriesInternal;
-(NSInteger)sendFDRData:(unsigned int)arg0 ;
-(id)findFWAssetFromTag:(id)arg0 tag:(unsigned int)arg1 size:(*NSUInteger)arg2 ;
-(id)getPendingEarlyBootAccessories;
-(id)initWithRegistryEntryID:(id)arg0 fwAssetDirectory:(id)arg1 ;
-(id)updateFirmwareWithOptions:(id)arg0 ;
-(id)updateFirmwareWithOptionsInternal:(id)arg0 ;
-(unsigned int)getConnectionForRegistryID:(*NSInteger)arg0 ;
-(unsigned int)getServiceForRegistryID:(*NSInteger)arg0 ;
-(void)dealloc;
-(void)earlyBootAccessoryAttached:(unsigned int)arg0 ;
-(void)earlyBootAccessoryAttachedInternal:(unsigned int)arg0 ;
-(void)enableEarlyBootLoggingMode;
-(void)readCriticalEarlyBootEntries;
-(void)setDelegate:(id)arg0 ;


@end


#endif