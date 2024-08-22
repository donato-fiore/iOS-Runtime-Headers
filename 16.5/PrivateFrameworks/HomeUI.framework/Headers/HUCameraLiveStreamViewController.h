// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCAMERALIVESTREAMVIEWCONTROLLER_H
#define HUCAMERALIVESTREAMVIEWCONTROLLER_H

@class UIViewController, NSString, HFCameraLiveStreamController;
@protocol HFCameraLiveStreamControllerDelegate;


#import "HUCameraView.h"

@interface HUCameraLiveStreamViewController : UIViewController <HFCameraLiveStreamControllerDelegate>



@property (retain, nonatomic) HUCameraView *cameraView; // ivar: _cameraView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFCameraLiveStreamController *liveStreamController; // ivar: _liveStreamController
@property (weak, nonatomic) NSObject<HFCameraLiveStreamControllerDelegate> *liveStreamControllerDelegate; // ivar: _liveStreamControllerDelegate
@property (nonatomic) BOOL shouldRespectAspectRatio; // ivar: _shouldRespectAspectRatio
@property (readonly) Class superclass;


-(id)initWithCameraProfile:(id)arg0 ;
-(void)streamControllerStateDidUpdate:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif