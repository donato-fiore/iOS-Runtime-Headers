// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PNPSYNTHETICPENCILINTERACTIONEVENTSOURCE_H
#define PNPSYNTHETICPENCILINTERACTIONEVENTSOURCE_H

@class NSString, NSArray;
@protocol PNPPencilInteractionEventSource, PNPPencilInteractionEventDestination;

#import <Foundation/Foundation.h>


@interface PNPSyntheticPencilInteractionEventSource : NSObject <PNPPencilInteractionEventSource>

 {
    BOOL _playing;
    BOOL _cancelled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PNPPencilInteractionEventDestination> *eventDestination; // ivar: eventDestination
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *playlist;
@property (readonly) Class superclass;


-(BOOL)isPlaying;
-(NSInteger)_playlistPositionForPosition:(NSInteger)arg0 ;
-(id)_terminalEventsForPlayhead;
-(void)_playEventAtPlayheadPosition:(NSInteger)arg0 ;
-(void)play;
-(void)stop;


@end


#endif