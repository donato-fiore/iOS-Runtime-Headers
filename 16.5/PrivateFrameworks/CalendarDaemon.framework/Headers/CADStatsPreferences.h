// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADSTATSPREFERENCES_H
#define CADSTATSPREFERENCES_H

@class NSMutableDictionary;


#import "CADStatCollector.h"

@interface CADStatsPreferences : CADStatCollector {
    NSMutableDictionary *payload;
}




+(id)eventName;
-(id)eventDictionaries;
-(id)init;


@end


#endif