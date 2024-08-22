// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIMPMEDIAITEMAIRTRAFFICDOWNLOADCONTROLLER_H
#define VUIMPMEDIAITEMAIRTRAFFICDOWNLOADCONTROLLER_H



#import "VUIMPMediaItemDownloadController.h"

@interface VUIMPMediaItemAirTrafficDownloadController : VUIMPMediaItemDownloadController



-(BOOL)supportsCancellation;
-(BOOL)supportsPausing;
-(id)initWithMediaItem:(id)arg0 serialProcessingDispatchQueue:(id)arg1 ;
-(id)initWithMediaItem:(id)arg0 state:(id)arg1 serialProcessingDispatchQueue:(id)arg2 ;
-(void)_handleMediaLibraryDidChangeNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif