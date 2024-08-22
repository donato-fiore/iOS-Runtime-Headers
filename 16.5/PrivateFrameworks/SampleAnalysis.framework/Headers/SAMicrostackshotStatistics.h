// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMICROSTACKSHOTSTATISTICS_H
#define SAMICROSTACKSHOTSTATISTICS_H


#import <Foundation/Foundation.h>

#import "SAMSTypeStats.h"

@interface SAMicrostackshotStatistics : NSObject

@property NSUInteger bytes_microstackshots_filtered_out; // ivar: _bytes_microstackshots_filtered_out
@property NSUInteger bytes_not_microstackshots; // ivar: _bytes_not_microstackshots
@property (readonly) SAMSTypeStats *interrupt; // ivar: _interrupt
@property (readonly) SAMSTypeStats *io; // ivar: _io
@property (readonly) SAMSTypeStats *macf; // ivar: _macf
@property NSUInteger num_microstackshots_filtered_out; // ivar: _num_microstackshots_filtered_out
@property (readonly) SAMSTypeStats *pmi; // ivar: _pmi
@property (readonly) SAMSTypeStats *timer; // ivar: _timer
@property (readonly) SAMSTypeStats *total; // ivar: _total
@property (readonly) SAMSTypeStats *unknown_type; // ivar: _unknown_type


-(id)init;


@end


#endif