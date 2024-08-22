// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMFINDEXSTRATEGYSINGLESTEMMEDINDEXONLY_H
#define EMFINDEXSTRATEGYSINGLESTEMMEDINDEXONLY_H



#import "EMFAbstractIndexStrategy.h"

@interface EMFIndexStrategySingleStemmedIndexOnly : EMFAbstractIndexStrategy



-(id)_calculateDocumentWeightsForQueryTokenCounts:(id)arg0 ;
-(id)_commonDocumentsForTerms:(id)arg0 ;
-(id)_postingsForTerm:(id)arg0 ;
-(id)_postingsForTerms:(id)arg0 ;
-(id)_termWeightForTerm:(id)arg0 inDocument:(id)arg1 ;
-(id)_termsForDocument:(id)arg0 ;
-(id)calculateDocumentWeightsForQueryTokenCounts:(id)arg0 ;
-(id)commonDocumentsForTerms:(id)arg0 ;
-(id)postingsForTerm:(id)arg0 ;
-(id)termWeightForTerm:(id)arg0 inDocument:(id)arg1 ;
-(id)termsForDocument:(id)arg0 ;


@end


#endif