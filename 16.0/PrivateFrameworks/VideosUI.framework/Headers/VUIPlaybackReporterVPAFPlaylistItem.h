// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIPLAYBACKREPORTERVPAFPLAYLISTITEM_H
#define VUIPLAYBACKREPORTERVPAFPLAYLISTITEM_H

@class NSString, NSArray;
@protocol JEMediaPlaylistItem;

#import <Foundation/Foundation.h>


@interface VUIPlaybackReporterVPAFPlaylistItem : NSObject <JEMediaPlaylistItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (retain, nonatomic) NSArray *eventData; // ivar: _eventData
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger startOverallPosition; // ivar: _startOverallPosition
@property (readonly, nonatomic) NSUInteger startPosition;
@property (readonly) Class superclass;
@property (nonatomic) _NSRange timeRange; // ivar: _timeRange


-(id)initWithPosition:(NSUInteger)arg0 duration:(NSUInteger)arg1 eventData:(id)arg2 ;


@end


#endif