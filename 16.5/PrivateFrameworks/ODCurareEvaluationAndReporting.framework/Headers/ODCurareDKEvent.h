// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODCURAREDKEVENT_H
#define ODCURAREDKEVENT_H

@class NSDate, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface ODCurareDKEvent : NSObject

@property (readonly) NSDate *endDate; // ivar: _endDate
@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly, copy) NSArray *metadata; // ivar: _metadata
@property (readonly) NSDate *startDate; // ivar: _startDate


-(id)initWithDKEvent:(id)arg0 ;


@end


#endif