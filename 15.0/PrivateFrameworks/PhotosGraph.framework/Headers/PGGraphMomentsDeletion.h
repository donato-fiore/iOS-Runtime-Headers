// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHMOMENTSDELETION_H
#define PGGRAPHMOMENTSDELETION_H

@class NSSet;


#import "PGGraphChange.h"

@interface PGGraphMomentsDeletion : PGGraphChange

@property (readonly, nonatomic) NSSet *momentUUIDs; // ivar: _momentUUIDs


-(NSUInteger)changeCount;
-(NSUInteger)type;
-(id)description;
-(id)initWithMomentUUIDs:(id)arg0 ;


@end


#endif