// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTPAFITEMACTIVITY_H
#define MTPAFITEMACTIVITY_H


#import <Foundation/Foundation.h>

#import "MTPAFPlaylistItem.h"
#import "MTPAFPlaylist.h"
#import "MTMediaActivityEventHandler.h"
#import "MTMetricsData.h"

@interface MTPAFItemActivity : NSObject

@property (retain, nonatomic) MTPAFPlaylistItem *item; // ivar: _item
@property (retain, nonatomic) MTPAFPlaylist *playlist; // ivar: _playlist
@property (retain, nonatomic) MTMediaActivityEventHandler *startEventHandler; // ivar: _startEventHandler
@property (retain, nonatomic) MTMetricsData *startMetricsData; // ivar: _startMetricsData
@property (retain, nonatomic) MTMediaActivityEventHandler *stopEventHandler; // ivar: _stopEventHandler
@property (retain, nonatomic) MTMetricsData *stopMetricsData; // ivar: _stopMetricsData


-(void)populatePlaylistAndItemData:(id)arg0 ;
-(void)startAtOverallPosition:(NSUInteger)arg0 triggerType:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;
-(void)stopAtOverallPosition:(NSUInteger)arg0 triggerType:(id)arg1 reason:(id)arg2 eventData:(id)arg3 ;


@end


#endif