// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMIFEATURESUBMODELLINK_H
#define SGMIFEATURESUBMODELLINK_H


#import <Foundation/Foundation.h>


@interface SGMIFeatureSubmodelLink : NSObject

@property (readonly) NSInteger bigramFeature; // ivar: _bigramFeature
@property (readonly) NSInteger submodeledFeature; // ivar: _submodeledFeature
@property (readonly) NSInteger unigramFeature; // ivar: _unigramFeature


-(id)initFor:(NSInteger)arg0 fromUnigram:(NSInteger)arg1 andBigram:(NSInteger)arg2 ;


@end


#endif