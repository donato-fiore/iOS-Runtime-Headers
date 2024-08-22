// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOTHROTTLEDTICKET_H
#define _GEOTHROTTLEDTICKET_H

@protocol GEOMapServiceThrottlableTicket;

#import <Foundation/Foundation.h>


@interface _GEOThrottledTicket : NSObject

@property (nonatomic) unsigned int qos; // ivar: qos
@property (nonatomic) CGFloat safeTime; // ivar: safeTime
@property (copy, nonatomic) id *submissionHandler; // ivar: submissionHandler
@property (retain, nonatomic) NSObject<GEOMapServiceThrottlableTicket> *ticket; // ivar: ticket


+(id)ticket:(id)arg0 withHandler:(id)arg1 ;


@end


#endif