// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKTRANSITINACTIVELINE_H
#define _MKTRANSITINACTIVELINE_H

@class NSDate, NSTimeZone, NSString;
@protocol MKInactiveTransitLine, GEOTransitLine, GEOTransitDepartureSequence;

#import <Foundation/Foundation.h>


@interface _MKTransitInactiveLine : NSObject <MKInactiveTransitLine>

 {
    id<GEOTransitLine> *_line;
    BOOL _blocked;
    NSDate *_serviceResumesDate;
    NSTimeZone *_timeZone;
    NSDate *_referenceDate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<GEOTransitDepartureSequence> *departuresSequence; // ivar: _departuresSequence
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<GEOTransitLine> *line;
@property (readonly, nonatomic) NSString *serviceResumesDescription;
@property (readonly) Class superclass;


-(id)initWithTransitLine:(id)arg0 blocked:(BOOL)arg1 serviceResumesDate:(id)arg2 timeZone:(id)arg3 referenceDate:(id)arg4 departuresSequence:(id)arg5 ;


@end


#endif