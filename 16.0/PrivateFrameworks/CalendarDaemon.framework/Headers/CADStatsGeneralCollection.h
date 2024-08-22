// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADSTATSGENERALCOLLECTION_H
#define CADSTATSGENERALCOLLECTION_H

@class NSMutableDictionary;


#import "CADStatCollector.h"

@interface CADStatsGeneralCollection : CADStatCollector {
    NSMutableDictionary *payload;
}




+(id)eventName;
-(id)eventDictionaries;
-(id)init;


@end


#endif