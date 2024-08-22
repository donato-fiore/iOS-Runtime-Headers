// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EMFQUERYEVALUATOR_H
#define EMFQUERYEVALUATOR_H


#import <Foundation/Foundation.h>

#import "EMFInvertedIndex.h"
#import "EMFQueryResultOverrideList.h"

@interface EMFQueryEvaluator : NSObject

@property (readonly, nonatomic) EMFInvertedIndex *index; // ivar: _index
@property (retain, nonatomic) EMFQueryResultOverrideList *overrideList; // ivar: _overrideList


-(id)_overriddenResultsForQuery:(id)arg0 ;
-(id)initWithIndex:(id)arg0 ;
-(id)initWithIndex:(id)arg0 andOverrideList:(id)arg1 ;
-(id)performQuery:(id)arg0 ;


@end


#endif