// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC26SIRIPLAYBACKCONTROLINTENTS21SEEKTIMEINTENTHANDLER_H
#define _TTC26SIRIPLAYBACKCONTROLINTENTS21SEEKTIMEINTENTHANDLER_H

@protocol SeekTimeIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC26SiriPlaybackControlIntents21SeekTimeIntentHandler : NSObject <SeekTimeIntentHandling>

 {
    ? playbackController;
    ? deviceSelector;
    ? analyticsService;
    ? aceServiceHelper;
}




-(id)init;
-(void)confirmSeekTime:(id)arg0 completion:(id)arg1 ;
-(void)handleSeekTime:(id)arg0 completion:(id)arg1 ;
-(void)resolveDevicesForSeekTime:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolvePlayheadPositionForSeekTime:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif