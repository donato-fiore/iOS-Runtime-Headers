// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSPARSECBUNDLEFEATURECOLLECTION_H
#define SSPARSECBUNDLEFEATURECOLLECTION_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface SSParsecBundleFeatureCollection : NSObject

@property (retain, nonatomic) NSNumber *blockIdValue; // ivar: _blockIdValue
@property (retain, nonatomic) NSNumber *cep; // ivar: _cep
@property (retain, nonatomic) NSNumber *cepAllMaxRatio; // ivar: _cepAllMaxRatio
@property (retain, nonatomic) NSNumber *cepMaxRatio; // ivar: _cepMaxRatio
@property (retain, nonatomic) NSNumber *maxCEPAbsRank; // ivar: _maxCEPAbsRank
@property (retain, nonatomic) NSNumber *maxCEPRelRank; // ivar: _maxCEPRelRank
@property (retain, nonatomic) NSNumber *maxScore; // ivar: _maxScore
@property (retain, nonatomic) NSNumber *maxScoreAbsRank; // ivar: _maxScoreAbsRank
@property (retain, nonatomic) NSNumber *maxScoreRelRank; // ivar: _maxScoreRelRank
@property (retain, nonatomic) NSNumber *numResults; // ivar: _numResults
@property (retain, nonatomic) NSNumber *originalOrderAbsRank; // ivar: _originalOrderAbsRank
@property (retain, nonatomic) NSNumber *originalOrderRelRank; // ivar: _originalOrderRelRank


-(id)description;


@end


#endif