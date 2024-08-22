// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REAUDIOMANAGERNOTIFICATIONLISTENER_H
#define REAUDIOMANAGERNOTIFICATIONLISTENER_H


#import <Foundation/Foundation.h>


@interface REAudioManagerNotificationListener : NSObject {
    *void _owner;
}




-(id)initWithOwner:(*void)arg0 ;
-(void)engineInterrupted:(id)arg0 ;
-(void)sessionInterrupted:(id)arg0 ;
-(void)stop;


@end


#endif