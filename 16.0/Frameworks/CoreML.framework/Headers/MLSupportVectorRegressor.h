// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLSUPPORTVECTORREGRESSOR_H
#define MLSUPPORTVECTORREGRESSOR_H



#import "MLRegressor.h"
#import "MLSVREngine.h"

@interface MLSupportVectorRegressor : MLRegressor

@property (retain) MLSVREngine *engine; // ivar: _engine


-(id)initWithEngine:(id)arg0 description:(id)arg1 configuration:(id)arg2 error:(*id)arg3 ;
-(id)regress:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif