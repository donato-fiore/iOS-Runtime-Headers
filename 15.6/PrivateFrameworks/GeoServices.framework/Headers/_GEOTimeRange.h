// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOTIMERANGE_H
#define _GEOTIMERANGE_H

@class NSString, NSDate;
@protocol GEOTransitTimeRange;

#import <Foundation/Foundation.h>


@interface _GEOTimeRange : NSObject <GEOTransitTimeRange>

 {
    GEOPBTransitTimeRange _pbTimeRange;
    GEOPDTimeRange _pdTimeRange;
    BOOL _usePB;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) CGFloat startTime;
@property (readonly) Class superclass;


-(BOOL)contains:(id)arg0 ;
-(id)initWithPBTimeRange:(struct GEOPBTransitTimeRange )arg0 ;
-(id)initWithPDTimeRange:(struct GEOPDTimeRange )arg0 ;


@end


#endif