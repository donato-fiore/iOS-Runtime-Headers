// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RKRESPONSECOUNTTIMESTAMPRECIPIENT_H
#define RKRESPONSECOUNTTIMESTAMPRECIPIENT_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface RKResponseCountTimestampRecipient : NSObject

@property int count; // ivar: _count
@property BOOL hasSameRecipient; // ivar: _hasSameRecipient
@property (retain) NSDate *timestamp; // ivar: _timestamp


-(id)initWithCount:(int)arg0 timestamp:(id)arg1 hasSameRecipient:(BOOL)arg2 ;


@end


#endif