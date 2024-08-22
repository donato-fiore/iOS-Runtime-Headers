// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMUSICMEDIAPICKERREMOTEVIEWCONTROLLER_H
#define MPMUSICMEDIAPICKERREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol MPMusicMediaPickerClientController;


#import "MPMediaPickerController.h"

@interface MPMusicMediaPickerRemoteViewController : UIRemoteViewController <MPMusicMediaPickerClientController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) MPMediaPickerController *mediaPickerController; // ivar: _mediaPickerController
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)_canShowWhileLocked;
-(void)remoteMediaPickerDidCancel;
-(void)remoteMediaPickerDidPickMediaItems:(id)arg0 ;
-(void)remoteMediaPickerDidPickPlaybackArchive:(id)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif