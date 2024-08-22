// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSPARQLENDPOINT_H
#define CKSPARQLENDPOINT_H


#import <Foundation/Foundation.h>

#import "CKKnowledgeStore.h"

@interface CKSPARQLEndpoint : NSObject {
    CKKnowledgeStore *_knowledgeStore;
}




-(id)initWithKnowledgeStore:(id)arg0 ;
-(id)sparqlResultsForQuery:(id)arg0 error:(*id)arg1 ;
-(void)importTriplesFromFileAtPath:(id)arg0 ;


@end


#endif