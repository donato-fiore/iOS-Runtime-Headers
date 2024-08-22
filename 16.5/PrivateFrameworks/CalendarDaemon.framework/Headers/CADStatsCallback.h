// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADSTATSCALLBACK_H
#define CADSTATSCALLBACK_H

@class NSString;


#import "CADStatCollector.h"

@interface CADStatsCallback : CADStatCollector {
    NSString *_eventName;
    id *_callback;
}




-(id)eventDictionaries;
-(id)eventName;
-(id)initWithEventName:(id)arg0 callback:(id)arg1 ;


@end


#endif