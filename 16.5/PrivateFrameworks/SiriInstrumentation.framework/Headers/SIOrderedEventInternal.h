// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIORDEREDEVENTINTERNAL_H
#define SIORDEREDEVENTINTERNAL_H

@class PBCodable;


#import "SILogicalTimestampInternal.h"
#import "SISchemaTopLevelUnionType.h"

@interface SIOrderedEventInternal : PBCodable

@property (nonatomic, retain) SILogicalTimestampInternal *logicalTimestamp; // ivar: logicalTimestamp
@property (nonatomic, retain) SISchemaTopLevelUnionType *tluEvent; // ivar: tluEvent


+(id)deserializeFrom:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithLogicalTimestamp:(id)arg0 tluEvent:(id)arg1 ;
-(void)writeTo:(id)arg0 ;


@end


#endif