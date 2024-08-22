// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONSMAPRESULT_H
#define HKMEDICATIONSMAPRESULT_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "HKMedicationsNumberToNumberMap.h"
#import "HKMedicationsNumberToNumberPairListMap.h"

@interface HKMedicationsMapResult : NSObject

@property (retain, nonatomic) HKMedicationsNumberToNumberMap *commonDict; // ivar: _commonDict
@property (retain, nonatomic) HKMedicationsNumberToNumberMap *commonSetSizeDict; // ivar: _commonSetSizeDict
@property (retain, nonatomic) NSSet *distinctHgIds; // ivar: _distinctHgIds
@property (nonatomic) NSInteger ngramCount; // ivar: _ngramCount
@property (retain, nonatomic) HKMedicationsNumberToNumberPairListMap *uniqueDict; // ivar: _uniqueDict
@property (retain, nonatomic) HKMedicationsNumberToNumberMap *uniqueSetSizeDict; // ivar: _uniqueSetSizeDict




@end


#endif