// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLSUPPORTVECTORCLASSIFIER_H
#define MLSUPPORTVECTORCLASSIFIER_H



#import "MLClassifier.h"
#import "MLSVMEngine.h"

@interface MLSupportVectorClassifier : MLClassifier

@property (retain) MLSVMEngine *engine; // ivar: _engine


+(id)featureValueWithObject:(id)arg0 ;
-(id)classify:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithEngine:(id)arg0 description:(id)arg1 configuration:(id)arg2 error:(*id)arg3 ;


@end


#endif