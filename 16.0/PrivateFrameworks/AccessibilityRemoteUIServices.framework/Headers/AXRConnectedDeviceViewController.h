// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXRCONNECTEDDEVICEVIEWCONTROLLER_H
#define AXRCONNECTEDDEVICEVIEWCONTROLLER_H

@class UIViewController, AXRemoteDevice, UICollectionViewFlowLayout, NSString, AXEventProcessor, NSArray;
@protocol AXRVoiceOverTouchPadViewDelegate, AXRDeviceActionsViewControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, AXRemoteDeviceConnectionDelegate, OS_dispatch_queue;


#import "AXRActionsCollectionView.h"

@interface AXRConnectedDeviceViewController : UIViewController <AXRVoiceOverTouchPadViewDelegate, AXRDeviceActionsViewControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSource, AXRemoteDeviceConnectionDelegate>

 {
    NSObject<OS_dispatch_queue> *_eventSenderQueue;
}


@property (retain, nonatomic) AXRActionsCollectionView *actionsCollectionView; // ivar: _actionsCollectionView
@property (retain, nonatomic) AXRemoteDevice *activeDevice; // ivar: _activeDevice
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewFlowLayout; // ivar: _collectionViewFlowLayout
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AXEventProcessor *eventProcessor; // ivar: _eventProcessor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *remoteActionsToShow; // ivar: _remoteActionsToShow
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithRemoteDevice:(id)arg0 ;
-(void)_dismissCurrentPresentedViewController;
-(void)_moreButtonPressed;
-(void)_performDeviceRemoteAction:(id)arg0 ;
-(void)actionsViewController:(id)arg0 selectedAction:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)remoteDeviceDidUnexpectedlyDisconnect:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)voiceOverTouchPadView:(id)arg0 didReceiveCommand:(id)arg1 ;


@end


#endif