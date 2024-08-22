// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIORDEREDEVENT_H
#define SIORDEREDEVENT_H


#import <Foundation/Foundation.h>

#import "SIOrderedEventInternal.h"
#import "SILogicalTimestamp.h"
#import "SISchemaTopLevelUnionType.h"

@interface SIOrderedEvent : NSObject {
    SIOrderedEventInternal *_underlying;
    SILogicalTimestamp *_underlyingTimestamp;
}


@property (readonly, nonatomic) SILogicalTimestamp *logicalTimestamp;
@property (readonly, nonatomic) SISchemaTopLevelUnionType *topLevelUnionType;


+(id)deserializeFromData:(id)arg0 ;
-(id)data;
-(id)initWithData:(id)arg0 ;
-(id)initWithInternalType:(id)arg0 ;
-(id)initWithTimestamp:(id)arg0 topLevelUnionType:(id)arg1 ;
-(id)serialize;


@end


#endif