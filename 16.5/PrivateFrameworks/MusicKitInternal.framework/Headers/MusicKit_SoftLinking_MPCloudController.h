// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSICKIT_SOFTLINKING_MPCLOUDCONTROLLER_H
#define MUSICKIT_SOFTLINKING_MPCLOUDCONTROLLER_H

@class MPCloudController;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPCloudController : NSObject {
    MPCloudController *_underlyingCloudController;
}


@property (readonly, nonatomic) BOOL canShowCloudDownloadButtons;
@property (readonly, nonatomic, getter=isUpdateInProgress) BOOL updateInProgress;


+(id)sharedCloudController;
-(NSInteger)cloudAddToPlaylistBehavior;
-(id)_initWithUnderlyingCloudController:(id)arg0 ;
-(void)_handleCanShowCloudDownloadButtonsDidChangeNotification:(id)arg0 ;
-(void)_handleIsUpdateInProgressDidChangeNotificationName:(id)arg0 ;
-(void)dealloc;
-(void)setCloudAddToPlaylistBehavior:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif