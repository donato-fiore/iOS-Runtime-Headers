// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIORDEREDEVENTINTERNAL_H
#define SIORDEREDEVENTINTERNAL_H


#import <Foundation/Foundation.h>

#import "SILogicalTimestampInternal.h"
#import "SISchemaTopLevelUnionType.h"

@interface SIOrderedEventInternal : NSObject

@property (nonatomic, readonly) SILogicalTimestampInternal *logicalTimestamp; // ivar: logicalTimestamp
@property (nonatomic, readonly) SISchemaTopLevelUnionType *tluEvent; // ivar: tluEvent


+(id)deserializeFrom:(id)arg0 ;
-(id)init;
-(id)initWithLogicalTimestamp:(id)arg0 tluEvent:(id)arg1 ;
-(id)serialize;


@end


#endif