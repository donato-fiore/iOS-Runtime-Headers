// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMFINVERTEDINDEX_H
#define EMFINVERTEDINDEX_H

@class NSBundle, NSDictionary, NSURL;
@protocol EMFIndexStrategy;

#import <Foundation/Foundation.h>


@interface EMFInvertedIndex : NSObject

@property (retain, nonatomic) NSBundle *assetBundle; // ivar: _assetBundle
@property (retain, nonatomic) NSDictionary *documentIndex; // ivar: _documentIndex
@property (retain, nonatomic) NSURL *documentIndexURL; // ivar: _documentIndexURL
@property (retain, nonatomic) NSObject<EMFIndexStrategy> *strategy; // ivar: _strategy
@property (retain, nonatomic) NSDictionary *termIndex; // ivar: _termIndex
@property (retain, nonatomic) NSURL *termIndexURL; // ivar: _termIndexURL


-(id)calculateDocumentWeightsForQueryTokenCounts:(id)arg0 ;
-(id)commonDocumentsForTerms:(id)arg0 ;
-(id)initWithTermIndex:(id)arg0 andDocumentIndex:(id)arg1 ;
-(id)postingsForTerm:(id)arg0 ;
-(id)termWeightForTerm:(id)arg0 inDocument:(id)arg1 ;
-(id)termsForDocument:(id)arg0 ;


@end


#endif