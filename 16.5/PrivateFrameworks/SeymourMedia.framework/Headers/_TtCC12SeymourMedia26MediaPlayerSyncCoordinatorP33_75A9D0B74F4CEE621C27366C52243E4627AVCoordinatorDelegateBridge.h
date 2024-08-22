// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC12SEYMOURMEDIA26MEDIAPLAYERSYNCCOORDINATORP33_75A9D0B74F4CEE621C27366C52243E4627AVCOORDINATORDELEGATEBRIDGE_H
#define _TTCC12SEYMOURMEDIA26MEDIAPLAYERSYNCCOORDINATORP33_75A9D0B74F4CEE621C27366C52243E4627AVCOORDINATORDELEGATEBRIDGE_H

@protocol AVPlaybackCoordinationMediumDelegate;

#import <Foundation/Foundation.h>


@interface _TtCC12SeymourMedia26MediaPlayerSyncCoordinatorP33_75A9D0B74F4CEE621C27366C52243E4627AVCoordinatorDelegateBridge : NSObject <AVPlaybackCoordinationMediumDelegate>

 {
    ? localParticipantID;
    ? delegate;
}




-(id)init;
-(id)localParticipantUUIDForPlaybackCoordinator:(id)arg0 ;
-(void)playbackCoordinator:(id)arg0 broadcastLocalParticipantStateDictionary:(id)arg1 ;
-(void)playbackCoordinator:(id)arg0 broadcastTransportControlStateDictionary:(id)arg1 forItemWithIdentifier:(id)arg2 ;
-(void)playbackCoordinator:(id)arg0 reloadTransportControlStateForItemWithIdentifier:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif