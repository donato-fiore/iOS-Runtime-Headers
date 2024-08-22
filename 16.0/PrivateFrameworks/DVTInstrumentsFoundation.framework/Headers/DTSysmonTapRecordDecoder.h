// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTSYSMONTAPRECORDDECODER_H
#define DTSYSMONTAPRECORDDECODER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface DTSysmonTapRecordDecoder : NSObject {
    NSUInteger _mostRecentEpoch;
    NSArray *_processAttributes;
    NSArray *_systemAttributes;
    NSArray *_coalitionAttributes;
}




-(NSUInteger)enumerateRecordsFromSample:(id)arg0 block:(id)arg1 ;


@end


#endif