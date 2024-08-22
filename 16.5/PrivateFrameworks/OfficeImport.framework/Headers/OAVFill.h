// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OAVFILL_H
#define OAVFILL_H


#import <Foundation/Foundation.h>


@interface OAVFill : NSObject



+(id)readBlipRefFromManager:(id)arg0 state:(id)arg1 ;
+(id)readFromManager:(id)arg0 state:(id)arg1 ;
+(id)targetBgColorWithManager:(id)arg0 ;
+(id)targetFgColorWithManager:(id)arg0 ;
+(void)addStopsFromArray:(struct OAVGradientStop *)arg0 stopCount:(int)arg1 inverted:(BOOL)arg2 startPos:(float)arg3 endPos:(float)arg4 toGradientFill:(id)arg5 manager:(id)arg6 ;
+(void)readGradientFill:(id)arg0 fromManager:(id)arg1 ;
+(void)readImageFill:(id)arg0 fromManager:(id)arg1 state:(id)arg2 ;


@end


#endif