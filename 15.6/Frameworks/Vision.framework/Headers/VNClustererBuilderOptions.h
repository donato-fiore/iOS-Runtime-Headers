// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNCLUSTERERBUILDEROPTIONS_H
#define VNCLUSTERERBUILDEROPTIONS_H



#import "VNClustererOptions.h"

@interface VNClustererBuilderOptions : VNClustererOptions



-(id)initWithType:(id)arg0 cachePath:(id)arg1 state:(id)arg2 threshold:(float)arg3 ;
-(id)initWithType:(id)arg0 cachePath:(id)arg1 state:(id)arg2 threshold:(float)arg3 torsoThreshold:(float)arg4 ;
-(id)initWithType:(id)arg0 cachePath:(id)arg1 state:(id)arg2 threshold:(float)arg3 torsoThreshold:(float)arg4 requestRevision:(NSUInteger)arg5 ;


@end


#endif