// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(id)initWithEvent:(id)arg0 ;
-(id)initWithMasterEvent:(id)arg0 detachedEvents:(id)arg1 exceptionDates:(id)arg2 ;


@end


#endif