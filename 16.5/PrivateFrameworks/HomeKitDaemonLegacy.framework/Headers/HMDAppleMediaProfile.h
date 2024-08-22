// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEMEDIAPROFILE_H
#define HMDAPPLEMEDIAPROFILE_H

@class MPRequestResponseController, NSString;
@protocol MPRequestResponseControllerDelegate;


#import "HMDMediaProfile.h"
#import "HMDAppleMediaAccessory.h"
#import "HMDMediaSystem.h"

@interface HMDAppleMediaProfile : HMDMediaProfile <MPRequestResponseControllerDelegate>



@property (readonly) MPRequestResponseController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDAppleMediaAccessory *mediaAccessory;
@property (weak, nonatomic) HMDMediaSystem *mediaSystem; // ivar: _mediaSystem
@property (readonly) Class superclass;


-(BOOL)_updatePlayback:(id)arg0 ;
-(BOOL)_updateRefreshPlayback:(id)arg0 ;
-(id)initWithAccessory:(id)arg0 uniqueIdentifier:(id)arg1 services:(id)arg2 workQueue:(id)arg3 ;
-(void)_handleSetPower:(id)arg0 ;
-(void)_handleSetValue:(id)arg0 withRequestProperty:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)configureWithMessageDispatcher:(id)arg0 configurationTracker:(id)arg1 ;
-(void)didFinishLoadingRequestForController:(id)arg0 ;
-(void)registerForMessages;
-(void)sessionAudioControlUpdated:(id)arg0 ;
-(void)setMediaSession:(id)arg0 ;


@end


#endif