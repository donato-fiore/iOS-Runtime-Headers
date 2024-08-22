// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMFINDEXSTRATEGYDEFAULT_H
#define EMFINDEXSTRATEGYDEFAULT_H



#import "EMFAbstractIndexStrategy.h"

@interface EMFIndexStrategyDefault : EMFAbstractIndexStrategy



-(CGFloat)_calculateCumulativeTermWeightForQueryTokenCounts:(id)arg0 inDocumentID:(id)arg1 ;
-(id)calculateDocumentWeightsForQueryTokenCounts:(id)arg0 ;
-(id)commonDocumentsForTerms:(id)arg0 ;
-(id)postingsForTerm:(id)arg0 ;
-(id)termWeightForTerm:(id)arg0 inDocument:(id)arg1 ;
-(id)termsForDocument:(id)arg0 ;


@end


#endif