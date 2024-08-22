// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGTITLESPECCOLLECTION_H
#define PGTITLESPECCOLLECTION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PGTitleSpecCollection : NSObject

@property (readonly, nonatomic) NSArray *specPools; // ivar: _specPools


+(id)collectionWithSpecPools:(id)arg0 ;
-(id)_allPossibleTitlesWithMomentNodes:(id)arg0 forHighlight:(BOOL)arg1 argumentEvaluationContext:(id)arg2 ;
-(id)allPossibleTitlesWithHighlightMomentNodes:(id)arg0 argumentEvaluationContext:(id)arg1 ;
-(id)allPossibleTitlesWithMomentNodes:(id)arg0 argumentEvaluationContext:(id)arg1 ;
-(id)description;
-(id)initWithSpecPools:(id)arg0 ;


@end


#endif