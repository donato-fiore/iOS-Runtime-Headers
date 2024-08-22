// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTPCAMERADEVICEMANAGER_H
#define PTPCAMERADEVICEMANAGER_H

@class NSNetServiceBrowser, NSMutableArray, NSString;
@protocol NSNetServiceBrowserDelegate, NSNetServiceDelegate;


#import "ICDeviceManager.h"

@interface PTPCameraDeviceManager : ICDeviceManager <NSNetServiceBrowserDelegate, NSNetServiceDelegate>

 {
    NSNetServiceBrowser *_netServiceBrowser;
    NSMutableArray *_netServices;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)checkFile:(id)arg0 andDevice:(id)arg1 ;
-(NSInteger)handleEvent:(id)arg0 onDevice:(id)arg1 contextInfo:(*void)arg2 ;
-(id)deviceManagerConnection;
-(id)init;
-(void)addSelectorToInterface:(id)arg0 selectorString:(id)arg1 origin:(BOOL)arg2 ;
-(void)dealloc;
-(void)deleteFileImp:(id)arg0 ;
-(void)downloadFileImp:(id)arg0 ;
-(void)ejectImp:(id)arg0 ;
-(void)executeCompletionBlockWithErrorCode:(NSInteger)arg0 info:(id)arg1 file:(id)arg2 completionDict:(id)arg3 completionBlk:(id)arg4 ;
-(void)getFileDataImp:(id)arg0 ;
-(void)getFileMetadataImp:(id)arg0 ;
-(void)getFileThumbnailImp:(id)arg0 ;
-(void)handleEventImp:(id)arg0 ;
-(void)handleImageCaptureEventNotification:(id)arg0 ;
-(void)notifyAddedItems:(id)arg0 ;
-(void)notifyContentCatalogPercentCompleted:(id)arg0 ;
-(void)notifyPtpEvent:(id)arg0 ;
-(void)registerDevice:(id)arg0 forImageCaptureEventNotificationsImp:(id)arg1 ;
-(void)sendDevicePTPCommandImp:(id)arg0 ;
-(void)startDeviceWithHandle:(id)arg0 ;
-(void)syncClockImp:(id)arg0 ;
-(void)unregisterDevice:(id)arg0 forImageCaptureEventNotificationsImp:(id)arg1 ;
-(void)updateCameraFile:(id)arg0 withInfo:(id)arg1 ;
-(void)updateCameraFile:(id)arg0 withKeywords:(id)arg1 ;
-(void)updateCameraFolder:(id)arg0 withInfo:(id)arg1 ;


@end


#endif