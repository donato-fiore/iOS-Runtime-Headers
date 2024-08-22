// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPITEMTRANSITLINERESUMERESULT_H
#define GEOMAPITEMTRANSITLINERESUMERESULT_H

@class NSDate;
@protocol GEOTransitDepartureSequence;

#import <Foundation/Foundation.h>


@interface GEOMapItemTransitLineResumeResult : NSObject

@property (nonatomic) BOOL blocked; // ivar: _blocked
@property (retain, nonatomic) NSObject<GEOTransitDepartureSequence> *departureSequence; // ivar: _departureSequence
@property (retain, nonatomic) NSDate *earliestNextDepartureDate; // ivar: _earliestNextDepartureDate




@end


#endif