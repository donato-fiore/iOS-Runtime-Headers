// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLBERTCLASSIFIERRESULT_H
#define SLBERTCLASSIFIERRESULT_H

@class NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface SLBertClassifierResult : NSObject

@property (readonly, nonatomic) NSString *assetVersion; // ivar: _assetVersion
@property (readonly, nonatomic) NSArray *domainProb; // ivar: _domainProb
@property (readonly, nonatomic) NSDictionary *extractedFeats; // ivar: _extractedFeats


-(id)dictionaryRepresentation;
-(id)initWithScore:(id)arg0 assetVersion:(id)arg1 extractedFeats:(id)arg2 ;


@end


#endif