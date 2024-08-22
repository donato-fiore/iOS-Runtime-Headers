// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHMOMENTSINSERTION_H
#define PGGRAPHMOMENTSINSERTION_H

@class NSSet;


#import "PGGraphChange.h"

@interface PGGraphMomentsInsertion : PGGraphChange

@property (readonly, nonatomic) NSSet *momentUUIDs; // ivar: _momentUUIDs
@property (readonly, nonatomic) NSSet *moments; // ivar: _moments


-(NSUInteger)changeCount;
-(NSUInteger)type;
-(id)description;
-(id)initWithMomentUUIDs:(id)arg0 ;
-(id)initWithMoments:(id)arg0 ;


@end


#endif