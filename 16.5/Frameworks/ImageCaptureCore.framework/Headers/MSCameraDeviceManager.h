// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSCAMERADEVICEMANAGER_H
#define MSCAMERADEVICEMANAGER_H



#import "ICDeviceManager.h"

@interface MSCameraDeviceManager : ICDeviceManager



-(NSInteger)checkFile:(id)arg0 andDevice:(id)arg1 ;
-(id)deviceManagerConnection;
-(struct CGImage *)removeLetterboxFromThumbnail:(struct CGImage *)arg0 fullSize:(struct CGSize )arg1 ;
-(struct CGSize )cropThumbSize:(struct CGSize )arg0 fullSize:(struct CGSize )arg1 finalSize:(struct CGSize )arg2 ;
-(void)deleteFileImp:(id)arg0 ;
-(void)downloadFileImp:(id)arg0 ;
-(void)ejectImp:(id)arg0 ;
-(void)executeCompletionBlockWithErrorCode:(NSInteger)arg0 info:(id)arg1 file:(id)arg2 completionDict:(id)arg3 completionBlk:(id)arg4 ;
-(void)getFileDataImp:(id)arg0 ;
-(void)getFileMetadataImp:(id)arg0 ;
-(void)getFileThumbnailImp:(id)arg0 ;
-(void)notifyAddedItems:(id)arg0 ;
-(void)notifyPtpEvent:(id)arg0 ;
-(void)notifyRemovedItems:(id)arg0 ;
-(void)notifyStatus:(id)arg0 ;
-(void)notifyUpdatedItems:(id)arg0 ;
-(void)startDeviceWithHandle:(id)arg0 ;
-(void)syncClockImp:(id)arg0 ;
-(void)updateCameraFile:(id)arg0 withInfo:(id)arg1 ;
-(void)updateCameraFolder:(id)arg0 withInfo:(id)arg1 ;


@end


#endif