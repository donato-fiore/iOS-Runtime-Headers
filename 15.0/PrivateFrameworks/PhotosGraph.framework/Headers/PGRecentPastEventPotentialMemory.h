// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGRECENTPASTEVENTPOTENTIALMEMORY_H
#define PGRECENTPASTEVENTPOTENTIALMEMORY_H

@class NSSet;


#import "PGPotentialMemory.h"

@interface PGRecentPastEventPotentialMemory : PGPotentialMemory

@property BOOL isBirthday; // ivar: _isBirthday
@property CGFloat meanContentScore; // ivar: _meanContentScore
@property CGFloat neighborScore; // ivar: _neighborScore
@property (retain) NSSet *personNodes; // ivar: _personNodes


-(id)description;
-(id)initWithAssetCollection:(id)arg0 momentNode:(id)arg1 subcategory:(NSUInteger)arg2 ;
-(id)initWithCategory:(NSUInteger)arg0 subcategory:(NSUInteger)arg1 momentNodes:(id)arg2 sourceType:(NSInteger)arg3 ;
-(void)computeRemainingScoresWithController:(id)arg0 previousPotentialMemory:(id)arg1 ;


@end


#endif