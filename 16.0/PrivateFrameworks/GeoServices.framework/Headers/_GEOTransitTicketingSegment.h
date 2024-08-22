// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOTRANSITTICKETINGSEGMENT_H
#define _GEOTRANSITTICKETINGSEGMENT_H

@class NSString;
@protocol GEOTransitTicketingSegmentInfo;

#import <Foundation/Foundation.h>

#import "GEOTransitTicketingSegment.h"

@interface _GEOTransitTicketingSegment : NSObject <GEOTransitTicketingSegmentInfo>

 {
    GEOTransitTicketingSegment *_segment;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *segmentName;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *ticketingUrl;


-(id)initWithSegment:(id)arg0 ;


@end


#endif