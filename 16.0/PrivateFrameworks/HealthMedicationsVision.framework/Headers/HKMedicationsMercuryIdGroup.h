// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICATIONSMERCURYIDGROUP_H
#define HKMEDICATIONSMERCURYIDGROUP_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface HKMedicationsMercuryIdGroup : NSObject

@property (nonatomic) BOOL ingredientMatched; // ivar: _ingredientMatched
@property (nonatomic) float maxJaccardSimilarity; // ivar: _maxJaccardSimilarity
@property (nonatomic) NSInteger primaryHgId; // ivar: _primaryHgId
@property (copy, nonatomic) NSArray *subHgIds; // ivar: _subHgIds


-(id)description;


@end


#endif