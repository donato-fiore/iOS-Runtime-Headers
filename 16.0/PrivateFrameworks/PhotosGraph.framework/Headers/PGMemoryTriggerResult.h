// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMEMORYTRIGGERRESULT_H
#define PGMEMORYTRIGGERRESULT_H

@class NSDateInterval;
@protocol PGMemoryNodeProtocol;

#import <Foundation/Foundation.h>


@interface PGMemoryTriggerResult : NSObject

@property (readonly, nonatomic) NSObject<PGMemoryNodeProtocol> *memoryNode; // ivar: _memoryNode
@property (readonly, nonatomic) NSDateInterval *validityInterval; // ivar: _validityInterval


-(id)description;
-(id)initWithMemoryNode:(id)arg0 validityInterval:(id)arg1 ;


@end


#endif