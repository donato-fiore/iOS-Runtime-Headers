// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADSTATSEVENTS_H
#define CADSTATSEVENTS_H

@class NSMutableArray;


#import "CADStatCollector.h"

@interface CADStatsEvents : CADStatCollector {
    NSMutableArray *_eventInfos;
}




+(id)eventName;
-(BOOL)wantsEvents;
-(id)eventDictionaries;
-(void)prepareWithContext:(id)arg0 ;
-(void)processEvents:(id)arg0 ;


@end


#endif