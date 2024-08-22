// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LRRCOMPARATORUTIL_H
#define LRRCOMPARATORUTIL_H


#import <Foundation/Foundation.h>


@interface LRRComparatorUtil : NSObject



+(BOOL)compareEmbeddingTensor1:(id)arg0 withEmbeddingTensor2:(id)arg1 ;
+(BOOL)compareEntityCandidate1:(id)arg0 withEntityCandidate2:(id)arg1 ;
+(BOOL)compareInternalMDSpanData1:(id)arg0 withMDSpanData2:(id)arg1 ;
+(BOOL)compareInternalMRSpanData1:(id)arg0 withMRSpanData2:(id)arg1 ;
+(BOOL)compareInternalSpanData1:(id)arg0 withInternalSpanData2:(id)arg1 ;
+(BOOL)compareMDMRUsoGraphs:(id)arg0 graph2:(id)arg1 ;
+(BOOL)compareMatchingSpans:(id)arg0 span2:(id)arg1 ;
+(BOOL)compareRRGroupId1:(id)arg0 withRRGroupId2:(id)arg1 ;
+(BOOL)compareSiriCommonStringValue1:(id)arg0 withCommonStringValue2:(id)arg1 ;
+(BOOL)compareToken1:(id)arg0 withToken2:(id)arg1 ;
+(BOOL)compareTokenChain1:(id)arg0 withTokenChain2:(id)arg1 ;
+(BOOL)compareUSOEntityIdentifier1:(id)arg0 withUSOEntityIdentifier2:(id)arg1 ;
+(BOOL)compareUSONode1:(id)arg0 withUSONode2:(id)arg1 ;
+(BOOL)hasDanglingNode:(id)arg0 nodes2:(id)arg1 ;
+(id)buildEdgIdSignature:(id)arg0 ;


@end


#endif