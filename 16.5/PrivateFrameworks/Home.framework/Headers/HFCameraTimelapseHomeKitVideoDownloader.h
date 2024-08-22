// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCAMERATIMELAPSEHOMEKITVIDEODOWNLOADER_H
#define HFCAMERATIMELAPSEHOMEKITVIDEODOWNLOADER_H

@class HMCameraProfile;
@protocol HFCameraTimelapseVideoDownloader;

#import <Foundation/Foundation.h>


@interface HFCameraTimelapseHomeKitVideoDownloader : NSObject <HFCameraTimelapseVideoDownloader>



@property (weak, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile


-(id)_downloadOperationForTimelapseClip:(id)arg0 ;
-(id)_fetchOperationForClip:(id)arg0 withClipManager:(id)arg1 ;
-(id)downloadOperationForTimelapseClip:(id)arg0 ;
-(id)initWithCameraProfile:(id)arg0 ;
-(id)priorityDownloadOperationForTimelapseClip:(id)arg0 ;


@end


#endif