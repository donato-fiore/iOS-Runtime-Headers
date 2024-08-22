// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGDEDUPERML_H
#define SGDEDUPERML_H


#import <Foundation/Foundation.h>


@interface SGDeduperML : NSObject



+(id)bucketerWithEqualityTest:(SEL)arg0 ;
+(id)bucketerWithLabeledBuckets:(SEL)arg0 ;
+(id)bucketerWithMapping:(SEL)arg0 ;
// +(id)dedupe:(id)arg0 bucketer:(id)arg1 resolver:(unk)arg2  ;
+(id)resolveByPairs:(SEL)arg0 ;
+(id)resolveByScoreBreakTiesArbitrarily:(SEL)arg0 ;


@end


#endif