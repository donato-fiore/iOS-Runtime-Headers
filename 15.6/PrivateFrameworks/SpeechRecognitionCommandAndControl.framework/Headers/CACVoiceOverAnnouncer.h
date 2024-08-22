// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACVOICEOVERANNOUNCER_H
#define CACVOICEOVERANNOUNCER_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CACVoiceOverAnnouncement.h"

@interface CACVoiceOverAnnouncer : NSObject {
    NSObject<OS_dispatch_queue> *_announcerQueue;
}


@property (retain, nonatomic) CACVoiceOverAnnouncement *currentAnnouncement; // ivar: _currentAnnouncement
@property (nonatomic) BOOL shouldInterruptCurrentAnnouncement; // ivar: _shouldInterruptCurrentAnnouncement
@property (retain, nonatomic) NSMutableArray *voiceOverAnnouncementQueue; // ivar: _voiceOverAnnouncementQueue


-(id)init;
-(void)_dequeueNextAnnouncement;
-(void)_didFinishAnnouncement:(id)arg0 ;
-(void)announceMessage:(id)arg0 type:(NSInteger)arg1 completion:(id)arg2 ;
-(void)prepareForImmediateAnnouncement;


@end


#endif