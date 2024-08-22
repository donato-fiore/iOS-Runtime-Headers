// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLURESMITIGATORRESULT_H
#define SLURESMITIGATORRESULT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface SLUresMitigatorResult : NSObject

@property (readonly, nonatomic) NSString *assetVersion; // ivar: _assetVersion
@property (readonly, nonatomic) CGFloat decisionLevel; // ivar: _decisionLevel
@property (readonly, nonatomic) NSDictionary *detailedResult; // ivar: _detailedResult
@property (readonly, nonatomic) BOOL didMitigate; // ivar: _didMitigate
@property (readonly, nonatomic) NSDictionary *extractedFeats; // ivar: _extractedFeats
@property (readonly, nonatomic) float score; // ivar: _score
@property (readonly, nonatomic) float threshold; // ivar: _threshold


-(id)initWithScore:(float)arg0 decision:(BOOL)arg1 decisionLevel:(CGFloat)arg2 detailedResults:(id)arg3 extractedFeats:(id)arg4 ;


@end


#endif