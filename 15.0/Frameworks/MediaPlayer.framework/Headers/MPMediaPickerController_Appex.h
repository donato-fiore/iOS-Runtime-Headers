// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMEDIAPICKERCONTROLLER_APPEX_H
#define MPMEDIAPICKERCONTROLLER_APPEX_H

@class _UIResilientRemoteViewContainerViewController, NSString, UIViewController;
@protocol MPMediaPickerRemoteViewLoader;

#import <Foundation/Foundation.h>

#import "MPMusicMediaPickerRemoteViewController.h"
#import "MPMediaPickerController.h"

@interface MPMediaPickerController_Appex : NSObject <MPMediaPickerRemoteViewLoader>

 {
    _UIResilientRemoteViewContainerViewController *_remoteViewContainerViewController;
    MPMusicMediaPickerRemoteViewController *_musicRemoteViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) MPMediaPickerController *mediaPickerController; // ivar: _mediaPickerController
@property (readonly, nonatomic) UIViewController *remoteViewController;
@property (readonly) Class superclass;


-(id)serviceController;
-(void)dealloc;
-(void)requestRemoteViewController;
-(void)synchronizeSettings;


@end


#endif