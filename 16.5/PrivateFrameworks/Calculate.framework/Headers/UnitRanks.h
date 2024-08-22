// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNITRANKS_H
#define UNITRANKS_H

@class NSMutableArray, NSMutableSet;

#import <Foundation/Foundation.h>

#import "UnitsInfo.h"

@interface UnitRanks : NSObject

@property (readonly) BOOL containsCurrency; // ivar: _containsCurrency
@property (readonly) BOOL containsFrom; // ivar: _containsFrom
@property (readonly) BOOL containsTo; // ivar: _containsTo
@property (readonly) BOOL containsUnit; // ivar: _containsUnit
@property (readonly) BOOL isAmbiguous;
@property (retain, nonatomic) NSMutableArray *ranks; // ivar: _ranks
@property (retain, nonatomic) NSMutableSet *units; // ivar: _units
@property (weak, nonatomic) UnitsInfo *unitsInfo; // ivar: _unitsInfo


+(id)unitRanksWithUnitsInfo:(id)arg0 ;
-(id)init;
-(id)initWithUnitsInfo:(id)arg0 ;
-(void)addUnitRank:(id)arg0 ;
-(void)sort;


@end


#endif