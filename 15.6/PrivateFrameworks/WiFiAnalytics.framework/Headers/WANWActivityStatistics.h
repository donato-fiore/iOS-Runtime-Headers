// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WANWACTIVITYSTATISTICS_H
#define WANWACTIVITYSTATISTICS_H

@class NSArray, PBCodable;

#import <Foundation/Foundation.h>

#import "_TtC13WiFiAnalytics21WANWActivityTransform.h"

@interface WANWActivityStatistics : NSObject {
    BOOL _fromInitWithPBCodableData;
}


@property (retain) NSArray *activityUUIDs; // ivar: _activityUUIDs
@property (nonatomic) unsigned int awdMetricID; // ivar: _awdMetricID
@property (retain, nonatomic) PBCodable *awdReport; // ivar: _awdReport
@property (retain) NSArray *externallyVisibleActivityUUIDs; // ivar: _externallyVisibleActivityUUIDs
@property (retain, nonatomic) _TtC13WiFiAnalytics21WANWActivityTransform *obj; // ivar: _obj


-(id)expandKeyNameLengths:(id)arg0 ;
-(id)getTransformedFlattened:(int)arg0 ;
-(id)getTransformedFlattenedFrom:(id)arg0 style:(int)arg1 ;
-(id)initWithPBCodableData:(id)arg0 ;
-(id)initWithWAActivityReport:(*void)arg0 length:(NSUInteger)arg1 ;


@end


#endif