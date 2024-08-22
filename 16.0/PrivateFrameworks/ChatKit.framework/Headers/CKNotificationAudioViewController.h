// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKNOTIFICATIONAUDIOVIEWCONTROLLER_H
#define CKNOTIFICATIONAUDIOVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol CKAudioControllerDelegate, CKNotificationAudioViewControllerDelegate;


#import "CKAudioController.h"

@interface CKNotificationAudioViewController : UIViewController <CKAudioControllerDelegate>

 {
    CKAudioController *_audioController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKNotificationAudioViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_audioMessageToggled;
-(void)buttonTapped:(id)arg0 ;
-(void)loadMessage:(id)arg0 ;
-(void)playOrPauseAudioMessage;


@end


#endif