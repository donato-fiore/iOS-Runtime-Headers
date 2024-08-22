// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOSPATIALEVENTLOOKUPRESULT_H
#define GEOSPATIALEVENTLOOKUPRESULT_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface GEOSpatialEventLookupResult : NSObject {
    NSMapTable *_parametersToEventsMap;
}




-(id)init;
-(id)initWithMapTable:(id)arg0 ;
-(id)poiEventsForSpatialLookupParameters:(id)arg0 ;


@end


#endif