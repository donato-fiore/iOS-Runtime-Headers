// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAACCESSRECORDACCUMULATOR_H
#define PAACCESSRECORDACCUMULATOR_H

@class NSMutableDictionary, NSMutableSet;
@protocol PAAccessRecord;

#import <Foundation/Foundation.h>


@interface PAAccessRecordAccumulator : NSObject

@property (readonly, nonatomic) NSMutableDictionary *ongoingIntervals; // ivar: _ongoingIntervals
@property (retain, nonatomic) NSObject<PAAccessRecord> *record; // ivar: _record
@property (readonly, nonatomic) NSMutableSet *seenEvents; // ivar: _seenEvents


-(id)init;


@end


#endif