// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVEXTERNALPLAYBACKCONTROLLER_H
#define AVEXTERNALPLAYBACKCONTROLLER_H

@class MPMediaControls;

#import <Foundation/Foundation.h>


@interface AVExternalPlaybackController : NSObject {
    MPMediaControls *_mediaControls;
    id *_clientCompletionHandler;
}




+(id)externalPlaybackStateDescriptionForState:(NSInteger)arg0 ;
-(void)_invokeClientCompletionHandlerWithPlaybackState:(NSInteger)arg0 ;
-(void)willBeginPlaybackFromAppWithBundleID:(id)arg0 completionHandler:(id)arg1 ;
-(void)willBeginPlaybackWithCompletionHandler:(id)arg0 ;


@end


#endif