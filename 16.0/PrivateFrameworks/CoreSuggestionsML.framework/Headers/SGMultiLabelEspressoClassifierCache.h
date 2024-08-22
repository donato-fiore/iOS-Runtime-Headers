// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMULTILABELESPRESSOCLASSIFIERCACHE_H
#define SGMULTILABELESPRESSOCLASSIFIERCACHE_H

@class _PASLock;

#import <Foundation/Foundation.h>


@interface SGMultiLabelEspressoClassifierCache : NSObject {
    _PASLock *_currentClassifier;
}




+(id)sharedInstance;
-(BOOL)setCachedEspressoClassifierWithFile:(id)arg0 ;
-(NSUInteger)outputDimensionWithFile:(id)arg0 ;
-(id)init;
-(id)predict:(id)arg0 withFile:(id)arg1 ;


@end


#endif