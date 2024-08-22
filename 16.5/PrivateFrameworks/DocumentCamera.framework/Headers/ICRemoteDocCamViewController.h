// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICREMOTEDOCCAMVIEWCONTROLLER_H
#define ICREMOTEDOCCAMVIEWCONTROLLER_H

@class UIViewController, SidecarRequest, SidecarService;
@protocol ICRemoteDocCamViewControllerDelegate;


#import "ICDocCamImageCache.h"

@interface ICRemoteDocCamViewController : UIViewController

@property (weak, nonatomic) NSObject<ICRemoteDocCamViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) ICDocCamImageCache *imageCache; // ivar: _imageCache
@property (retain, nonatomic) SidecarRequest *sidecarRequest; // ivar: _sidecarRequest
@property (retain, nonatomic) SidecarService *sidecarService; // ivar: _sidecarService


-(BOOL)_canShowWhileLocked;
-(id)infoForArchiveSidecarItems:(id)arg0 ;
-(id)infoForImageSidecarItems:(id)arg0 ;
-(id)infoForSidecarItems:(id)arg0 ;
-(id)initWithImageCache:(id)arg0 ;
-(id)makeAlertControllerForError:(id)arg0 ;
-(id)makeDevicesAlertController;
-(void)makeRequestToDevice:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif