// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKSERIESDETAILS_H
#define EKSERIESDETAILS_H

@class NSArray, NSSet, EKEvent;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface EKSeriesDetails : NSObject <NSCopying>



@property (retain) NSArray *detachedEvents; // ivar: _detachedEvents
@property (retain) NSSet *exceptionDates; // ivar: _exceptionDates
@property (retain) EKEvent *masterEvent; // ivar: _masterEvent


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif