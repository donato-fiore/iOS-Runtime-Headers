// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGCURATEDLIBRARYFTEMETRICEVENT_H
#define PGCURATEDLIBRARYFTEMETRICEVENT_H

@class NSDate, NSString, NSDictionary;


#import "PGAbstractMetricEvent.h"

@interface PGCuratedLibraryFTEMetricEvent : PGAbstractMetricEvent {
    NSInteger _librarySizeRange;
    NSDate *_migrationDate;
    NSString *_identifier;
    NSDictionary *_payload;
}




-(id)identifier;
-(id)initWithLibrarySizeRange:(NSInteger)arg0 migrationDate:(id)arg1 ;
-(id)payload;


@end


#endif