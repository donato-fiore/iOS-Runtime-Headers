// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEANINGFULEVENTTRAIT_H
#define PGMEANINGFULEVENTTRAIT_H


#import <Foundation/Foundation.h>


@interface PGMeaningfulEventTrait : NSObject

@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isMatchingRequired;
@property (nonatomic) CGFloat minimumScore; // ivar: _minimumScore


-(id)debugDescription;
-(id)debugDescriptionWithMomentNode:(id)arg0 ;
-(id)init;


@end


#endif