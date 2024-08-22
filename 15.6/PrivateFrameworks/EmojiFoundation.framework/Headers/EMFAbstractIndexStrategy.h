// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMFABSTRACTINDEXSTRATEGY_H
#define EMFABSTRACTINDEXSTRATEGY_H

@class NSString, NSDictionary;
@protocol EMFIndexStrategy;

#import <Foundation/Foundation.h>


@interface EMFAbstractIndexStrategy : NSObject <EMFIndexStrategy>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *documentIndex; // ivar: _documentIndex
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *termIndex; // ivar: _termIndex


-(id)calculateDocumentWeightsForQueryTokenCounts:(id)arg0 ;
-(id)commonDocumentsForTerms:(id)arg0 ;
-(id)initWithTermIndex:(id)arg0 andDocumentIndex:(id)arg1 ;
-(id)postingsForTerm:(id)arg0 ;
-(id)termWeightForTerm:(id)arg0 inDocument:(id)arg1 ;
-(id)termsForDocument:(id)arg0 ;
-(void)assertMethodNeedsConcreteImplementation:(SEL)arg0 ;


@end


#endif