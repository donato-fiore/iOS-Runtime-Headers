// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTSYSMONRECORDENUMERATOR_H
#define DTSYSMONRECORDENUMERATOR_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "DTSysmonTapRecordDecoder.h"

@interface DTSysmonRecordEnumerator : NSObject {
    NSUInteger _heartbeatTime;
}


@property (retain, nonatomic) DTSysmonTapRecordDecoder *recordDecoder; // ivar: _recordDecoder
@property (retain, nonatomic) NSArray *samples; // ivar: _samples


-(NSUInteger)enumerateRecordsWithBlock:(id)arg0 ;
-(id)initWithHeartbeatTime:(NSUInteger)arg0 ;


@end


#endif