// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUMIRRORINGVIEWCONTROLLER_H
#define MRUMIRRORINGVIEWCONTROLLER_H

@class CCUIMenuModuleViewController, NSString;
@protocol MRUMirroringControllerDelegate;


#import "MRUMirroringController.h"

@interface MRUMirroringViewController : CCUIMenuModuleViewController <MRUMirroringControllerDelegate>



@property (retain, nonatomic) MRUMirroringController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(BOOL)shouldExpandModuleOnTouch:(id)arg0 ;
-(id)leadingImageForMenuItem:(id)arg0 ;
-(void)mirroringController:(id)arg0 didChangeAvailableOutputDevices:(id)arg1 ;
-(void)mirroringController:(id)arg0 didChangeOutputDevice:(id)arg1 ;
-(void)mirroringController:(id)arg0 didUpdateBusyIdenifiers:(id)arg1 ;
-(void)selectOutputDevice:(id)arg0 ;
-(void)stopMirroringDismissOnComplete:(BOOL)arg0 ;
-(void)updateFooter;
-(void)updateItems;
-(void)updateState;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willTransitionToExpandedContentMode:(BOOL)arg0 ;


@end


#endif